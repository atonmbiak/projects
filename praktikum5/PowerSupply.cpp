#include "PowerSupply.h"

//Konstuktor

PowerSupply::PowerSupply (QObject *parent)
        : QObject (parent), m_volt(0),m_ampere(0),m_watt(0){}

//public slot der Klasse PowerSupply

void PowerSupply::set_volt(int volt){
    m_volt = volt;
    m_watt = m_ampere * m_volt;

    if(m_watt>m_maxwatt){
        m_watt = m_maxwatt;
        m_ampere=(m_maxwatt/m_volt);
}
    //versenden eines Signals
    emit voltChanged();
    emit ampereChanged();
}

void PowerSupply::set_ampere(int ampere){
    m_ampere = ampere;
    m_watt = m_ampere * m_volt;

    if(m_watt>m_maxwatt){
        m_watt = m_maxwatt;
        m_volt=(m_maxwatt/m_ampere);
        emit voltChanged();
    }

    //versenden eines Signals
    emit ampereChanged();
    emit wattChanged();
}

void PowerSupply::set_watt(int watt){
    m_watt = watt;

    //versenden eines Signals
    emit wattChanged();
}

void PowerSupply::set_maxwatt(int maxwatt){
    m_maxwatt = maxwatt;
    if(maxwatt == 0){
        m_volt = 0;
        m_ampere = 0;
    }
    else{
        if(maxwatt < m_watt){
            if(m_ampere < m_volt)
                m_volt -= 1;
            else
                m_ampere -= 1;
        }
    }
    //versenden eines Signals
    emit maxwattChanged();
    emit voltChanged();
    emit ampereChanged();
}
