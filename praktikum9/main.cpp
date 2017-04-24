#include <QGuiApplication>
#include <QtQuick>
#include <websocketclient.h>

int main(int argc, char* argv[])
{
    QGuiApplication app(argc, argv);

    qmlRegisterType<WebSocketClient>("set", 1, 0, "WebSocketClient");


    QScopedPointer<QQmlApplicationEngine> engine(new QQmlApplicationEngine);
    engine->addImportPath(":/");
    
    engine->load(QUrl("qrc:/main.qml"));

    return app.exec();
}
