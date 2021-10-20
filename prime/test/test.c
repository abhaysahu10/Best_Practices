#include "prime.h"
#include"unity.h"
#include"unity_internals.h"

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_prime(void){
    TEST_ASSERT_TRUE(prime);
}


int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
    RUN_TEST(test_prime);
    
    
 
  /* Close the Unity Test Framework */
  return UNITY_END(); 
}