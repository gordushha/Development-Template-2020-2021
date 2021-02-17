#include "roman.h"

#include <gtest.h>

TEST(roman, can_create_roman)
{
	ASSERT_NO_THROW(roman num{ "III" });
}


