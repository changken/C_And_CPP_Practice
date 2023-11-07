# include "pointer_practice.h"
# include <iostream>
# include <stdio.h>
# include <time.h>

typedef const char* String;

using namespace std;

//void swap_price(float*, float*);
void swap_price2(float&, float&);

int pointer_practice(int argc, char *argv[]) {
	srand(time(NULL));

	// pointer
	/*int age = 10;
	int* ptrAge = &age;
	printf("%o\n", ptrAge);
	printf("%x\n", ptrAge);
	printf("%p\n", ptrAge);*/

	// int age = 29;
	// int* agePtr = &age;
	// printf("%p\n", agePtr);
	// printf("%d", *agePtr);

	// call by reference
	/*
	float price = 19.99;
	float price2 = 59.99;
	float* ptrPrice = &price;

	swap_price2(price, price2);

	printf("price=%f, price2=%f\n", price, price2);
	*/

	//void pointer
	/*int day = 30;
	void* ptr = &day;
	printf("ptr address=%p, ptr=%d\n", ptr, *(int*) ptr);*/

	// array
	/*int score[] = { 90, 85, 22, 60, 55 };
	for (int i = 0; i < sizeof(score) / sizeof(int); i++) {
		printf("score[%d]=%d\n", i, score[i]);
		printf("*(score + %d)=%d\n", i, *(score + i));
	}*/

	// double array
	//int score2[][3] = { {90, 80, 70}, {85, 70, 60}, {99, 87, 56} };

	/*for (int i = 0; i < sizeof(score2) / sizeof(score2[0]); i++) {
		for (int j = 0; j < sizeof(score2[0]) / sizeof(int); j++) {
			printf("score2[%d][%d]=%d\t", i, j, score2[i][j]);
		}
		printf("\n");
	}
	for (int i = 0; i < sizeof(score2) / sizeof(score2[0]); i++) {
		for (int j = 0; j < sizeof(score2[0]) / sizeof(int); j++) {
			printf("*(*(score2+%d)+%d)=%d\t", i, j, *(*(score2 + i) + j));
		}
		printf("\n");
	}*/

	/*for (int i = 0; i < sizeof(score2) / sizeof(*score2); i++) {
		for (int j = 0; j < sizeof(*score2) / sizeof(int); j++) {
			printf("*(*(score2+%d)+%d)=%d\t", i, j, *(*(score2 + i) + j));
		}
		printf("\n");
	}*/

	int arr[2][2] = { {1,2},{3,4} };
	printf("arr.length=%d\n", (int)sizeof(arr));
	printf("arr[0].length=%d\n", (int)sizeof(*arr));
	printf("int size=%d\n", (int)sizeof(int));

	printf("arr.length[*(&arr+1)-arr)]=%d\n", *(&arr + 1) - arr);
	printf("arr[0].length[*(&arr[0] + 1 ) - arr[0]]=%d\n", *(&arr[0] + 1 ) - arr[0]);
	printf("int size=%d\n", (int)sizeof(int));

	int* arr2[2] = { *arr, *(arr + 1) };
	int(*arr3)[2] = arr;

	for (int i = 0; i < (int)sizeof(arr) / sizeof(*arr); i++) {
		for (int j = 0; j < (int)sizeof(*arr) / sizeof(int); j++) {
			printf("*(*(arr2+%d)+%d)=%d\t", i, j, *(*(arr2 + i) + j));
			printf("*(*(arr3+%d)+%d)=%d\t", i, j, *(*(arr3 + i) + j));
		}
		printf("\n");
	}

	//char array
	// 
	//char name[] = "changken";
	//char name2[] = { 'k', 'e', 'n', '\0' };
	//char name3[][4] = { "sss", "bbb", "ccc" };
	//char (*name)[4] = {"aaa", "bbb", "ccc"};
	//printf("%s\n", *(name3+2));

	//char* ptrName = name2;
	//printf("%s\n", ptrName);

	//char (*ptrName2)[4] = name3;
	/*for (int i = 0; i < 3; i++) {
		printf("%s\n", *(ptrName2 + i));
	}*/

	//error
	/*char *ptrName3[4] = name3;
	for (int i = 0; i < sizeof(name3)/sizeof(char); i++) {
		printf("%s\n", *(ptrName3 + i));
	}*/

	//int row3 = *(&name3 + 1) - name3;
	//int col3 = *(&name3[0] + 1) - name3[0];
	//printf("row=%d, col=%d\n", row3, col3);

	// const char* == String
	/* 
	char name[] = "changken";
	char name2[][4] = { "aaa", "bbb", "ccc" };
	const char* name3[] = { "aaa", "bbb", "ccc" };
	const char* a = "ssss";
	String s = a;
	s = *(name2 + 1);
	a = name;
	*/

	// malloc calloc free
	// 
	//int *age = (int*) malloc(sizeof(int));

	/*int* age = (int*)calloc(100, sizeof(int));

	printf("%d\n", (int)sizeof(*age));

	printf("%p, %d\n", age, *age);

	free(age);*/

	/*
	int row = 10;
	int col = 5;
	int** age = (int**)calloc(row, sizeof(int*));

	int max = 10, min = 1;

	for (int i = 0; i < row; i++) {
		*(age + i) = (int*)calloc(col, sizeof(int));
		for (int j = 0; j < col; j++) {
			*(*(age + i) + j) = rand() % (max - min + 1) + min;
		}
	}

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			printf("age[%d][%d]=%d\t", i, j, *(*(age+i)+j));
		}
		printf("\n");
		free(*(age+i));
	}

	free(age);
	*/
	
	return 0;
}

//void swap_price(float *a, float *b){
//	float tmp = *a;
//	*a = *b;
//	*b = tmp;
//}

void swap_price2(float& a, float& b) {
	int tmp = a;
	a = b;
	b = tmp;
}