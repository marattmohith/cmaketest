

# get all *.cpp files recursively
#file(GLOB_RECURSE SRC_FILES ${PROJECT_SOURCE_DIR}/*[.cpp|.h])

#Add the given directories to those the compiler uses to search for include files.
include_directories(${CMAKE_CURRENT_SOURCE_DIR})
add_subdirectory(simple)
add_subdirectory(advanced)
add_executable(executableCmake main.cpp)
target_link_libraries(executableCmake simple advanced)

