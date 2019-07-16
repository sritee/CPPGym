TEMPLATE = app
QMAKE_CXXFLAGS += -std=c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    envs/MountainCar.cpp \
    main.cpp \
    spaces/box.cpp \
    spaces/discrete.cpp \
    gym.cpp

HEADERS += \
    envs/MountainCar.h \
    core.h \
    spaces/space.h \
    spaces/box.h \
    spaces/discrete.h \
    env_list.h \
    gym.h

INCLUDEPATH += /usr/include/eigen3/
