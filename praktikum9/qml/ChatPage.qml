import QtQuick 2.0
import QtQuick.Controls 1.2
import QtQuick.Layouts 1.1

Item {
    id: loginPage
    height: parent.height
    width: parent.width
    visible: false




    Rectangle {
        id: chatRect
        anchors.fill: parent
        color: "orange"

        ListModel {
            id: listModel
        }

        ListView {
            id: listView
            model: listModel
            height: 500
            width: parent.width
            delegate: Component {
                Rectangle{
                    border.width: 2
                    border.color: "white"
                    radius: 8
                    color:"orange"  //bei Colum auch
                    width: parent.width
                    height: 50
                    Text {
                        id:text1
                        // anchors.top: parent.top  //bei Colum auch
                        anchors.margins:35
                        //anchors.left:parent.left
                        x: parent.width/ 4
                        y: 10
                        text: user /*+ " " + message;*/
                    }
                    Text {
                        id:text2
                        //anchors.margins:12
                        anchors.bottom: parent.bottom  //bei Colum auch
                        text: " " +message
                    }
                }
            }

        }

        Connections {
            target: chatClient
            onNewMessageReceived: {
                var message = {
                    message: messageObject.content,
                    user: messageObject.user
                }
                console.log(message.message)
                listModel.append(message);

                listView.positionViewAtEnd()

            }
        }

        TextField {
            id: messageField
            anchors.bottom: chatRect.bottom
            width: 300
            text: ""
        }

        Button {
            text: "send"
            id: sendButton
            anchors.bottom: chatRect.bottom
            anchors.left: messageField.right


            onClicked: {
                if (messageField.text.length === 0)
                    return

                chatClient.sendMessage(messageField.text)
                messageField.text = ""

            }
        }
    }
}
