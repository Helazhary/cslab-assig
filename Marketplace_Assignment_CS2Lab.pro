QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    customer.cpp \
    main.cpp \
    buy_sell.cpp \
    product.cpp \
    regcustomer.cpp \
    regseller.cpp \
    seller.cpp

HEADERS += \
    buy_sell.h \
    customer.h \
    product.h \
    regcustomer.h \
    regseller.h \
    seller.h

FORMS += \
    buy_sell.ui \
    regcustomer.ui \
    regseller.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
