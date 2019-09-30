TEMPLATE = app
QMAKE_CXXFLAGS += -std=c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    gym/envs/MountainCar.cpp \
    gym/spaces/box.cpp \
    gym/spaces/discrete.cpp \
    gym/gym.cpp \
    gym/main.cpp

HEADERS += \
    gym/envs/MountainCar.h \
    gym/spaces/box.h \
    gym/spaces/discrete.h \
    gym/spaces/space.h \
    gym/core.h \
    gym/env_list.h \
    gym/exceptions.h \
    gym/gym.h

INCLUDEPATH += /usr/include/eigen3/
