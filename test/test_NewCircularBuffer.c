#include "unity.h"
#include "NewCircularBuffer.h"
#include "Integer.h"

void setUp(void){}

void tearDown(void){}

void test_circularBufferNew_should_create_new_CircularBuffer_object_of_integer_type()
{
	CircularBuffer *cb = circularBufferNew(7, sizeof(int));
	TEST_ASSERT_NOT_NULL(cb);
	TEST_ASSERT_NOT_NULL(cb->buffer);
	TEST_ASSERT_EQUAL_PTR(cb->buffer, cb->head);
	TEST_ASSERT_EQUAL_PTR(cb->buffer, cb->tail);
	TEST_ASSERT_EQUAL(0, cb->size);
	TEST_ASSERT_EQUAL(7, cb->length);
	TEST_ASSERT_EQUAL(sizeof(int), cb->sizeOfType);
	circularBufferDel(cb);
}

void test_circularBufferNew_should_create_new_CircularBuffer_object_of_double_type()
{
	CircularBuffer *cb = circularBufferNew(13, sizeof(double));
	TEST_ASSERT_NOT_NULL(cb);
	TEST_ASSERT_NOT_NULL(cb->buffer);
	TEST_ASSERT_EQUAL_PTR(cb->buffer, cb->head);
	TEST_ASSERT_EQUAL_PTR(cb->buffer, cb->tail);
	TEST_ASSERT_EQUAL(0, cb->size);
	TEST_ASSERT_EQUAL(13, cb->length);
	TEST_ASSERT_EQUAL(sizeof(double), cb->sizeOfType);
	circularBufferDel(cb);
}
