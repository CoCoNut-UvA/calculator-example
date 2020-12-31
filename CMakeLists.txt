cmake_minimum_required(VERSION 3.13)

project(calculator VERSION 0.1 LANGUAGES C)

find_package(BISON REQUIRED)
find_package(FLEX REQUIRED)

bison_target(CalcParser src/scanParse/parser.y "${CMAKE_CURRENT_BINARY_DIR}/parser.c"
    DEFINES_FILE "${CMAKE_CURRENT_BINARY_DIR}/parser.h")

flex_target(CalcLexer src/scanParse/lexer.l "${CMAKE_CURRENT_BINARY_DIR}/lexer.c"
    DEFINES_FILE "${CMAKE_CURRENT_BINARY_DIR}/lexer.h")
ADD_FLEX_BISON_DEPENDENCY(CalcLexer CalcParser)


include(./coconut/coconut.cmake)

add_executable(calculator ${FLEX_CalcLexer_OUTPUTS} ${BISON_CalcParser_OUTPUTS} src/main.c src/print.c src/scanParse/scanParse.c)

coconut_target_generate(calculator "${CMAKE_CURRENT_LIST_DIR}/src/calc.ccn" dynamic)
target_link_libraries(calculator PRIVATE readline)
target_include_directories(calculator PRIVATE "${CMAKE_CURRENT_BINARY_DIR}")
