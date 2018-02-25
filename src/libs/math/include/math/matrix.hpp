#ifndef SRC_LIBS_MATH_INCLUDE_MATH_MATRIX_HPP_
#define SRC_LIBS_MATH_INCLUDE_MATH_MATRIX_HPP_

#include <Eigen/Dense>

#include <math/real.hpp>

namespace math
{

using Mat2x2 = Eigen::Matrix<Real, 2, 2>;
using Mat3x3 = Eigen::Matrix<Real, 3, 3>;
using Mat3x4 = Eigen::Matrix<Real, 3, 4>;
using Mat3xN = Eigen::Matrix<Real, 3, Eigen::Dynamic>;
using Mat4x4 = Eigen::Matrix<Real, 4, 4>;
using Mat4xN = Eigen::Matrix<Real, 4, Eigen::Dynamic>;
using MatNx3 = Eigen::Matrix<Real, Eigen::Dynamic, 3>;
using MatNx4 = Eigen::Matrix<Real, Eigen::Dynamic, 4>;
using MatNxN = Eigen::Matrix<Real, Eigen::Dynamic, Eigen::Dynamic>;

}  // namespace math

#endif  // SRC_LIBS_MATH_INCLUDE_MATH_MATRIX_HPP_
