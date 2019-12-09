#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP_RUNNER(CircularBuffer)
{
	RUN_TEST_CASE(CircularBuffer, InitCbuf);
	RUN_TEST_CASE(CircularBuffer, CircularBufferEmptyOnInit);
	RUN_TEST_CASE(CircularBuffer, UserBufferSizeLessThanOneProducesError);
	RUN_TEST_CASE(CircularBuffer, AddFirstDataElementToCircularBuffer);
}