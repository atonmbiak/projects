#ifndef PATIENT_TEST_H
#define PATIENT_TEST_H

#include <qttest>
#include <qstring>
#include "Patient.h"

class PatientTest : public QObject
{
    Q_OBJECT

private slots:

    void constructorTest() {

        Patient p;

        QCOMPARE( p.id(), 0 );
        QVERIFY( p.forename() == NULL );
        QVERIFY( p.familyName() == NULL );
    }

    void idTest() {

        Patient p;

        p.setId( 10 );
        QCOMPARE( p.id(), 10 );

        p.setId( 1000 );
        QCOMPARE( p.id(), 1000 );
    }

    void forenameTest(){

        Patient p;

        const QString s1 = "Zimmermann";
        const QString s2 = "Bauer";

        p.setForename (s1);
        QCOMPARE (p.forename(), s1);

        p.setForename(s2);
        QVERIFY (p.forename() != s1);
        QCOMPARE (p.forename(), s2);

    }

    void familyNameText(){

        Patient p;

        const QString s1 = "Anna";
        const QString s2 = "Lisa";

        p.setFamilyName (s1);
        QCOMPARE (p.familyName(),s1);

        p.setFamilyName (s2);
        QCOMPARE (p.familyName(), s2);
    }
    
};

#endif // PATIENT_TEST_H
