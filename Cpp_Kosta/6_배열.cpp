#include<stdio.h>

void main() {
	/*
	int size = 5;
	int array[size];
	*/

	int arr1[5] = { 10, 20, 30, 40, 50 };
	int arr2[5];

	for (int i = 0; i < 5; i++) {
		//printf("%d\n", arr[i]);
		arr2[i] = arr1[i];
	}
	for (int i = 0; i < 5; i++) {
		printf("%d\n", arr2[i]);
	}

	/*
	for (int i = 0; i < 3; i++) {

		//arr[i] = 10 * (i + 1);
		//printf("%d\n", arr[i]);

		printf("%d��° �л��� ������ �Է��ϼ��� : ", i+1);
		scanf_s("%d", &arr[i]);
	}
	*/

	int total = 0;
	int i = 0;
	for (i = 0; i < 3; i++) {
		//printf("%d��° �л��� ���� : %d", i + 1, arr[i]);
		total += arr1[i];
	}
	double avr = total / i;
	printf("������ %d\n", total);
	printf("����� %f\n", avr);
}