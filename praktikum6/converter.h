#ifndef CONVERTER_H
#define CONVERTER_H

#include <QObject>
#include <QtCore>

class Converter: public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString bin READ getBin WRITE setBin NOTIFY binChanged)
    Q_PROPERTY(QString oct READ getoct WRITE setOct NOTIFY octChanged)
    Q_PROPERTY(QString dec READ getdec WRITE setDec NOTIFY decChanged)
    Q_PROPERTY(QString hex READ gethex WRITE setHex NOTIFY hexChanged)

    QString m_bin;
    QString m_oct;
    QString m_dec;
    QString m_hex;

    QString m_test;

public:
    Converter();
    QString formatBin(QString s);


    QString getBin() const;
    QString getoct() const;
    QString getdec() const;
    QString gethex() const;


public slots:
    void setBin(QString bin);
    void setOct(QString oct);
    void setDec(QString dec);
    void setHex(QString hex);
    void update (int a);



signals:
    void binChanged();
    void octChanged();
    void decChanged();
    void hexChanged();
};

#endif // CONVERTER_H

