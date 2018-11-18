#ifndef STAN_MATH_PRIM_SCAL_FUN_LDEXP_HPP
#define STAN_MATH_PRIM_SCAL_FUN_LDEXP_HPP

#include <cmath>

namespace stan {
namespace math {

/**
 * Returns the product of a (the significand) and
 * 2 to power b (the exponent).
 *
 * @tparam T Scalar type of significand
 * @param[in] a the significand
 * @param[in] b an integer that is the exponent
 * @return product of a times 2 to the power b
 */
template <typename T>
inline T ldexp(const T& a, int b) {
  return std::ldexp(a, b);
}

inline double ldexp(int a, int b) {
  return std::ldexp(static_cast<double>(a), b);
}
}  // namespace math
}  // namespace stan

#endif
