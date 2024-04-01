set(HEADER_STATIC_FILE "${beautiful_SOURCE_DIR}/include/static/example.h")
add_library(static_lib static/example.cpp ${HEADER_STATIC_FILE})
target_include_directories(static_lib PUBLIC ../include)

include(FetchContent)
FetchContent_Declare(fmtlib GIT_REPOSITORY https://github.com/fmtlib/fmt.git) # path where to take lib
FetchContent_MakeAvailable(fmtlib) # builds to "cmake-build-debug/_deps"
target_link_libraries(static_lib PRIVATE fmt::fmt)


#source_group(TREE "${beautiful_SOURCE_DIR}/include"
#                PREFIX "HEADER FILES"
#                FILES ${HEADER_STATIC_FILE})
