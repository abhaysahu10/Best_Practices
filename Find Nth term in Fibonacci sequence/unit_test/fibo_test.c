#include <unity.h>
#include <unity_internals.h>
#include "header.h"

#define PROJECT_NAME "Fibo"

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void TestFibo(void);

int main()
{
    UNITY_BEGIN();

    RUN_TEST(TestFibo);
}

void TestFibo(void)
{
    TEST_ASSERT_EQUAL_INT(3,fibo(4));
    TEST_ASSERT_EQUAL_INT(144,fibo(12));
    TEST_ASSERT_EQUAL_INT(0,fibo(0));
    TEST_ASSERT_EQUAL_INT(1,fibo(1));
    TEST_ASSERT_EQUAL_INT(-1,fibo(-4));
}