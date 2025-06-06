# Additional targets to perform clang-format/clang-tidy
# Get all project files
file(GLOB_RECURSE
     ALL_CXX_SOURCE_FILES
     *.[chi]pp *.[chi]xx *.cc *.hh *.ii *.[CHI]
     )

# Adding clang-format target if executable is found
find_program(CLANG_FORMAT "clang-format")
if(CLANG_FORMAT)
  add_custom_target(
    clang-format
    COMMAND /usr/bin/clang-format
    -i
    -style=file
    ${ALL_CXX_SOURCE_FILES}
    )
endif()

# Adding clang-tidy target if executable is found
find_program(CLANG_TIDY "clang-tidy")
if(CLANG_TIDY)
  file(GLOB_RECURSE DEMETER_SOURCES src/demeter/*.cpp)
  add_custom_target(
    clang-tidy
    COMMAND /usr/bin/clang-tidy
    ${DEMETER_SOURCES} # ${ALL_CXX_SOURCE_FILES}
    -config=''
    --
    -std=c++20
    -I ${CMAKE_CURRENT_SOURCE_DIR}/src
    -I /usr/include/eigen3/ # TODO find a general way to include
    )
endif()
