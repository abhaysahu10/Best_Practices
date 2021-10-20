#include <unity.h>
#include <unity_internals.h>
#include "header.h"

#define PROJECT_NAME "Coordinates"

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void TestCheckQuardant(void);
void TestOriginDistance(void);

int main()
{
    UNITY_BEGIN();

    RUN_TEST(TestCheckQuardant);
    RUN_TEST(TestOriginDistance);
}

void TestCheckQuardant(void)
{
    TEST_ASSERT_EQUAL_INT(0,CheckQuardant(0,0));
    TEST_ASSERT_EQUAL_INT(1,CheckQuardant(3,63));
    TEST_ASSERT_EQUAL_INT(12,CheckQuardant(0,63));
    TEST_ASSERT_EQUAL_INT(2,CheckQuardant(-42,23));
    TEST_ASSERT_EQUAL_INT(23,CheckQuardant(-3,0));
    TEST_ASSERT_EQUAL_INT(3,CheckQuardant(-43,-4));
    TEST_ASSERT_EQUAL_INT(34,CheckQuardant(0,-3));
    TEST_ASSERT_EQUAL_INT(4,CheckQuardant(32,-12));
    TEST_ASSERT_EQUAL_INT(41,CheckQuardant(3,0));
}

void TestOriginDistance(void)
{
    TEST_ASSERT_EQUAL_FLOAT(5,OriginDistance(3,4));
    TEST_ASSERT_EQUAL_FLOAT(1.414214,OriginDistance(1,1));
    TEST_ASSERT_EQUAL_FLOAT(0,OriginDistance(0,0));
    TEST_ASSERT_EQUAL_FLOAT(64.12488,OriginDistance(-4,64));
}