cmake_minimum_required(VERSION 3.24)

set(CMAKE_CXX_STANDARD 14)

project(flatbuffers_cmake_boilerplate)

# Download Flatbuffers
set (FLATBUFFERS_BUILD_TESTS OFF)
set (FLATBUFFERS_INSTALL OFF)

include(FetchContent)
FetchContent_Declare(
	flatbuffers
	GIT_REPOSITORY https://github.com/google/flatbuffers.git
	GIT_TAG v24.3.25
	OVERRIDE_FIND_PACKAGE
)
FetchContent_MakeAvailable(flatbuffers)

find_package(flatbuffers REQUIRED)

add_subdirectory(./schemas)
add_subdirectory(./app)
