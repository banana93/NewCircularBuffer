#include "unity.h"
#include "Double.h"

void setUp(void){}

void tearDown(void){}

void test_copyDouble_should_copy_float(void)
{
	float a = 1.23;
	float b = 1.23;
	copyDouble(&a, &b);
	printf("a = %f \n", a);
	printf("b = %f \n", b);
	TEST_ASSERT_EQUAL(1.23, a);
	TEST_ASSERT_EQUAL(1.23, b);
}
