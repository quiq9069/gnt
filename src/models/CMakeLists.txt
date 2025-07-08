set(target_name "models")

add_library("${target_name}")

target_sources("${target_name}"
    PUBLIC
        "item.h"
        "model.h"
    PRIVATE
        "item.cpp"
        "model.cpp"
)

install (TARGETS ${target_name}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    FRAMEWORK DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)