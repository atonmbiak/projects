import QtQuick 2.2
import QtQuick.Controls 1.2
import QtQuick.Layouts 1.0
import QtQuick.Dialogs 1.1


BasePage {
    height:parrent.height; width: parent.width
    titel: "ComboBox"
    menuButtonsText: ["back"]

    ListModel{
        id: breakfastModel
        ListElement{ type: "coffee"}
        ListElement{ type: "muesli"}
        ListElement{ type: "cola"}
        ListElement{ type: "bread"}
        ListElement{ type: "egg"}
        ListElement{ type: "honey"}
        ListElement{ type: "cheese"}
    }
    Rectangle{
        anchors.fill: parent

        ColumnLayout{
            spacing: 70

            ComboBox{
                id: cBox
                editable: true

                model: ["drinking", "eat"]
                onCurrentIndexChanged: {
                    breakfastModel.append({type: cBox.currentText})
                }
            }
            TableView{
                TableViewColumn{role: "type" ; title: "What do you like? "; width: 300}
                    model: breakfastModel
            }
        }
    }
    onMenuButtonClicked: {
        switch ( buttonIndex ) {
        case 0: mainStackView.pop(); break;
        case 1: mainStackView.push(breakfast); break;
        default: console.log("error")
        }
    }
}
