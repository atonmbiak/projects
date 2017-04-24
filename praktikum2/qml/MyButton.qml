import QtQuick 2.2
import QtQuick.Controls 1.2



Rectangle{

        id: myItem
        radius: 10
        height: 105
        width: 205
        color: "blue"
        /*Text{
            id: buttonLabel
            text: "button"
            anchors.centerIn: parent;

        }*/

        states:[
            State{
                name: "AN"
                PropertyChanges{ target: myItem; color: "red"}
                PropertyChanges{ target: myItem; scale: 0.9}
            },
            State{
                name: "AUS"
                PropertyChanges{ target: myItem; color: "blue"}
                PropertyChanges{ target: myItem; scale: 1.0}
            }
        ]
        MouseArea{
            anchors.fill: myItem
            onClicked:{
                if (myItem.state == "AN"){
                myItem.state = "AUS"}
                else /*(myItem.state == "AUS")*/{
                    myItem.state = "AN"}
            }
        }
}















