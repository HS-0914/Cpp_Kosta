#include<stdio.h>
void Max(int a, int b);

void Max(int a, int b) {
	if (a > b) {
		printf("ū ���� %d�̰�, ���� ���� %d�Դϴ�.", a, b);
	}
	else if (a < b) {
		printf("ū ���� %d�̰�, ���� ���� %d�Դϴ�.", b, a);
	}
	else {
		printf("�� ���� �����ϴ�.");
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

	printf("�� ���� ������ �Է��ϼ��� : ");
	scanf_s("%d %d", &a[0], &a[1]);
	if (a[0] > a[1]) {
		printf("ū ���� %d�̰�, ���� ���� %d�Դϴ�.", a[0], a[1]);
	}
	else if (a[0] < a[1]) {
		printf("ū ���� %d�̰�, ���� ���� %d�Դϴ�.", a[1], a[0]);
	}
	else {
		printf("�� ���� �����ϴ�.");
	}
	*/

	// 3
	/*
	int a[2];

	printf("�� ���� ������ �Է��ϼ��� : ");
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
	printf("�� : %d", sum);
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
	printf("�ִ밪 : %d", imax);
	*/
}