#include<stdio.h>


void func2() {
	printf("local = 20 메모리 할당\n");
	printf("local = 20 메모리 소멸\n");
	int local = 20;
}

void func1() {
	int local = 10;
	printf("local = 10 메모리 할당\n");
	func2();
	printf("local = 10 메모리 소멸\n");
}

// 1
void vending(int price) {
	if (price == 100) {
		printf("블랙커피");
	}
	else if (price == 200) {
		printf("밀크커피");
	}
	else {
		printf("유효하지않음");
	}
}

// 2
// int total = 0;
void marathon() {
	int read = 0;
	static int total = 0;
	while (1) {
		printf("읽은 책의 페이지 수를 입력하시오 : ");
		scanf_s("%d", &read);
		if (read == -1) {
			printf("더 분발하세요.");
			break;
		}
		total += read;
		printf("최종 누적 페이지 : %d\n", total);
	}
}

// 3
int returnFunc(int a) {
	return a * 2;
}

// 4
void nemo(int width, int height) {
	printf("사각형의 넓이 : %d", width * height);
}

// 5
void circle(int radian) {
	printf("원의 넓이 : 약 %f", radian * radian * 3.14);
}

// 6
void minMax(int input1, int input2) {
	if (input1 >= input2) {
		printf("최대값 : %d // 최소값 : %d", input1, input2);
	}
	else {
		printf("최대값 : %d // 최소값 : %d", input2, input1);
	}
}

// 7
int plus(int a, int b) {
	return a + b;
}
int minus(int a, int b) {
	return a - b;
}
int multiple(int a, int b) {
	return a * b;
}
double divide(int a, int b) {
	return a / b;
}

void main() {

	// 7-1
	int price = 0;
	printf("정수형 가격(100, 200)을 입력하세요 : ");
	scanf_s("%d", &price);
	vending(price);

	// 2
	marathon();

	// 3
	int output = returnFunc(5);
	printf("전달받은 값 * 2 = %d", output);

	// 4
	int x = 0;
	int y = 0;
	printf("두 정수(가로, 세로)를 입력하세요 : ");
	scanf_s("%d%d", &x, &y);
	nemo(x, y);
	
	// 5
	int r = 0;
	printf("반지름을 입력하세요 : ");
	scanf_s("%d", &r);
	circle(r);

	// 6
	int input1 = 0;
	int input2 = 0;
	printf("두 정수를 입력하세요 : ");
	scanf_s("%d%d", &input1, &input2);
	minMax(input1, input2);

	// 7
	/*
	int input1 = 0;
	int input2 = 0;
	printf("두 정수를 입력하세요 : ");
	scanf_s("%d%d", &input1, &input2);
	printf("두 정수의 합은 %d 입니다.", plus(input1, input2));
	printf("두 정수의 차는 %d 입니다.", minus(input1, input2));
	printf("두 정수의 곱은 %d 입니다.", multiple(input1, input2));
	printf("두 정수의 나누기는 %f 입니다.", divide(input1, input2));
	*/

	// 6
	/*
	int val = 0;
	printf("val = 0 메모리 할당\n");
	func1();
	*/

	// 8
	/*
	int arr1[3] = { 1, 2, 3 };
	int arr2[3];

	for (int i = 0; i < 3; i++) {
		arr2[i] = arr1[i];
		printf("arr2의 %d번째 요소 : %d\n", i + 1, arr2[i]);
	}
	*/

	// 9
	int arr1[5] = { 1, 2, 3, 4, 5 };
	int arr2[5];

	for (int i = 0; i < 5; i++) {
		arr2[i] = arr1[5 - (i + 1)];
		printf("arr2의 %d번째 요소 : %d\n", i + 1, arr2[i]);
	}
}