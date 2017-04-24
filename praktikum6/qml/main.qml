import QtQuick 2.3
import QtQuick.Controls 1.2
import QtQuick.Layouts 1.1
import Converter 1.0

ApplicationWindow {
    id: root
    width: 800
    height: 600
    visible: true

    Rectangle {
        anchors.centerIn:parent
        anchors.margins: 50
        anchors.fill: parent
        color: "black"
        Converter{id: converter }
    }
    Image{
        id:bild
        source:"images/converter.jpg"
        anchors.fill: parent
    }

    ColumnLayout{
                    anchors.fill:parent
                    height:parent.height
                    anchors.rightMargin: 0
                    anchors.bottomMargin: 0
                    anchors.leftMargin: 0
                    anchors.topMargin: 0
                    width:parent.width
                    spacing: 10

                }
                Text{width: 208; height: 33; color: "yellow"; text:"Number Converter";font.pointSize: 20; anchors.horizontalCenter:  parent.horizontalCenter;}
                RowLayout{
                    anchors.centerIn: parent
                    spacing:4


                    Column
                    {
                        spacing: 10
                        Text{color: "yellow"; text:"Binary: "; font.pointSize: 12}
                        Text{color: "yellow"; text:"Octal: " ; font.pointSize: 12}
                        Text{color: "yellow"; text:"Decimal: "; font.pointSize: 12}
                        Text{color: "yellow"; text:"Hexadecimal: "; font.pointSize: 12}
                    }
                    Column{
                        spacing: 7

                        TextField{
                            id:binText
                            width: 200
                            text:converter.bin
                            onTextChanged: converter.bin = binText.text
                        }
                        TextField{
                            id:octText
                            width: 200
                            text:converter.oct
                            onTextChanged: converter.oct = octText.text
                        }
                        TextField{
                            id:decText
                            width: 200
                            text:converter.dec
                            onTextChanged: converter.dec = decText.text
                        }
                        TextField{
                            id:hexText
                            width: 200
                            text:converter.hex
                            onTextChanged: converter.hex = hexText.text
                        }
                    }
}

                     Button {
            height: 40
            Rectangle{Image {anchors.fill: parent; source: "Image/yildiz.png"}
                Text{anchors.centerIn: parent; text: "Close"; color:"black"; font.pointSize: 15 } anchors.fill: parent; color: "yellow"}
            anchors { left: parent.left; right: parent.right; bottom: parent.bottom}

            //onClicked: console.log("Close")
            onClicked: Qt.quit();
        }

        Component.onCompleted: show()

    }





