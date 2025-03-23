#include "gtest/gtest.h"

#include "../src/main/app.h"

namespace test_app {
TEST(app_test, sample) {
  App app(true);
  EXPECT_EQ(app.get_is_running(), false);
}
}