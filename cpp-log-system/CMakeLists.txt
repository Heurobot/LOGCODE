project(cpp-log-system)

set(CMAKE_CXX_STANDARD 11)

include_directories(include)

file(GLOB SOURCES "src/*.cpp")

add_executable(cpp-log-system ${SOURCES})