set(CMAKE_SYSTEM_NAME Windows)

set(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)
set(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY)

set(LOCAL_SDL_LIB "dependencies/lib-SDL2-2.0.4-VC" CACHE STRING "" FORCE)
set(LOCAL_BOOST_LIB ON CACHE BOOL "" FORCE)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

add_definitions("-DBOOST_ALL_NO_LIB")
