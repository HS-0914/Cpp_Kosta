#include<stdio.h>
int Func(int a, int b, int c, int d, int e, int* pArr, int size);

int Func(int a, int b, int c, int d, int e, int* pArr, int size) {
	// 함수 호출 시 생성 되고 함수 호출 후 소멸한다.
	// call by value
	printf("%d\n", a);
	printf("%d\n", b);
	printf("%d\n", c);
	printf("%d\n", d);
	printf("%d\n", e);
	
	// call by reference
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += *(pArr + i);
		printf("%d\n", *(pArr+i));
	}
	return sum;
}

void Swap(int* pA, int* pB) {
	int temp = 0;
	temp = *pA;
	*pA = *pB;
	*pB = temp;
}

void callRef(int* pX) {
	*pX += 3;
	printf("%d\n", *pX);
	*pX = 100;
}

int main() {
	/*
	int arr[] = { 1,2,3,4,5,6,7 };
	int size = sizeof(arr) / sizeof(int);
	int hap = Func(arr[0], arr[1], arr[2], arr[3], arr[4], arr, size);

	printf("%d\n", hap);
	*/

	int x = 10;
	int y = 20;

	// 참조 호출 안됨
	printf("x = %d, y = %d\n", x, y);
	Swap(&x, &y);
	printf("x = %d, y = %d\n", x, y);

	// 참조 호출
	int a = 1;
	callRef(&a);



	return 0;
}