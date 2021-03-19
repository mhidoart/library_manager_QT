QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    author.cpp \
    authormanager.cpp \
    category.cpp \
    categorymanager.cpp \
    loginwindow.cpp \
    main.cpp \
    mainwindow.cpp \
    ouvrage.cpp \
    ouvragemanager.cpp \
    ouvragewindow.cpp \
    user.cpp \
    usermanager.cpp \
    userwindow.cpp

HEADERS += \
    author.h \
    authormanager.h \
    category.h \
    categorymanager.h \
    loginwindow.h \
    mainwindow.h \
    ouvrage.h \
    ouvragemanager.h \
    ouvragewindow.h \
    user.h \
    usermanager.h \
    userwindow.h

FORMS += \
    loginwindow.ui \
    mainwindow.ui \
    ouvragewindow.ui \
    userwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources.qrc
