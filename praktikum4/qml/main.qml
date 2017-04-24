import QtQuick 2.3
import QtQuick.Controls 1.2

ApplicationWindow {
    id: root

    width: 1000; height: 800
    function readFile() {
        var request = new XMLHttpRequest()

        request.open('GET', 'qrc:/Kommilitonen.txt')
        //request.overrideMimeType('text/plain; charset=x-user-defined')
        request.onreadystatechange = function(event){
            if (request.readyState === XMLHttpRequest.DONE){
                console.log(request.responseText)
                view.model = JSON.parse (request.responseText)
            }
        }
        request.send();
        }
    Rectangle {
        id: list
        //color: "blue"
        anchors.fill: parent

        width: 800; height: 800
        ListView{
            id: view

            anchors {fill: parent; margins: 8}
            delegate: Listdelegate{}

            spacing: 8
            cacheBuffer: 20
        }

        Component.onCompleted:{

            root.visible = true
            readFile();
        }
    }
}

