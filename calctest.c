#include "Unity/src/unity.h"
#include "calcfunc.h"

void test_Addition(void)
{
	TEST_ASSERT_EQUAL_FLOAT(4.0, Addition(2.0, 2.0));
	TEST_ASSERT_EQUAL_FLOAT(0.5, Addition(-2.0, 2.5));
}

void test_Subtraction(void)
{
	TEST_ASSERT_EQUAL_FLOAT(2.0, Subtraction(4.0, 2.0));
	TEST_ASSERT_EQUAL_FLOAT(2.5, Subtraction(1.0, -1.5));
}

void test_Multiplication(void)
{
	TEST_ASSERT_EQUAL_FLOAT(8.0, Multiplication(2.0, 4.0));
	TEST_ASSERT_EQUAL_FLOAT(-2.4, Multiplication(1.2, -2.0));
}

void test_Division(void)
{
	TEST_ASSERT_EQUAL_FLOAT(2.0, Division(4.0, 2.0));
	TEST_ASSERT_EQUAL_FLOAT(-2.5, Division(5.0, -2.0));
}

int main(void)
{
	UNITY_BEGIN();
	RUN_TEST(test_Addition);
	RUN_TEST(test_Subtraction);
	RUN_TEST(test_Multiplication);
	RUN_TEST(test_Division);
	return UNITY_END();
}