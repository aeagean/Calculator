TEMPLATE = app

QT += qml quick
CONFIG += c++11

INCLUDEPATH += infrastructure infrastructure/tool infrastructure/keys

SOURCES += main.cpp \
    infrastructure/Calculator.cpp \
    infrastructure/tool/CInput.cpp \
    infrastructure/tool/CAnalyse.cpp \
    infrastructure/tool/CHandle.cpp \
    infrastructure/keys/ClearKey.cpp \
    infrastructure/keys/BackSpaceKey.cpp \
    infrastructure/keys/KeyBase.cpp \
    infrastructure/keys/NumKey.cpp \
    infrastructure/keys/AddKey.cpp \
    infrastructure/keys/SubKey.cpp \
    infrastructure/keys/MulKey.cpp \
    infrastructure/keys/DivKey.cpp \
    infrastructure/keys/PerKey.cpp \
    infrastructure/keys/DotKey.cpp \
    infrastructure/keys/DoubleZero.cpp

RESOURCES += qml.qrc \
    resources.qrc

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Default rules for deployment.
include(deployment.pri)

HEADERS += \
    infrastructure/Calculator.h \
    infrastructure/tool/CInput.h \
    infrastructure/tool/CAnalyse.h \
    infrastructure/tool/CHandle.h \
    infrastructure/keys/ClearKey.h \
    infrastructure/keys/BackSpaceKey.h \
    infrastructure/keys/KeyBase.h \
    infrastructure/keys/NumKey.h \
    infrastructure/keys/AddKey.h \
    infrastructure/keys/SubKey.h \
    infrastructure/keys/MulKey.h \
    infrastructure/keys/DivKey.h \
    infrastructure/keys/PerKey.h \
    infrastructure/keys/DotKey.h \
    infrastructure/keys/DoubleZero.h

DISTFILES += \
    android-sources/AndroidManifest.xml

ANDROID_PACKAGE_SOURCE_DIR = $$PWD/android-sources
