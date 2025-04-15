# CMakeList.txt : CMake project for ProceduralBuildings, include source and define
# project specific logic here.
#
#cmake_minimum_required (VERSION 3.8)

# Enable Hot Reload for MSVC compilers if supported.
#if (POLICY CMP0141)
 # cmake_policy(SET CMP0141 NEW)
  #set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
#endif()

#project ("ProceduralBuildings")
#set(CMAKE_CXX_STANDARD 17)
#set(CMAKE_CXX_STANDARD_REQUIRED ON)

#find_package(OpenGL REQUIRED)
#find_package(glfw3 REQUIRED)

# Root level
#file(GLOB ROOT_SOURCE src/*.cpp)
#file(GLOB ROOT_HEADER include/*.h)

# Source groups for Visual Studio
#source_group("Source Files\\Root" FILES ${ROOT_SOURCE})
#source_group("Header Files\\Root" FILES ${ROOT_HEADER})

# Add source to this project's executable.
# add_executable (ProceduralBuildings "ProceduralBuildings.cpp" "ProceduralBuildings.h" "src/main.cpp")
#add_executable(${PROJECT_NAME} ${ROOT_SOURCE} ${ROOT_HEADER}
	#external/glad/src/glad.c
#)

#target_link_libraries(${PROJECT_NAME}
#	${OPENGL_LIBRARIES}
#	glfw
#)

#include_directories(${glfw3_INCLUDE_DIR})

#target_include_directories(${PROJECT_NAME} PRIVATE 
#	include
#	external/glad/include
#	external/glfw/include
#	external/glm
#)


#if (CMAKE_VERSION VERSION_GREATER 3.12)
 # set_property(TARGET ProceduralBuildings PROPERTY CXX_STANDARD 20)
#endif()

cmake_minimum_required(VERSION 3.15)
project(ProceduralBuildings)
cmake_policy(SET CMP0072 NEW)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${CMAKE_CURRENT_SOURCE_DIR}/cmake)

find_package(OpenGL REQUIRED)
find_package(glfw3 REQUIRED)

file(GLOB_RECURSE SRC_FILES src/*.cpp)
set(GLAD_SRC external/glad/src/glad.c)

add_executable(ProceduralBuildings
	src/main.cpp
	${GLAD_SRC}
)

target_include_directories(ProceduralBuildings PRIVATE
	include
	external/glad/include
	external/glfw/include
	external/glm
)

link_directories(${CMAKE_SOURCE_DIR}/external/glfw/lib-vc2022)

target_link_libraries(ProceduralBuildings ${GLFW3_LIBRARY} OpenGL::GL)