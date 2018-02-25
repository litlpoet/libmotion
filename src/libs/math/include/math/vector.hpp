#ifndef SRC_MATH_INCLUDE_CORE_VECTOR_HPP_
#define SRC_MATH_INCLUDE_CORE_VECTOR_HPP_

#include <Eigen/Dense>

#include <math/real.hpp>

namespace math
{

using Vec2 = Eigen::Matrix<Real, 2, 1>;
using Vec3 = Eigen::Matrix<Real, 3, 1>;
using Vec4 = Eigen::Matrix<Real, 4, 1>;
using VecX = Eigen::Matrix<Real, Eigen::Dynamic, 1>;

using RVec2 = Eigen::Matrix<Real, 1, 2>;
using RVec3 = Eigen::Matrix<Real, 1, 3>;
using RVec4 = Eigen::Matrix<Real, 1, 4>;
using RVecX = Eigen::Matrix<Real, 1, Eigen::Dynamic>;

}  // namespace math

#endif  // SRC_MATH_INCLUDE_CORE_VECTOR_HPP_
