#pragma once

#include <cstddef>

namespace ks::literals {

constexpr unsigned long long int
operator"" _KiB(unsigned long long int a_value) noexcept
{
  return a_value * 1024;
}

constexpr unsigned long long int
operator"" _MiB(unsigned long long int a_value) noexcept
{
  return a_value * 1024_KiB;
}

constexpr unsigned long long int
operator"" _GiB(unsigned long long int a_value) noexcept
{
  return a_value * 1024_MiB;
}

} // namespace ks::literals
