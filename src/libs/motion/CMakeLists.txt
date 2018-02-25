project(motion VERSION 0.0.1 LANGUAGES CXX)

add_library(
  ${PROJECT_NAME}
  INTERFACE
  )

target_include_directories(
  ${PROJECT_NAME}
  INTERFACE
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  )

target_link_libraries(
  ${PROJECT_NAME}
  ${CONAN_LIBS}
  )
