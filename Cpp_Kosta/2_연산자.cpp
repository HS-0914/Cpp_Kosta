#include<stdio.h>

void main() {
	// 산술 연산자
	//int a = 5;
	//int b = 3;

	//printf("두 수의 합 : %d\n", a + b);
	//printf("두 수의 차 : %d\n", a - b);
	//printf("두 수의 곱 : %d\n", a * b);
	//printf("두 수의 몫 : %d\n", a / b);
	//printf("두 수의 나머지 : %d\n", a % b);

	// 대입 연산자
	//int a = 5;
	//int b = 3;

	//a += b;
	//printf("%d\n", a); // 8

	//a -= b;
	//printf("%d\n", a); // 5

	//a *= b;
	//printf("%d\n", a); // 15

	//a /= b;
	//printf("%d\n", a); // 5

	// 증감 연산자
	//int a = 0;
	//int b = 0;

	//a = 5;
	//printf("%d\n", ++a); // 6

	//a = 5;
	//printf("%d\n", a++); // 5
	//printf("%d\n", a); // 6

	//b = 10;
	//printf("%d\n", --b); // 9

	//b = 10;
	//printf("%d\n", b--); // 10
	//printf("%d\n", b); // 9

	// 관계 연산자
	//int a = 10;
	//int b = 11;
	//int c = 12;
	//int d = 10;

	//printf("%d\n", a == b); // 0 (false)
	//printf("%d\n", a < b); // 1 (true)
	//printf("%d\n", a >= c); // 0 (false)
	//printf("%d\n", a == d); // 1 (true)

	// 논리 연산자
	int a = 10;
	int b = 11;
	int c = 12;
	int d = 10;

	printf("%d\n", !(a == 10)); // 0 (false)
	printf("%d\n", (a < b) && (a < c)); // 1 (true)
	printf("%d\n", (a >= c) && (a == d)); // 0 (false)
	printf("%d\n", (a >= c) || (a == d)); // 1 (true)

}