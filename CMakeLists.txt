cmake_minimum_required(VERSION 3.22.1)

set(CMAKE_CXX_STANDARD 20)

project(FlappyBird LANGUAGES CXX)

set_property(GLOBAL PROPERTY USE_FOLDERS ON)

add_subdirectory(ThirdParty) #import libs here

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -MP")

set(SRC
	src/GameApp.cpp
	src/GameApp.h
	src/GameLevel.cpp
	src/GameLevel.h
	src/GameWindow.cpp
	src/GameWindow.h
	src/Drawable.h
	src/KeyboardBinding.cpp
	src/KeyboardBinding.h
	src/main.cpp
)
	
add_executable(${PROJECT_NAME} ${SRC})
	
source_group(TREE "${CMAKE_CURRENT_SOURCE_DIR}" FILES ${SRC})
	
target_link_libraries(${PROJECT_NAME} PUBLIC
	sfml-window
	sfml-system
	sfml-network
	sfml-main
	sfml-graphics
	sfml-audio
)

if(MSVC)
    target_link_options(FlappyBird PRIVATE "/SUBSYSTEM:WINDOWS")
endif()