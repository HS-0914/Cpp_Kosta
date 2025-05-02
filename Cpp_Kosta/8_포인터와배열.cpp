#include<stdio.h>
void Temp(int b);

int main() {
	/*
	// 배열의 이름은 포인터다.
	int arr[] = { 1, 2, 3, 4, 5 };
	int* pArr;

	pArr = arr;

	for (int i = 0; i < 5; i++) {
		printf("%d\n", arr[i]);
	}

	for (int i = 0; i < 5; i++) {
		printf("%x\n", &arr[i]);
	}

	// 배열의 이름은 첫 번째 주소값과 같다 => 첫 번째 요소의 주소값을 가리키는 포인터다.
	// arr == &arr[0]라고 볼 수 있다.
	// 배열 포인터 변수 -> 포인터 상수라고 봐야한다.
	printf("%x\n", arr);

	for (int i = 0; i < 5; i++) {
		// 혼용 가능
		printf("%d\n", *(pArr + i));
		printf("%d\n", pArr[i]);
	}
	*/

	// 문자열변수 - 요소에 접근하여 변경 가능
	char str[] = "love";
	// 문자열상수
	const char* pStr = "you";
	// 문자열상수?
	const char str2[] = "test";
	
	str[0] = 'r';
	printf("%s\n", str);
	printf("%s\n", pStr);
	printf("%s\n", str2);

	// 2차원 배열의 선언
	//길이가 j 인 int 형 배열을 i개 모아놓은 배열을 생성하라.
	//j값이 늘어나면

	// a는 실인수, b는 형식인수, 가인수
	int a = 10;
	Temp(a);


	return 0;
}

void Temp(int b) {
	printf("%d", b);
}