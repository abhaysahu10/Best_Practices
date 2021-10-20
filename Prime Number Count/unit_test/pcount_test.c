#include "unity.h"
#include "unity_internals.h"
#include "header.h"

#define PROJECT_NAME "Pcount"

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void TestPcount(void);

int main()
{
    UNITY_BEGIN();

    RUN_TEST(TestPcount);
}

void TestPcount(void)
{
    TEST_ASSERT_EQUAL_INT(0,pcount(0,1));
    TEST_ASSERT_EQUAL_INT(4,pcount(2,10));
    TEST_ASSERT_EQUAL_INT(4,pcount(15,30));
    TEST_ASSERT_EQUAL_INT(1,pcount(45,50));
    TEST_ASSERT_EQUAL_INT(1,pcount(35,40));
}