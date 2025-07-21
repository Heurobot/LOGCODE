project(LOG_CODE)

set(CMAKE_CXX_STANDARD 11)

include_directories(./cpp-log-system/include ./unittest)

file(GLOB SOURCES "cpp-log-system/src/*.cpp" "unittest/*.cpp")

add_executable(LOG_CODE ${SOURCES})