set(target_name "MyExe")

add_executable("${target_name}"
    #WIN32 # Create WinMain() entry point instead of main() and link with /SUBSYSTEM:WINDOWS. Ignored on non-win platforms.
    #MACOSX_BUNDLE # Build app bundle for Apple ecosystem. Ignored on non-Apple platforms.
    #EXCLUDE_FROM_ALL # Exclude this target from building when no target is specified. 
    main.cpp
)

target_link_libraries("${target_name}"
    PRIVATE
        models
)

install (TARGETS "${target_name}"
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    FRAMEWORK DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)