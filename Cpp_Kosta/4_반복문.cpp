#include<stdio.h>

void main() {
	/*
	int i = 1;
	while (i < 10) {
		printf("2 * %d = %d\n", i, 2 * i);
		i++;
	}
	*/

	/*
	int sum = 0;
	int input = -1;
	do {
		printf("정수를 입력하세요 : ");
		scanf_s("%d", &input);
		sum = sum + input;
	} while (input != 0);
	while (input != 0) {
		printf("정수를 입력하세요 : ");
		scanf_s("%d", &input);
		sum = sum + input;
	}
	printf("총 합은 %d", sum);
	*/

	// for문
	/*
	for (int i = 0; i < 5; i++) {
		printf("Programming\n");
	}
	*/

	/*
	int dan = 0;
	printf("구구단 입력 : ");
	scanf_s("%d", &dan);
	for (int i = 1; i < 10; i++) {
		printf("%d * %d = %d\n", dan, i, dan * i);
	}
	*/

	/*
	int a = 0;

	while (true) {
		printf("a의 값은 %d입니다.\n", a);
		a++;
	}
	*/


	for (int dan = 2; dan < 10; dan++) {
		for (int i = 1; i < 10; i++) {
			printf("%d * %d = %d\n", dan, i, dan * i);
		}
		printf("\n");
	}

}