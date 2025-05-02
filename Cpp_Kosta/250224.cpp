#include<stdio.h>

int main() {

	// 1
	/*
	char a = 'F';
	int b = 5;
	char* pA = &a;
	int* pB = &b;

	printf("%c, %d", *pA, *pB);
	*/

	// 2
	/*
	int arr[5] = {1, 2, 3, 4, 5};
	int* pArr = arr;
	printf("%d", *(pArr + 2));
	*/

	// 3
	/*
	char a = 'C';
	int b = 10;
	double c = 3.14;

	char* pA = &a;
	int* pB = &b;
	double* pC = &c;

	*pA += 1;
	*pB += 1;
	*pC += 1;

	printf("a: %c, b: %d, c: %f", a, b, c);
	*/

	//4
	/*
	int arr[5] = { 3, 5, 2, 11, 10 };
	int max = 0;
	for (int i = 1; i < 5; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}
	printf("%d", max);
	*/

	//5
	/*
	char a = 'A';
	char* pA = &a;
	for (int i = 0; i < 26; i++) {
		printf("%c\n", *pA + i);
	}
	//for (int i = *pA; i <= 'Z'; i++) {
		//printf("%c\n", i);
	//}
	*/

	return 0;
}