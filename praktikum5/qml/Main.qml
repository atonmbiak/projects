import QtQuick 2.2
import QtQuick.Controls 1.2
import QtQuick.Layouts 1.1
import PowerSupply 1.0

ApplicationWindow {

    id: window
    visible: true
    width: 500
    height: 300
    property int fontSize: window.height * 2 < window.width ? window.height / 10 : window.width / 20


    PowerSupply{
        id: powerSupply
        ampere: powerSlider.value
        volt: voltageSlider.value
        maxwatt: wattageSlider.value

    }

    Column{
        id: column1
        spacing: window.height / 40

        Text {
            id: heading
            width: window.width
            font.pixelSize: 2* fontSize
            text: "Power Supply"
            horizontalAlignment:  Text.AlignHCenter
            color: "blue"

        }
        Row {
            id: rowPower
            spacing: 10

            Text {
                id: powerText
                height: fontSize
                width: 4* fontSize
                text:  "Power:"
                font.pixelSize: fontSize
            }

            Slider {
                id: powerSlider
                height: fontSize
                width: window.width-powerText.width-powerValue.width-2*rowPower.spacing
                stepSize: 1
                maximumValue: 100
                value: powerSupply.ampere
                //onValueChanged: { voltageSlider.value = powerSupply.volt}
            }

            Text {
                id: powerValue
                height: fontSize
                width: 4* fontSize
                text: powerSupply.ampere.toFixed() + "mA"
                font.pixelSize: fontSize
            }
        }

        Row {
            id: rowVoltage
            spacing: 10

            Text {
                id: voltageText
                height: fontSize
                width: 4* fontSize
                text: "Voltage:"
                font.pixelSize: fontSize
            }

            Slider {
                id: voltageSlider
                height: fontSize
                width: window.width-powerText.width-voltageValue.width-2*rowVoltage.spacing
                stepSize: 1
                maximumValue: 100
                value: powerSupply.volt
                //onValueChanged: { powerSlider.value = powerSupply.amp}
            }

            Text {
                id: voltageValue
                height: fontSize
                width: 4* fontSize
                text: powerSupply.volt.toFixed() + "mV"
                font.pixelSize: fontSize
            }
        }

        Row    {
            id: rowMaxWattage
            spacing: 10

            Text{
                id: maxWattageText
                height: fontSize
                width: 4* fontSize
                text: "max Watt: "
                font.pixelSize: fontSize
            }

            Slider {
                id: wattageSlider
                height: fontSize
                width: window.width-maxWattageText.width-maxWattageValue.width-2*rowMaxWattage.spacing
                stepSize: 1
                maximumValue: 10000
                //onValueChanged: {voltageSlider.value = powerSupply.volt ; powerSlider.value = powerSupply.amp}
            }

            Text {
                id: maxWattageValue
                height: fontSize
                width: 4* fontSize
                text: powerSupply.maxwatt.toFixed() + "mW"
                font.pixelSize: fontSize
            }
        }

        Row{
            id:rowWattage

            Text {
                id: wattageValue
                height: fontSize
                width: 4* fontSize
                text: "Watt:" + powerSupply.watt + "mW"
                font.pixelSize: fontSize
            }
        }
    }
    Button{
        id: closebutton
        text: "Close"
        width: parent.width
        height: fontSize
        anchors.bottom: parent.bottom
        MouseArea{
            anchors.fill: parent
            onClicked:{
                Qt.quit();
            }
        }
    }
}
