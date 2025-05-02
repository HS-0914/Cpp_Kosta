#include<stdio.h>

void main() {
	/*
	int a;

	printf("정수를 입력하세요 : ");
	scanf_s("%d", &a);

	if (a > 5) {
		printf("a는 5보다 큽니다.\n");
	}
	else if (a < 5) {
		printf("a는 5보다 작습니다.\n");
	}
	else if (a == 5) {
		printf("a는 5와 같습니다.\n");
	}
	else {
		printf("a의 값이 유효하지 않습니다.");
	}
	*/
	/*else {
		printf("a는 5와 같습니다.");
	}*/

	// switch - case 문
	/*
	int shortcut = 0;
	printf("단축키를 입력하세요 : ");
	scanf_s("%d", &shortcut);

	switch (shortcut) 
	{
	case 1:
		printf("딸 : 010-xxxx-xxxx 전화를 건다");
		break;
	case 2:
		printf("아들 : 010-xxxx-xxxx 전화를 건다");
		break;
	case 3:
		printf("친구 : 010-xxxx-xxxx 전화를 건다");
		break;
	default:
		printf("해당 단축키가 없습니다.");
	}
	*/

	// 월을 입력하세요.
	// 12-2 : 겨울입니다.
	// 3-5 : 봄입니다.
	// 6-8 : 여름입니다.
	// 9-11 : 가을입니다.
	int input = 0;
	printf("월을 입력하세요 : ");
	scanf_s("%d", &input);

	switch (input)
	{
	case 1:
	case 2:
	case 12:
		printf("겨울입니다.");
		break;
	case 3:
	case 4:
	case 5:
		printf("봄입니다.");
		break;
	case 6:
	case 7:
	case 8:
		printf("여름입니다.");
		break;
	case 9:
	case 10:
	case 11:
		printf("가을입니다.");
		break;
	default:
		printf("유효하지않음");
	}
}