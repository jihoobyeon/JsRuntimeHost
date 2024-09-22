set(SOURCES 
    "Include/Babylon/Polyfills/XMLHttpRequest.h"
    "Source/XMLHttpRequest.cpp"
    "Source/XMLHttpRequest.h")

add_library(XMLHttpRequest ${SOURCES})
warnings_as_errors(XMLHttpRequest)

target_include_directories(XMLHttpRequest PUBLIC "Include")
message(STATUS "테스트 0")
target_link_libraries(XMLHttpRequest
    PUBLIC JsRuntime
    PRIVATE arcana
    PRIVATE UrlLib)
message(STATUS "테스트 1")
set_property(TARGET XMLHttpRequest PROPERTY FOLDER Polyfills)
source_group(TREE ${CMAKE_CURRENT_SOURCE_DIR} FILES ${SOURCES})
message(STATUS "테스트 2")
