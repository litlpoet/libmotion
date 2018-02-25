project(tests VERSION 0.0.1 LANGUAGES CXX)

# modules
set(TEST_MATH test_math)
set(TEST_MOTION test_motion)

# test math module
add_executable(
  ${TEST_MATH}
  math/test_math.cpp
  )
target_link_libraries(
  ${TEST_MATH}
  ${CONAN_LIBS}
  math
  )
add_test(
  NAME    ${TEST_MATH}
  COMMAND ${TEST_MATH}
  )

# test motion module
add_executable(
  ${TEST_MOTION}
  motion/test_motion.cpp
  )
target_link_libraries(
  ${TEST_MOTION}
  ${CONAN_LIBS}
  math
  motion
  )
add_test(
  NAME    ${TEST_MOTION}
  COMMAND ${TEST_MOTION}
  )
