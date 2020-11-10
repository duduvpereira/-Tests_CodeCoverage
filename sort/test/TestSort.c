
#include "unity.h"
#include "unity_fixture.h"
#include "stdlib.h"
#include "string.h"

#include "float.h"




TEST_GROUP(sortFunction);

TEST_SETUP(sortFunction)
{
}

TEST_TEAR_DOWN(sortFunction)
{
}

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}



TEST(sortFunction, TestsortFunction1)
{
  // All of these should pass
  int i=0;
  int size = 10;
  int a[size];
  int b[size];

    sortFunction("quick", size, "random", &a);


    printf("\n\n");
    for(i=0; i<10; i++){
        printf("%d ", a[i]);
    }

    for(i=0; i<size; i++){
        b[i] = a[i];
    }

    qsort(b, 10, sizeof(int), cmpfunc);
    printf("\n\n");
    for(i=0; i<size; i++){
        printf("%d ", b[i]);
    }

    TEST_ASSERT_EQUAL_INT_ARRAY(b, a, size);
}

TEST(sortFunction, TestsortFunction2)
{
  // This test will fail
  //TEST_ASSERT_EQUAL(1, Identifier2(1,2));
}
