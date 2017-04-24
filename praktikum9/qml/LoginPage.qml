import QtQuick 2.0
import QtQuick.Controls 1.2
import QtQuick.Layouts 1.1

Item {
    id: loginPage
    height: parent.height
    width: parent.width
    visible: false

    Rectangle {
        id: loginRect
        anchors.fill: parent
        color: "grey"
        Image{
            id:bild
            source:"images/hs-mannheim.jpg"
            anchors.top: parent.top
        }

        Text{
            text: "SET Chat"
            color: "yellow"
            font.pointSize: 20
            width: 208
            height: 53
            anchors.centerIn: bild

        }

        TextField
        {
            id: loginTextField
            anchors.centerIn: loginRect
            placeholderText: qsTr("Username")
            width: loginPage.width * 8/10
            text: "  "

        }

        Button{
            Layout.alignment: Qt.AlignHCenter
            id: loginButton
            text: "Login"
            anchors.horizontalCenter: loginTextField.horizontalCenter
            anchors.top: loginTextField.bottom
            anchors.topMargin: 25

            onClicked: {
                chatClient.username = loginTextField.text;
                chatClient.open();
                mainStackView.push(Qt.resolvedUrl("ChatPage.qml"));
            }

        }
        Button{
            Layout.alignment: Qt.AlignHCenter
            id: closeButton
            text: "close"
            anchors.horizontalCenter: loginTextField.horizontalCenter
            anchors.bottom: parent.bottom
            anchors.topMargin: 25  //gilt nur etwas daoben dran steht

            onClicked: {
                Qt.quit()  //für alle Funktionen einfach [steuerungtaste+leertaste] drücken
            }
        }

    }


}
