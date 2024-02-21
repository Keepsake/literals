#include <gtest/gtest.h>

#include <ks/literals.hpp>

using namespace ks::literals;

TEST(LiteralsTest, LiteralCanBeUsed)
{
  ASSERT_EQ(0U << 10, 0_KiB);
  ASSERT_EQ(1U << 10, 1_KiB);
  ASSERT_EQ(2U << 10, 2_KiB);

  ASSERT_EQ(0U << 20, 0_MiB);
  ASSERT_EQ(1U << 20, 1_MiB);
  ASSERT_EQ(2U << 20, 2_MiB);

  ASSERT_EQ(0U << 30, 0_GiB);
  ASSERT_EQ(1U << 30, 1_GiB);
  ASSERT_EQ(2U << 30, 2_GiB);
}
