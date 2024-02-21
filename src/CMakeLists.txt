add_library(ks-literals 
  INTERFACE
)

target_include_directories(
  ks-literals
  INTERFACE
    "$<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/include>"
    "$<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>"
)

target_sources(
  ks-literals
  INTERFACE
    FILE_SET headers
      TYPE
        HEADERS
      BASE_DIRS
        ${PROJECT_SOURCE_DIR}/include/
      FILES
        ${PROJECT_SOURCE_DIR}/include/ks/literals.hpp
)

target_compile_features(
  ks-literals
  INTERFACE
    cxx_std_11
)

ks_install(
  TARGETS
    ks-literals
)
