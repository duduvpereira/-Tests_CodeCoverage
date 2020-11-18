
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

  const char *method[] = {"selection", "insertion", "shell", "quick", "heap", "merge"};
  int size[] = {1, 3, 4, 7, 10, 11, 15, 20, 25};

  const char *tipo[] = {"random", "ascending", "descending", "almost"};

  int m,s,t = 0;
  int *a, *b;
  for(m=0;m<6;m++)
  {
    printf("\n");
    for(t=0;t<4;t++)
    {
      printf("\n");
      for(s=0;s<7;s++)
      {
        //printf("000000000000\n");
        printf("\nMetodo: %s", method[m]);
        printf("\nTipo: %s", tipo[t]);
        printf("\nSize: %d\n", size[s]);
        a = (int*)malloc(sizeof(int)*size[s]);
        b = (int*)malloc(sizeof(int)*size[s]);
        //printf("aaaaaaa\n");
        sortFunction(method[m], size[s], tipo[t], a);

        printf("\nOrdenado pela Funcao fornecida:\n");
        for(i=0; i<size[s]; i++){
            printf("%d ", a[i]);
        }
        //printf("\n");
        for(i=0; i<size[s]; i++){
          b[i] = a[i];
        }
        //printf("");

        ///printf("ccccccccc\n" );
        qsort(b, size[s], sizeof(int), cmpfunc);

        printf("\nVetor ordenado:\n");
        for(i=0; i<size[s]; i++){
            printf("%d ", b[i]);
        }
        printf("\n");
        //printf("ddddddddddd\n");
        TEST_ASSERT_EQUAL_INT_ARRAY(b, a, size[s]);
        //printf("eeeeeeeeeeeee\n");
        free(a);
        free(b);

      }
      printf("\n");
    }
    printf("\n");
  }


}

//TEST(sortFunction, TestsortFunction2)
//{
  // This test will fail
  //TEST_ASSERT_EQUAL(1, Identifier2(1,2));
//}
