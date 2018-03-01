#define CATCH_CONFIG_MAIN

#include <catch.hpp>

#include <iostream>
#include <typeindex>

#include <math/matrix.hpp>
#include <math/real.hpp>
#include <math/vector.hpp>

TEST_CASE("Real is double or float type", "[real]")
{
  math::Real real_type;
  double     dbl;
  float      flt;
  REQUIRE((std::type_index(typeid(dbl)) == std::type_index(typeid(real_type)) ||
           std::type_index(typeid(flt)) == std::type_index(typeid(real_type))));
}

TEST_CASE("Vector and matrix type test", "[vector]")
{
  math::Real           real_type;
  math::Vec2::Scalar   vec_scalar_type;
  math::Mat2x2::Scalar mat_scalar_type;
  REQUIRE((std::type_index(typeid(real_type)) == std::type_index(typeid(vec_scalar_type))));
  REQUIRE((std::type_index(typeid(real_type)) == std::type_index(typeid(mat_scalar_type))));
}

TEST_CASE("Matrix initialization test", "[matrix]")
{
  // clang-format off
  auto const M = (math::Mat4x4() <<
                   1,  2,  3,  4,
                   5,  6,  7,  8,
                   9, 10, 11, 12,
                  13, 14, 15, 16).finished();
  auto M_test = (math::Mat4x4() <<
                 math::RVec4( 1,  2,  3,  4),
                 math::RVec4( 5,  6,  7,  8),
                 math::RVec4( 9, 10, 11, 12),
                 math::RVec4(13, 14, 15, 16)).finished();
  REQUIRE(M == M_test);

  M_test << math::Vec4( 1,  2,  3,  4),
            math::Vec4( 5,  6,  7,  8),
            math::Vec4( 9, 10, 11, 12),
            math::Vec4(13, 14, 15, 16);
  REQUIRE(M == M_test.transpose());  // note transpose here

  auto const M3 = (math::Mat3x3() <<
                   1,  2,  3,
                   5,  6,  7,
                   9, 10, 11).finished();
  math::Vec3  C_vec(4, 8, 12);
  math::RVec3 R_vec(13, 14, 15);
  M_test << M3, C_vec, R_vec, 16;
  REQUIRE(M == M_test);
  // clang-format on
}

TEST_CASE("Matrix initialization test2", "[matrix]")
{
  auto const         M1   = (math::Mat3x3() << 1, 2, 3, 4, 5, 6, 7, 8, 9).finished();
  auto const         elem = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0};
  math::Mat3x3 const M2(elem.begin());  // column-major
  REQUIRE(M1 == M2.transpose());
}
