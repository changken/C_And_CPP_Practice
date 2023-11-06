#include<stdio.h>

int main_arr() {
    // int age = 29;
    // int* agePtr = &age;
    // printf("%p\n", agePtr);
    // printf("%d", *agePtr);


    int arr2[2][2] = { {1,2},{3,4} };
    printf("%d\n", (int)sizeof(arr2));
    printf("%d\n", (int)sizeof(&arr2));
    printf("%d\n", (int)sizeof(int));

    int (*arr3)[2] = arr2;
    
    for (int i = 0; i < (int)sizeof(arr2) / sizeof(arr2[0]); i++) {
        for (int j = 0; j < (int)sizeof(arr2[0]) / sizeof(int); j++) {
            printf("%d\t", *(*(arr2 + i) + j));
        }
        printf("\n");
    }

	return 0;
}