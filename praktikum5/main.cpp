#include <QtQuick>
#include <QTCore>

#include "PowerSupply.h"

int main(int argc, char* argv[])
{
    QGuiApplication app(argc, argv);
    //PowerSupply* ps = new PowerSupply;

    qmlRegisterType<PowerSupply>("PowerSupply", 1, 0,"PowerSupply");
    QScopedPointer<QQmlApplicationEngine> engine(new QQmlApplicationEngine);

    engine->addImportPath(":/");
    //engine->rootContext()->setContextProperty("PowerSupply", ps);

    engine->load(QUrl("qrc:/Main.qml"));

    return app.exec();
}
