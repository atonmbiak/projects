#include <QGuiApplication>
#include <QtQuick>
#include "converter.h"

int main(int argc, char* argv[])
{
    QGuiApplication app(argc, argv);
    qmlRegisterType<Converter>("Converter", 1,0, "Converter");
    QScopedPointer<QQmlApplicationEngine> engine(new QQmlApplicationEngine);
    engine->addImportPath(":/");
    
    engine->load(QUrl("qrc:/main.qml"));

    return app.exec();
}
