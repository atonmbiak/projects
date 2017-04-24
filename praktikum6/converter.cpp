#include "converter.h"
#include <QtDebug>

QString Converter::formatBin(QString s)
{

    qDebug() << s;
    int v = 4;
    for(int i = 0;i <= s.size();i++){

        if(((i % v) == 0)&&(i != 0))
        {

            s.insert(i++,QString("."));
            v=5;
        }

        //          s[j].append('.');
        //          s[k].append(' ');
    }

    return s;
}

void Converter::setBin(QString bin){
    bin.remove('.');
    bin.remove(' ');
    bool ok;
    int v = bin.toInt (&ok, 2);
    if (ok)
        update(v);
    else
        emit binChanged ();

}
void Converter::setOct(QString oct){
    oct.remove('.');
    oct.remove(' ');
    bool ok;
    int v = oct.toInt (&ok, 8);
    if (ok)
        update(v);
    else
        emit octChanged ();

}
void Converter::setDec(QString dec){
    dec.remove('.');
    dec.remove(' ');
    bool ok;
    int v = dec.toInt (&ok, 10);
    if (ok)
        update(v);
    else
        emit decChanged ();

}
void Converter::setHex(QString hex){
    hex.remove('.');
    hex.remove(' ');
    bool ok;
    int v = hex.toInt (&ok, 16);
    if (ok)
        update(v);
    else
        emit hexChanged ();
}



void Converter::update(int v){
    QString a= QString::number(v, 2);
    a = formatBin(a);
    if(a!= m_bin){
        m_bin = a;
        emit binChanged();
    }
    QString b= QString::number(v, 8);
    //b = formatOct(b);
    if(b!= m_oct){
        m_oct = b;
        emit octChanged();
    }
    QString c= QString::number(v, 10);
    //c = formatDec(s);
    if(c!= m_dec){
        m_dec = c;
        emit decChanged();
    }
    QString d= QString::number(v, 16);
    //d = formatHex(d);
    if(d!= m_hex){
        m_hex = d;
        emit hexChanged();
    }
}

QString Converter::getBin() const
{
    return m_bin;
}

QString Converter::getoct() const
{
    return m_oct;
}

QString Converter::getdec() const
{
    return m_dec;
}

QString Converter::gethex() const
{
    return m_hex;
}

/*void Converter::setBin(QString bin)
{
    if (m_bin == bin)
        return;

    m_bin = bin;
    emit binChanged();
}

void Converter::setOct(QString oct)
{
    if (m_oct == oct)
        return;

    m_oct = oct;
    emit octChanged();
}

void Converter::setDec(QString dec)
{
    if (m_dec == dec)
        return;

    m_dec = dec;
    emit decChanged();
}

void Converter::setHex(QString hex)
{
    if (m_hex == hex)
        return;

    m_hex = hex;
    emit hexChanged();
}
*/
Converter::Converter()
//    :m_bin(0)
//    ,
//      m_oct(0)
//    ,
//      m_dec(0)
//    ,
//      m_hex(0)
{
 //   QObject::connect(this, &Converter::binChanged, this, &Converter::);
    //binChanged(QString bin);
    //QObject::connect(this, &Converter::binChanged, this, &Converter::update);
}
