import QtQuick 2.2
import QtQuick.Controls 1.2
import QtQuick.Layouts 1.1

ApplicationWindow {
    width: 1024
    height: 768

    Image {
        id: bild
        source: "hs-mannheim.jpg"
        height: 155
        width: 680
    }
    Row{
        MyButton{

            Text{
                color: "green"
                text: "button 1"
                anchors.centerIn: parent
            }
        }
        MyButton{
            Text{
                color: "green"
                text: "button 2"
                anchors.centerIn: parent
            }
        }
        MyButton{
            Text{
                color: "green"
                text: "button 3"
                anchors.centerIn: parent
            }
        }
        spacing: 5
        anchors.top: bild.bottom
    }

    Component.onCompleted: show()
}
