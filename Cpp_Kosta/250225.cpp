#include<stdio.h>
void Calc(int a, int b, int* hap, int* gop);
void Factorial(int n, int* total);
void PrintArr(int* pArr, int size);
void Swap(int pA, int pB);
void SwapRef(int* pA, int* pB);

int main() {
	// 1
	/*
	int input1 = 0;
	int input2 = 0;
	int hap = 0;
	int gop = 0;

	printf("두 정수를 입력하세요: ");
	scanf_s("%d %d", &input1, &input2);
	Calc(input1, input2, &hap, &gop);
	printf("합: %d\n곱: %d\n", hap, gop);
	*/

	// 2
	/*
	int input = 0;
	int total = 1;
	printf("정수를 입력하세요 : ");
	scanf_s("%d", &input);
	Factorial(input, &total);
	printf("결과 : %d", total);
	*/

	// 3
	/*
	int arr[] = { 1,2,3,4,5,6,7 };
	int size = sizeof(arr) / sizeof(int);
	PrintArr(arr, size);
	*/

	// 4
	/*
	int a = 1;
	int b = 2;
	printf("초기값 : a = %d, b = %d\n", a, b);
	Swap(a, b);
	printf("함수 밖 출력 : a = %d, b = %d\n", a, b);
	*/

	// 5
	int a = 1;
	int b = 2;
	printf("초기값 : a = %d, b = %d\n", a, b);
	SwapRef(&a, &b);
	printf("함수 밖 출력 : a = %d, b = %d\n", a, b);

	return 0;
}

void Calc(int a, int b, int* hap, int* gop) {
	*hap = a + b;
	*gop = a * b;
}

void Factorial(int n, int* total) {
	for (n; n > 0; n--) *total *= n;
}

void PrintArr(int* pArr, int size) {
	for (int i = 0; i < 7; i++) printf("%d\n", pArr[i]);
}

void Swap(int pA, int pB) {
	int temp = 0;
	temp = pA;
	pA = pB;
	pB = temp;

	printf("함수 안 변경 x = %d, y = %d\n", pA, pB);
}

void SwapRef(int* pA, int* pB) {
	int temp = 0;
	temp = *pA;
	*pA = *pB;
	*pB = temp;

	printf("함수 안 변경 x = %d, y = %d\n", *pA, *pB);
}