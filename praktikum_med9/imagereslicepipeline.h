#ifndef IMAGERESLICEPIPELINE_H
#define IMAGERESLICEPIPELINE_H

#include <QObject>

#include "vtkSmartPointer.h"
#include "vtkRenderWindow.h"
#include "vtkRenderer.h"
#include "vtkRenderer.h"
#include "vtkActor.h"
#include "vtkImageData.h"
#include "vtkImageActor.h"
#include "vtkImageReslice.h"
#include "vtkLookupTable.h"
#include "vtkImageMapToColors.h"
#include "vtkImageMapper3D.h"
#include "vtkMatrix4x4.h"
#include "vtkCamera.h"
#include "vtkPolyDataMapper.h"
#include "vtkProperty.h"
#include "vtkDICOMImageReader.h"


class ImageReslicePipeline : public QObject
{
    Q_OBJECT
	
    Q_PROPERTY(int sliceNumber READ sliceNumber WRITE setSliceNumber NOTIFY sliceNumberChanged)
    Q_PROPERTY(int window READ window WRITE setWindow NOTIFY windowChanged)
    Q_PROPERTY(int level READ level WRITE setLevel NOTIFY levelChanged)

	// ...

    int m_sliceNumber;
	// ...	

    int m_window;

    int m_level;
    vtkSmartPointer<vtkImageData> m_tempImageData;
    vtkSmartPointer<vtkDICOMImageReader> m_dicomReader;
    vtkSmartPointer<vtkMatrix4x4> m_resliceAxes;
    vtkSmartPointer<vtkImageReslice> m_imageReslice;
    vtkSmartPointer<vtkLookupTable> m_lookupTable;
    vtkSmartPointer<vtkImageMapToColors> m_levelWindowMapper;
    vtkSmartPointer<vtkImageActor> m_imageActor;

public:
    explicit ImageReslicePipeline(QObject *parent = 0);
    virtual ~ImageReslicePipeline();

	// ...

int window() const;

int level() const;

int sliceNumber() const;

signals:
    void sliceNumberChanged(int sliceNumber);
	// ...

    void windowChanged(int window);

    void levelChanged(int level);

public slots:
    void setupPipeline(vtkRenderer* renderer);
    void updatePipeline();

    void setWindow(int window);
    void setLevel(int level);
    void setSliceNumber(int sliceNumber);
};

#endif // IMAGERESLICEPIPELINE_H
