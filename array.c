#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int *arr1 = (int*)malloc(sizeof(int));
    
    if (arr1 == NULL) {
        printf("Memory allocation failed for arr1\n");
        return 1;
    }

    *arr1 = 42;
    printf("arr1 value: %d\n", *arr1);
    arr1 = (int*)realloc(arr1, 2 * sizeof(int));

    if (arr1 == NULL) {
        printf("Memory reallocation failed for arr1\n");
        return 1;
    }
    arr1[1] = 100;
    printf("arr1 values: %d, %d\n", arr1[0], arr1[1]);
    int *arr2 = (int*)calloc(3, sizeof(int));

    if (arr2 == NULL) {
        printf("Memory allocation failed for arr2\n");
        return 1;
    }

    printf("arr2 values: %d, %d, %d\n", arr2[0], arr2[1], arr2[2]);
    free(arr1);
    free(arr2);

    return 0;
}

