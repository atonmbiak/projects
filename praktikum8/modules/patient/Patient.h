#ifndef PATIENT_H
#define PATIENT_H
#include<qobject.h>
#include<qstring.h>

class Patient : public QObject{

    Q_OBJECT

    Q_PROPERTY(int id READ id WRITE setId NOTIFY idChanged)
    Q_PROPERTY(QString forename READ forename WRITE setForename NOTIFY forenameChanged)
    Q_PROPERTY(QString familyName READ familyName WRITE setFamilyName NOTIFY familyNameChanged)


    int m_id;
    QString m_forename;
    QString m_familyName;

public:
    Patient(QObject* parrent=NULL);

    int id() const {return m_id;}
    void setId (int id){
        m_id = id;
        emit idChanged();}

    QString forename ()const{return m_forename;}
    void setForename (QString forename){
        m_forename = forename;
        emit forenameChanged();}

    QString familyName () const {return m_familyName;}
    void setFamilyName (QString familyName){
        m_familyName = familyName;
        emit familyNameChanged();}


signals:

    void idChanged();
    void forenameChanged();
    void familyNameChanged();

};

#endif // PATIENT_H
