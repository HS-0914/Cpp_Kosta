#include<stdio.h>

void main() {
	// 자료형(타입) 변수명;
	// int value; // 4byte 할당
	// value = 100; 

	// int num = 5; // 초기화

	// 서식 사용 법
	// printf("%d %d\n", value, num); // 서식 사용 - 100 5
	// %d 에서 d 의 의미 decimal(10진수)
	// o - octar (8진수)
	// h - hexa (16진수)
	// f - float (10진 실수)
	// c - char (단일 문자)
	// s - string (문자열)

	// char 형
	// int value = 100;
	// char ch = 'C'; // '' (단일 문자일 때), "" (문자열일 때) 
	// printf("정수 : %d, 문자 : %c\n", value, ch);

	// 정수형
	// int width = 10;
	// int height = 20;
	// printf("사각형의 넓이 : %d\n", width * height);

	// 실수형 : 소수점을 가지는 수 : 부동소수점
	// double area = 0.0;
	// int radius = 5;
	// area = radius * radius * 3.14;
	// printf("원의 넓이 %f \n", area); // 78.500000
	// printf("원의 넓이 %.2f \n", area); // 78.50

	// 문자형
	// char ch1 = 'A';
	// char ch2 = 'b';
	// char ch3 = '1';

	// printf("%c %d\n", ch1, ch1);
	// printf("%c %d\n", ch2, ch2);

	// printf("%c %d\n", ch3, ch3);

	// scanf 
	// 입력 받을 시 사용하는 함수
	
	float input1 = 1;
	float input2 = 0.1;

	//scanf_s("%d%d", &input1, &input2); // 왜 &가 붙었을까? 주소값으로 찾아가기 위해서
	//scanf_s("%d", &input2);

	printf("%f\n", input1 + input2);

	
}