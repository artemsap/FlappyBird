cmake_minimum_required(VERSION 3.22.1)

set(CMAKE_CXX_STANDARD 20)

project(FlapyBird LANGUAGES CXX)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -MP")

set(SRC
	main.cpp
)
	
add_executable(${PROJECT_NAME} ${SRC})
	
source_group(TREE "${CMAKE_CURRENT_SOURCE_DIR}" FILES ${SRC})
	
target_link_libraries(${PROJECT_NAME} PUBLIC

)
