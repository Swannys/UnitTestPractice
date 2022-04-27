/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PracticeTest, smoke_test)
{
    ASSERT_TRUE(true);
}

TEST(PracticeTest, allnighter_zeros)
{
	Practice TestObject;
	int sleep[7] = {0,0,0,0,0,0,0};

	ASSERT_EQ(TestObject.allnighter(sleep), &sleep[0]);
}

TEST(PracticeTest, sort_ascending_a) {
	Practice TestObject;
	int a = 7;
	int b = 8;
	int c = 9;

	TestObject.sortDescending(a,b,c);
	ASSERT_EQ(a, 9);
}
TEST(PracticeTest, sort_ascending_b) {
	Practice TestObject;
	int a = 7;
	int b = 8;
	int c = 9;

	TestObject.sortDescending(a,b,c);
	ASSERT_EQ(b, 8);
}
TEST(PracticeTest, sort_ascending_c) {
	Practice TestObject;
	int a = 7;
	int b = 8;
	int c = 9;

	TestObject.sortDescending(a,b,c);
	ASSERT_EQ(c, 7);
}

TEST(PracticeTest, not_palindrome) {
	Practice TestObject;
	string test = "tacocat";
	ASSERT_EQ(TestObject.isPalindrome(test), true);
}

TEST(PracticeTest, count_repeat) {
	Practice TestObject;
	string test = "testing count";
	ASSERT_EQ(TestObject.count_starting_repeats(test), 2);
}