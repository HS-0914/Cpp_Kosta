#include<stdio.h>
int Plus(int a, int b);
int Minus(int a, int b);

int Plus(int a, int b) {
	return a + b;
}

int Minus(int a, int b) {
	return a - b;
}

int main() {
	// void a; 메모리 할당이 불가능해서 에러가 난다.
	 
	// void라 타입이 정해지지 않아서 얼마만큼의 메모리가 필요한지는 모르지만
	// 포인터이기 때문에 4바이트 할당이 가능하다.
	/*
	void* a; 
	int b = 100;

	a = &b;
	printf("%d\n", *(int*)a); // 명시적 형변환(Type Casting)
	*/

	/*
	void* a;
	double b = 3.14;
	a = &b;
	printf("%f\n", *(double*)a);
	*/

	/*
	int (*pFunc)(int a, int b); // 함수 포인터 선언
	pFunc = Plus; // 함수 포인터에 함수 주소값 대입
	int a = pFunc(10, 20); // 함수 포인터로 함수 호출
	printf("%d\n", a);

	pFunc = Minus;
	a = pFunc(10, 20);
	printf("%d\n", a);
	*/

	// Null 포인터란 아무것도 가리키지 않는 포인터를 말한다.
	// 원래는 포인터임 ㅇㅇ
	// 상위 언어에서 const a = null 가능한 이유
	// 실전에서는 함수의 동작 에러 체크 용도로 사용한다.
	// null 체크는 필수

	// sprintf 디버깅용으로 사용

	return 0;
}
