<<<<<<< .mine
import QtQuick 2.0
import QtQuick 2.3

  Rectangle{
        //color: "blue"
        id: content
        height: 80
        //anchors{left:parent.left;right: parent.right}
        anchors.left: parent.left
        anchors.right: parent.right
        //border.width:4
        radius:10
        clip:true
        //Behavior on scale{NumberAnimation{easing.type:Easing.outQuad}}

        Column{

                        id : kurse

                        Text{text:'Fach: ' +modelData.name}
                        Text{text:'Fach_Abkürzung: ' +modelData.identificationCode}
                        Text{text:'Schwierigkeit: ' +modelData.severity}
                        Text{text:'Lerngruppe: ' +modelData.lernenGroup}
                }
  }


||||||| .r0
=======
import QtQuick 2.0
import QtQuick 2.3

    Rectangle{
        //color: "blue"
        id: content
        anchors{left:parent.left;right: parent.right}
        height: column.implicitHeight

        //border.width:4
        radius:10
        clip:true
       // Behavior on scale{NumberAnimation{easing.type:Easing.outQuad}}

        Column{

                        id : kurse

                        Text{text:'Fach: ' +modelData.name}
                        Text{text:'Fach_Abkürzung: ' +modelData.identificationCode}
                        Text{text:'Schwierigkeit: ' +modelData.severity}
                        Text{text:'Lerngruppe: ' +modelData.lernenGroup}
                }

             }
>>>>>>> .r39