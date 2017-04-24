import QtQuick 2.2
import QtQuick.Controls 1.1
import QtQuick.Layouts 1.1
import Qt.WebSockets 1.0

import set 1.0

ApplicationWindow {
    id: rootWindow

    width: 700/2
    height: 1000/2

    WebSocketClient{
        id: chatClient
        url: "ws:// 78.47.115.243:8080"
    }

    StackView{
        id: mainStackView
        anchors.fill: parent

        initialItem: Qt.resolvedUrl("LoginPage.qml");
    }

    Component.onCompleted: show()
}
