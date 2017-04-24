import QtQuick 2.2
import QtQuick.Controls 1.2
import QtQuick.Layouts 1.0
import QtQuick.Dialogs 1.1


BasePage {
    height: parent.height; width: parent.width

    titel: "Personal"

    menuButtonsText: [ "back", "next" ]

    Rectangle {
        anchors.fill: parent
        color: "lightsteelblue"


        Text{
            id: textId
            anchors.bottom: parent.bottom
            text:"person Page"
            font.pixelSize: 35
        }
        ColumnLayout{
            spacing: 10
            TextField{
                Layout.preferredWidth: 450
                width: 400
                placeholderText: qsTr("familyname and name")
            }
            TextField{
                Layout.preferredWidth: 50
                width: 50
                placeholderText: qsTr("sex: man/girl")

            }

            Label {text: " Choose please the dateOfBirth "}
            Calendar{
                Layout.preferredWidth: 300
                Layout.preferredHeight: 350
                weekNumbersVisible: true
                onClicked: myLabel.text = "Datum: " + date.toLocaleDateString("dd.MM.YYYY")
            }
            Label {
                id: myLabel}
         }




        }
    onMenuButtonClicked: {
        switch ( buttonIndex ) {
        case 0: mainStackView.pop(); break;
        case 1: mainStackView.push( dailyroutinePage ); break;
        default: console.log("error")
        }
    }
}

