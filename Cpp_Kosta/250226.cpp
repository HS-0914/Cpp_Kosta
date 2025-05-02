#include<stdio.h>
void Max(int a, int b);

void Max(int a, int b) {
	if (a > b) {
		printf("큰 수는 %d이고, 작은 수는 %d입니다.", a, b);
	}
	else if (a < b) {
		printf("큰 수는 %d이고, 작은 수는 %d입니다.", b, a);
	}
	else {
		printf("두 수는 같습니다.");
	}
}

int main() {
	// 1
	/*
	void* a;
	double b = 3.14;
	a = &b;
	printf("%f\n", *(double*)a);
	*/

	// 2
	/*
	int a[2];

	printf("두 개의 정수를 입력하세요 : ");
	scanf_s("%d %d", &a[0], &a[1]);
	if (a[0] > a[1]) {
		printf("큰 수는 %d이고, 작은 수는 %d입니다.", a[0], a[1]);
	}
	else if (a[0] < a[1]) {
		printf("큰 수는 %d이고, 작은 수는 %d입니다.", a[1], a[0]);
	}
	else {
		printf("두 수는 같습니다.");
	}
	*/

	// 3
	/*
	int a[2];

	printf("두 개의 정수를 입력하세요 : ");
	scanf_s("%d %d", &a[0], &a[1]);
	Max(a[0], a[1]);
	*/

	// 4
	/*
	int arr[100];
	int size = sizeof(arr) / sizeof(int);
	int sum = 0;
	for (int i = 0; i < size; i++) {
		arr[i] = i + 1;
		sum += arr[i];
	}
	printf("합 : %d", sum);
	*/
	

	// 5
	/*
	int a[] = { 3, 5, 2, 11, 10 };
	int size = sizeof(a) / sizeof(int);
	int i = 0;
	int imax = a[0];

	for (i = 1; i < size; i++) {
		if (imax < a[i]) {
			imax = a[i];
		}
	}
	printf("최대값 : %d", imax);
	*/
}