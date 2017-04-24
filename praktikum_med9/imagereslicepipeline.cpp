#include "imagereslicepipeline.h"
#include <QtDebug>

ImageReslicePipeline::ImageReslicePipeline(QObject *parent) : QObject(parent)
  ,m_level(0)
  ,m_window(2048)
  ,m_sliceNumber(0)
  ,m_tempImageData(vtkSmartPointer<vtkImageData>::New())
  ,m_dicomReader(vtkSmartPointer<vtkDICOMImageReader>::New())
  ,m_resliceAxes(vtkSmartPointer<vtkMatrix4x4>::New())
  ,m_imageReslice(vtkSmartPointer<vtkImageReslice>::New())
  ,m_lookupTable{vtkSmartPointer<vtkLookupTable>::New()}
  ,m_levelWindowMapper(vtkSmartPointer<vtkImageMapToColors>::New())
  ,m_imageActor(vtkSmartPointer<vtkImageActor>::New())
{
    QObject::connect(this, &ImageReslicePipeline::sliceNumberChanged, this, &ImageReslicePipeline::updatePipeline);
    QObject::connect(this, &ImageReslicePipeline::levelChanged, this, &ImageReslicePipeline::updatePipeline);
    QObject::connect(this, &ImageReslicePipeline::windowChanged, this, &ImageReslicePipeline::updatePipeline);

    m_tempImageData->SetExtent(0, 1,0, 1, 0, 1);
    m_tempImageData->AllocateScalars(VTK_DOUBLE, 3);

    //set values to
    m_tempImageData->SetScalarComponentFromDouble(0, 0, 0, 0, -1024);
    m_tempImageData->SetScalarComponentFromDouble(0, 1, 0, 0, -1024);
    m_tempImageData->SetScalarComponentFromDouble(1, 0, 0, 0, -1024);
    m_tempImageData->SetScalarComponentFromDouble(1, 1, 0, 0, -1024);

}

ImageReslicePipeline::~ImageReslicePipeline()
{

}
void ImageReslicePipeline::setupPipeline(vtkRenderer *renderer)
{
    m_resliceAxes->Identity();
    m_imageReslice->SetInputData(m_tempImageData);
    m_imageReslice->SetResliceAxes(m_resliceAxes);
    m_imageReslice->SetOutputDimensionality(2);
    m_imageReslice->SetInterpolationModeToLinear();

    m_lookupTable->SetRange(level()-window()/2., level()+window()/2.);
    m_lookupTable->SetValueRange(0.0, 1.0); //from black to white
    m_lookupTable->SetSaturationRange(0.0, 0.0); //no color saturation
    m_lookupTable->SetRampToLinear();
    m_lookupTable->Build();

    m_levelWindowMapper->SetLookupTable(m_lookupTable);
    m_levelWindowMapper->SetInputConnection(m_imageReslice->GetOutputPort());

    m_imageActor->GetMapper()->SetInputConnection(m_levelWindowMapper->GetOutputPort());

    renderer->AddActor(m_imageActor);
    renderer->ResetCamera();
    renderer->GetActiveCamera()->OrthogonalizeViewUp();
    renderer->GetActiveCamera()->ParallelProjectionOn();
}

void ImageReslicePipeline::updatePipeline()
{
  m_resliceAxes->SetElement(0, 3, 0);
  m_resliceAxes->SetElement(1, 3, 0);
  m_resliceAxes->SetElement(2, 3, m_sliceNumber);
  m_resliceAxes->Modified();

  m_lookupTable->SetRange(level()-window()/2, level()+window()/2);
  m_imageActor->Update();

}



int ImageReslicePipeline::window() const
{
    return m_window;
}

int ImageReslicePipeline::level() const
{
    return m_level;
}

int ImageReslicePipeline::sliceNumber() const
{
    return m_sliceNumber;
}

void ImageReslicePipeline::setWindow(int window)
{
    if (m_window == window)
        return;

    m_window = window;
    emit windowChanged(window);
}

void ImageReslicePipeline::setLevel(int level)
{
    if (m_level == level)
        return;

    m_level = level;
    emit levelChanged(level);
}

void ImageReslicePipeline::setSliceNumber(int sliceNumber)
{
    if (m_sliceNumber == sliceNumber)
        return;

    m_sliceNumber = sliceNumber;
    emit sliceNumberChanged(sliceNumber);
}
