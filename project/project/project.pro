TEMPLATE = app

QT += qml quick
CONFIG += c++11

INCLUDEPATH += Windows

SOURCES += main.cpp \
    Windows/WinManager.cpp \
    Windows/ApplicationContext.cpp \
    Windows/Screen.cpp \
    Windows/Win.cpp

RESOURCES += qml.qrc

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Default rules for deployment.
include(deployment.pri)

HEADERS += \
    Windows/WinManager.h \
    Windows/ApplicationContext.h \
    Windows/Screen.h \
    Windows/Win.h
