#include "priority_queue.h"
#include <gtest.h>

TEST(PriorityQueue, can_create_with_default_constractor) {
  ASSERT_NO_THROW(PriorityQueue pq;);
}
