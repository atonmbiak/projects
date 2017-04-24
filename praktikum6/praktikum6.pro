#additional Qt modules
QT += quick qml

#Include project files
INCLUDEPATH += $$PWD

SOURCES += main.cpp \
    converter.cpp

HEADERS += \
    converter.h

RESOURCES += qml/qml.qrc

OTHER_FILES +=

#use c++11 compiler flags
CONFIG += c++11 

#additional libraries (configured with the feature files in the qmake folder) - libs has to be at the end of the config var
#CONFIG += opencv libs

#Android specific variables - will be ignored in other configuration
ANDROID_PACKAGE_SOURCE_DIR =
ANDROID_EXTRA_LIBS =
OTHER_FILES += $$files($$PWD/android/*)

# Additional import path used to resolve QML modules in Creator's code model
QML_IMPORT_PATH += $$qml_dir
QML_IMPORT_PATH += $$plugin_dir

#copy the executable to the source folder
DLLDESTDIR = $$_PRO_FILE_PWD_
