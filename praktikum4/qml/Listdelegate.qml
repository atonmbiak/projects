<<<<<<< .mine
import QtQuick 2.0
import QtQuick 2.3

Rectangle{
        id: content
        width:300
        //height:800/3
        anchors{left:parent.left;right: parent.right}
        height:  200
        //height: column2.implicitHeight + 5
        border.width:5
        border.color:"lightsteelblue"
        radius:10
        clip:true
        Behavior on scale{NumberAnimation{easing.type:Easing.outQuad}}
        MouseArea{
            anchors.fill: parent
            onPressed:{
                parent.scale = 0.9
                image.opacity = 1
            }
            onReleased:{
                parent.scale = 1.0
                image.opacity = 0.3
            }

            Row{
                spacing: 20

                Image{
                   // anchors.left:parent.left
                    id: image
                    source: modelData.image

                    smooth: true
                    opacity: 0.9 //affecte la qualité de l´image
                    Behavior on opacity {NumberAnimation {easing.type: Easing.OutQuad}}
                }
                /*Rectangle{ // comment continuer. comment bien ecrire mon rectangle
                    id: modules
                    height: column.implicitHeight
                    width: column.implicitWidth*/
                    //Row{
                        //spacing: 30


                    Column{

                        id:column

                        Text{text:'Vorname:' +modelData.forename}
                        Text{text:'Nachname:'+ modelData.name}
                        Text{text:'Alter:' + modelData.age}
                        Text{text:'Studiengang:' +modelData.course}
                        Text{text:'Matrikelnummer:' +modelData.matriculationNumber}
                    }
                    Rectangle{
                        height:100
                        width: 200
                        y:5
                    ListView{

                        id: view

                        anchors {fill: parent}


                        spacing: 8
                        cacheBuffer: 20
                        model:modelData.modules
                        delegate: Modulesdelegate{}
                    }
}


            //}
        }
}
}
//}














||||||| .r0
=======
import QtQuick 2.0
import QtQuick 2.3

Rectangle{
        id: content
        width:column.implicitWidth + 60
        //height:800/3
        anchors{left:parent.left;right: parent.right}
        height: column.implicitHeight + 60
        //height: column2.implicitHeight + 5
        border.width:5
        border.color:"lightsteelblue"
        radius:10
        clip:true
        Behavior on scale{NumberAnimation{easing.type:Easing.outQuad}}
        MouseArea{
            anchors.fill: parent
            onPressed:{
                parent.scale = 0.9
                image.opaity = 1
            }
            onReleased:{
                parent.scale = 1.0
                image.opacity = 0.3
            }

            Row{
                spacing: 20

                Image{
                    anchors.left:parent.left
                    id: image
                    source: modelData.image

                    smooth: true
                    opacity: 0.9 //affecte la qualité de l´image
                    Behavior on opacity {NumberAnimation {easing.type: Easing.OutQuad}}
                }






                Column{
                    height:300
                    width: 400
                    id:column

                    Text{text:'Vorname:' +modelData.forename}
                    Text{text:'Nachname:'+ modelData.name}
                    Text{text:'Alter:' + modelData.age}
                    Text{text:'Studiengang:' +modelData.course}
                    Text{text:'Matrikelnummer:' +modelData.matriculationNumber}
                    //Text{text:'source' +modelData.image}
                }


               /* Column{

                        id : column2
//wie greife ich drauf zu? und die Bilder wie habe ich die anzuhängen?
                        Text{text:'Fach:' +modelData.name}
                        Text{text:'Fach_Abkürzung:' +modelData.identificationCode}
                        Text{text:'Schwierigkeit:' +modelData.severity}
                        Text{text:'Lerngruppe:' +modelData.lernenGroup}

                }*/
                Rectangle{ // comment continuer. comment bien ecrire mon rectangle
                    id: modules
                    width:content.implicitWidth + 25
                    height:content.implicitWidth + 25

                    ListView{
                        height: 400
                        width: 700
                        id: view

                        anchors {fill: parent; margins: 2}


                        spacing: 8
                        cacheBuffer: 8
                        model:modelData.modules
                        delegate: Modulesdelegate{}
                    }
                }

            }

            }
            }













>>>>>>> .r39
