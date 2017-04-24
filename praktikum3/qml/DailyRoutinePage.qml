import QtQuick 2.2
import QtQuick.Controls 1.2
import QtQuick.Layouts 1.0
import QtQuick.Dialogs 1.1

BasePage{
    height: parent.height; width: parent.width

    titel: "DailyRoutine"
    menuButtonsText: [ "back", "next" ]

    Rectangle{
        anchors.fill: parent

        RowLayout{
            spacing: 50

            Repeater{
                model: 3

                Rectangle{
                    width: 70
                    height: 500

                    ColumnLayout{
                        spacing:15
                        Label{text:" leavingHouseTime "}


                        Slider{
                            id: mySlider
                            value: spinbox.value
                            maximumValue: 24
                            stepSize: 0.25
                            orientation: Qt.Vertical
                            height:600
                            Layout.fillHeight: true
                        }
                        SpinBox {
                            id: spinbox
                            decimals: 2
                            value: mySlider.value
                            width: 100
                            Layout.fillWidth: true


                        }
                        Switch{
                            checked: true
                            onCheckedChanged: spinbox.enabled= mySlider.enabled=checked
                        }
                }

            }

        }

    }}
        onMenuButtonClicked: {
        switch ( buttonIndex ) {
        case 0: mainStackView.pop(); break;
        case 1: mainStackView.push(breakfast); break;
        default: console.log("error")
        }
    }
}



