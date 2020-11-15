#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "get_opt.h"
#include "array.h"
#include "sort.h"

//int sortFunction(int argc, char **arg) {
void sortFunction(char method[], int size, char array_type[], int *a) {
    int i, method2, size2, array_type2  = 0;
    int print_vector = 0;
    //if(!check_opt(argc)){
    //    fprintf(stderr,"Not enough parameters\n");
    //    fprintf(stderr,"Expected: -a SORTTYPE -n ARRAYSIZE -s ARRAYSTATE [-P]\n");
    //    fprintf(stderr,"Please read the doc.\n");
    //    return 1;
    //}

    get_opt(method, size, array_type, &method2, &size2, &array_type2);

    // Create the vector with the specified size and situation
    int *vet = generate_array(size, array_type2);

    if(!vet){
        fprintf(stderr,"Memory allocation failed.\n");
        //return vet;
        *a = NULL;
    }

    int *vet_aux = (int*)malloc(sizeof(int)*size);
    // Create a copy of the vector to print it berfore and after it is sorted in case this option is enabled
    for(i=0; i<size; i++){
        vet_aux[i] = vet[i];
    }



    // Sort the array
    sort_array(vet, size2, method2);

    //printf("-- Analysis --\n\n");
    //printf("Sorting algorithm: %s\n", get_method_name(method2));
    //printf("Array type: %s\n", get_array_type_name(array_type2));
    //printf("Array size: %d\n", size2);
    /*
    if(method < GPUQUICK ){
        printf("Number of comparisons: %d\n", get_comparisons());
        printf("Number of swaps: %d\n", get_swaps());
    }
    */





    //printf("Time elapsed: %f s\n", get_elapsed_time());
    if(print_vector){
        printf("Original: ");
        for(i=0; i<size; i++){
            printf("%d ", vet_aux[i]);
        }
        printf("\n\nSorted: ");
        for(i=0; i<size; i++){
            printf("%d ", vet[i]);
        }
    }






    for(i=0;i<size;i++)
    {
      a[i] = vet[i];
    }
    free(vet);
    free(vet_aux);
    //printf("\n\n");
    //return vet;
}






//int main(void)
//{
//  char metodo[] = "quick";
//  int tamanho = 10;
//  char tipo[] = "random";
//
//  return sortFunction(metodo, tamanho, tipo);
//}
