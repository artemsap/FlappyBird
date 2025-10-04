cmake_minimum_required(VERSION 3.22.1)

set(CMAKE_CXX_STANDARD 20)

project(FlappyBird LANGUAGES CXX)

set_property(GLOBAL PROPERTY USE_FOLDERS ON)

add_subdirectory(ThirdParty) #import libs here

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -MP")

set(SRC
	src/App.cpp
	src/App.h
	src/Level.cpp
	src/Level.h
	src/Window.cpp
	src/Window.h
	src/Drawable.h
	src/KeyboardBinding.cpp
	src/KeyboardBinding.h
	src/Bird.cpp	
	src/Bird.h
	src/Pipe.cpp	
	src/Pipe.h
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

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
	COMMAND ${CMAKE_COMMAND} -E copy_directory
	${CMAKE_SOURCE_DIR}/assets $<TARGET_FILE_DIR:${PROJECT_NAME}>/assets
)

set_target_properties(${PROJECT_NAME} PROPERTIES
    VS_DEBUGGER_WORKING_DIRECTORY "${CMAKE_BINARY_DIR}/$<CONFIG>"
)

if(MSVC)
    target_link_options(${PROJECT_NAME} PRIVATE "/SUBSYSTEM:WINDOWS")
endif()