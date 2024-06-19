cmake_minimum_required(VERSION 3.10)

project(CircleProgressWidget
  VERSION
    1.0
  DESCRIPTION
    "Circular Progress Bar Example"
  LANGUAGES
    CXX
)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

if(CMAKE_VERSION VERSION_LESS "3.12.0")
    set(CMAKE_INCLUDE_CURRENT_DIR ON)
endif()

find_package(Qt5 COMPONENTS Widgets REQUIRED)

find_package(Qt5Core REQUIRED)

set(SRC_FILES
		main.cpp
		mainwindow.cpp
		CircularProgress.cpp
		)

set(HEADER_FILES
		mainwindow.h
		CircularProgress.h
		)
		
set(UI_FILES
		mainwindow.ui
		)
		


add_executable(${PROJECT_NAME} ${SRC_FILES} ${HEADER_FILES} ${UI_FILES} )


add_definitions(-DQT_NO_VERSION_TAGGING)

target_link_libraries(${PROJECT_NAME} Qt5::Widgets)

qt5_use_modules(${PROJECT_NAME} Core)

include_directories(.)
