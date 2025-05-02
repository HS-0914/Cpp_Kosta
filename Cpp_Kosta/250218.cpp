#include<stdio.h>

void main() {
	// =================분기문========================
	// 1
	/*
	int input;
	printf("정수를 입력하세요 : ");
	scanf_s("%d", &input);

	if (input % 2 == 0) {
		printf("입력한 수는 짝수입니다.");
	}
	else if (input % 2 == 1) {
		printf("입력한 수는 홀수입니다.");
	}
	else {
		printf("유효하지않음");
	}
	*/

	// 2
	/*
	int input1;
	int input2;
	printf("두 개의 정수를 입력하세요 : ");
	scanf_s("%d%d", &input1, &input2);
	if (input1 > input2) {
		printf("%d", input1);
	}
	else if (input1 < input2) {
		printf("%d", input2);
	}
	else if (input1 == input2) {
		printf("서로 같음 %d", input1);
	}
	else {
		printf("유효하지않음");
	}
	*/

	// 3
	/*
	int input1, input2, input3;
	int result = 0;
	printf("세 개의 정수를 입력 : ");
	scanf_s("%d%d%d", &input1, &input2, &input3);
	if (input1 >= input2) {
		result = input2;
		if (input2 >= input3) {
			result = input3;
		}
	}
	else {
		result = input1;
		if (input1 >= input3) {
			result = input3;
		}
	}
	printf("최소값 : %d", result);
	*/

	// 4
	/*
	int input = 0;
	printf("점수값 입력 : ");
	scanf_s("%d", &input);
	if (input >= 60) {
		printf("합격입니다.");
	}
	else {
		printf("불합격입니다.");
	}
	*/

	// 5-3
	/*
	int input = 0;
	printf("점수값 입력 : ");
	scanf_s("%d", &input);
	if (input >= 60) {
		printf("합격입니다.");
		if (input >= 90) {
			printf("\n장학대상입니다.");
		}
	}
	else {
		printf("불합격입니다.");
	}
	*/

	// 6
	/*
	int age = 0;
	printf("나이를 입력하세요 : ");
	scanf_s("%d", &age);
	if (age >= 19) {
		printf("성인입니다.");
	}
	else if (age >= 13 && age < 19) {
		printf("청소년입니다.");
	}
	else {
		printf("어린이입니다.");
	}
	*/

	// 5-6
	/*
	char input;
	printf("정말로 이 드라이브를 포멧하시겠습니까?(y/n)");
	scanf_s("%c", &input);
	if (input == 'y') {
		printf("네, 드라이브를 포멧하겠습니다.");
	}
	else if (input == 'n') {
		printf("아니오, 드라이브를 포멧하겠습니다.");
	}
	else {
		printf("유효하지 않은 값입니다.");
	}
	*/

	//5-7
	/*
	int input;
	char result = 'F';
	printf("점수를 입력하시오 : ");
	scanf_s("%d", &input);

	if (90 < input && input < 100) {
		result = 'A';
	}
	else if (80 < input && input < 91) {
		result = 'B';
	}
	else if (70 < input && input < 81) {
		result = 'C';
	}
	else if (60 < input && input < 71) {
		result = 'D';
	}
	else if (61 > input && input >= 0) {
		result = 'F';
	}
	else {
		printf("유효하지 않음\n");
	}
	printf("학점은 %c입니다.", result);
	*/

	// 5-8
	/*
	int input;
	char result = 'F';
	printf("점수를 입력하시오 : ");
	scanf_s("%d", &input);

	switch (input/10)
	{
	case 10:
	case 9:
		result = 'A';
		if (input == 90) {
			result = 'B';
		}
		break;
	case 8:
		result = 'B';
		if (input == 80) {
			result = 'C';
		}
		break;
	case 7:
		result = 'C';
		if (input == 70) {
			result = 'D';
		}
		break;
	case 6:
		result = 'D';
		if (input == 60) {
			result = 'F';
		}
		break;
	default:
		result = 'F';
	}
	printf("학점은 %c입니다.", result);
	*/

	// 5-9
	/*
	int input = 0;
	printf("정수를 입력하세요 : ");
	scanf_s("%d", &input);
	switch (input%2)
	{
	case 0:
		printf("입력한 수는 짝수입니다.");
		break;
	case 1:
		printf("입력한 수는 홀수입니다.");
		break;
	default:
		printf("유효하지않음");
		break;
	}
	*/

	// =================반복문=================
	// 1
	/*
	int i = 0;
	while (i < 10) {
		printf("*");
		i++;
	}
	printf("\n");
	for (i = 0; i < 10; i++) {
		printf("*");
	}
	printf("\n");
	i = 0;
	do {
		printf("*");
		i++;
	} while (i < 10);
	*/

	// 2
	/*
	int i = 1;
	while (i < 13) {
		printf("%d월\n", i);
		i++;
	}
	printf("\n");
	for (i = 1; i < 13; i++) {
		printf("%d월\n", i);
	}
	printf("\n");
	i = 1;
	do {
		printf("%d월\n", i);
		i++;
	} while (i < 13);
	*/

	// 3
	/*
	int dan = 0;
	int i = 1;
	printf("구구단 입력(for) : ");
	scanf_s("%d", &dan);
	for (i; i < 10; i++) {
		printf("%d * %d = %d\n", dan, i, dan * i);
	}

	dan = 0;
	i = 1;
	printf("구구단 입력(while) : ");
	scanf_s("%d", &dan);
	while (i < 10) {
		printf("%d * %d = %d\n", dan, i, dan * i);
		i++;
	}
	*/

	// 4
	/*
	int i = 1;
	for (i; i < 51; i++) {
		printf("%d\n", 2 * i);
	}

	i = 1;
	while (i < 51) {
		printf("%d\n", 2 * i);
		i++;
	}
	*/

	// 5
	/*
	int i = 1;
	int sum = 0;
	while (i < 11) {
		sum = sum + i;
		i++;
	}
	printf("%d\n", sum);

	sum = 0;
	for (i = 1; i < 11; i++) {
		sum = sum + i;
	}
	printf("%d\n", sum);

	sum = 0;
	i = 1;
	do
	{
		sum = sum + i;
		i++;
	} while (i < 11);
	printf("%d\n", sum);
	*/

	// 6
	/*
	int input = 0;
	int i = 1;
	int sum = 0;
	printf("정수를 입력하세요 : ");
	scanf_s("%d", &input);

	while (i <= input) {
		sum = sum + i;
		i++;
	}
	printf("%d\n", sum);

	sum = 0;
	for (i = 1; i <= input; i++) {
		sum = sum + i;
	}
	printf("%d\n", sum);

	sum = 0;
	i = 1;
	do
	{
		sum = sum + i;
		i++;
	} while (i <= input);
	printf("%d\n", sum);
	*/

	// 7
	int i = 1;
	while (i <= 100) {
		printf("충전 : %d\n", i);
		i++;
	}
	printf("충전이 완료되었습니다.");
}