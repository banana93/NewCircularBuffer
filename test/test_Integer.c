#include "unity.h"
#include "Integer.h"

void setUp(void){}

void tearDown(void){}

void test_copyInt_should_copy_Integer(void)
{
	int source = 1;
	int dest = 1;
	copyInt(&source, &dest);
	TEST_ASSERT_EQUAL(1, source);
	TEST_ASSERT_EQUAL(1, dest);
}
