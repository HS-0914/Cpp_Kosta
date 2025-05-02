#include<stdio.h>

union unTemp {
	char a;
	int b;
	double c;
}un;

/*
열거형 enumeration의 약자, enum(이넘)
데이터들을 열거한 집합
열거형 멤버들을 정수형 상수로 취급한다.

enum 열거형이름 {
	열거형멤버1 = 0,
	열거형멤버2,
	...
};
// 맨 위에 정수 하나 넣으면 자동으로 1씩 증가되서 값이 들어감 ( 1, 2, 3, ... )
*/

enum Week {
	// 내부적으로 다 정수 첫 번째부터 0으로 세팅
	sun = 1,
	mon,
	tue,
	wed,
	thu,
	fri,
	sat
};

int main() {
	/*
	printf("주소 : %x, 크기 : %d\n", &un.a, sizeof(un.a));
	printf("주소 : %x, 크기 : %d\n", &un.b, sizeof(un.b));
	printf("주소 : %x, 크기 : %d\n", &un.c, sizeof(un.c));

	un.a = 'A';
	printf("문자형 a : %c\n", un.a);
	un.b = 100;
	printf("정수형 b : %d\n", un.b);
	un.c = 3.12;
	printf("실수형 c : %.2f\n", un.c);

	// 메모리를 공유하고 있기 때문에 마지막에 저장된 값으로 출력된다.
	printf("문자형 a : %c\n", un.a);
	*/

	int day = 0;
	printf("요일을 입력하세요 : ");
	scanf_s("%d", &day);


	switch (day) {
	case sun:
		printf("일요일엔 짜파게티 요리사\n");
		break;
	case mon:
		printf("월요일 좋아~\n");
		break;	
	case tue:
		printf("화요일엔 만나요\n");
		break;
	case wed:
		printf("수요일에는 잔반 없는 날\n");
		break;
	default:
		printf("잘못된 입력입니다.\n");
		break;
	}
	printf("sun : %d\n", sun);
	return 0;
}

/*
지역변수 및 매개변수 등은 모두 스택 메모리 사용(후입선출)
메모리 할당은 컴파일타임에 이루어진다.
*/