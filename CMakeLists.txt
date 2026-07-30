cmake_minimum_required(VERSION 3.21)
project(learning-cpp LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

option(STATIC_LINK "Fully static link (Linux/MinGW only)" OFF)

if(MSVC)
  add_compile_options(/W4 /utf-8 /permissive-)
  # Static CRT so users don't need the VC++ redistributable.
  set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")
else()
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# ---------------------------------------------------------------------------
# Auto-discover: every top-level directory holding a main.cpp becomes a target.
# ---------------------------------------------------------------------------
file(GLOB _mains CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/*/main.cpp")

if(NOT _mains)
  message(FATAL_ERROR "No */main.cpp found — run cmake from the repo root.")
endif()

foreach(_main IN LISTS _mains)
  get_filename_component(_dir "${_main}" DIRECTORY)
  get_filename_component(_name "${_dir}" NAME)

  # Skip tooling dirs just in case one ever gains a main.cpp
  if(_name MATCHES "^\\.")
    continue()
  endif()

  # Sanitise folder name -> valid target/binary name
  string(REGEX REPLACE "[^A-Za-z0-9_.-]" "_" _target "${_name}")

  add_executable(${_target} "${_main}")

  # Pick up any sibling .cpp files in the same folder
  file(GLOB _extra CONFIGURE_DEPENDS "${_dir}/*.cpp")
  list(REMOVE_ITEM _extra "${_main}")
  if(_extra)
    target_sources(${_target} PRIVATE ${_extra})
  endif()
  target_include_directories(${_target} PRIVATE "${_dir}")

  if(STATIC_LINK AND NOT MSVC AND NOT APPLE)
    target_link_options(${_target} PRIVATE -static)
  endif()

  install(TARGETS ${_target} RUNTIME DESTINATION bin)
  list(APPEND _all_targets ${_target})
endforeach()

message(STATUS "Discovered targets: ${_all_targets}")