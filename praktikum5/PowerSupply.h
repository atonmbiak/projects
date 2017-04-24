#ifndef POWER_SUPPLY_H
#define POWER_SUPPLY_H

#include <qobject>

class PowerSupply: public QObject{
    Q_OBJECT

    Q_PROPERTY(double volt READ get_volt WRITE set_volt NOTIFY voltChanged)
    Q_PROPERTY(double ampere READ get_ampere WRITE set_ampere NOTIFY ampereChanged)
    Q_PROPERTY(double watt READ get_watt WRITE set_watt NOTIFY wattChanged)
    Q_PROPERTY(double maxwatt READ get_maxwatt WRITE set_maxwatt NOTIFY maxwattChanged)

 private:
    double m_volt;
    double m_ampere;
    double m_watt;
    double m_maxwatt;

 public:
    PowerSupply(QObject*parent = NULL);

 public slots:
    void set_volt (int volt);
    void set_ampere (int ampere);
    void set_watt (int watt);
    void set_maxwatt (int maxwatt);

    double get_volt (){return m_volt;}
    double get_ampere () {return m_ampere;}
    double get_watt () {return m_watt;}
    double get_maxwatt(){return m_maxwatt;}


 signals:
    void voltChanged ();
    void ampereChanged ();
    void wattChanged ();
    void maxwattChanged ();
};

#endif //POWER_SUPPLY_H
