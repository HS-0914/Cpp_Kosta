/*
하나 이상의 서로 다른 종류의 변수들을 묶어서 "새로운 자료형"으로 
정의할 수 있는 구조체
데이터의 양(변수의 개수)이 많아지면 구조체가 유리하다.
내가 만든것 => 범용적이지 않음 => 추상적인 데이터타입
*/

#include <stdio.h>

/*
- struct 키워드는 구조체라는 자료형을 의미
- student는 구조체의 이름
- name, age, height는 구조체의 멤버
*/
struct Student {
	char name[10];
	int age;
	double height;
} std1[3] = {
	{"shs", 25, 170.5},
	{"shs", 25, 170.5},
	{"shs", 25, 170.7},
}, * pSt;

int main() {
	/*
	Student std1; // 구조체 변수
	std.age = 20;
	std1.age = 30;
	*/ 
	//pSt = &std;
	//strcpy_s(pSt->name, "shs");

	//Student a = { "shs", 25, 170.5 };
	pSt = std1;

	int size = sizeof(std1) / sizeof(std1[0]);
	for (int i = 0; i < size; i++) {
		printf("이름: %s, 나이: %d, 키: %.1lf\n", std1[i].name, std1[i].age, std1[i].height);
	}
	for (int i = 0; i < size; i++) {
		printf("이름: %s, 나이: %d, 키: %.1lf\n", pSt[i].name, pSt[i].age, pSt[i].height);
		printf("이름: %s, 나이: %d, 키: %.1lf\n", (pSt + i)->name, (pSt + i)->age, (pSt + i)->height);
	}


	return 0;
}
/*
공용체(Union)도 사용자 정의 자료형이다.
구조체와 차이점은 멤버들이 메모리를 공유한다.
*/