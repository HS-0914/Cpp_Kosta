#include<stdio.h>

void main() {
	// =================�б⹮========================
	// 1
	/*
	int input;
	printf("������ �Է��ϼ��� : ");
	scanf_s("%d", &input);

	if (input % 2 == 0) {
		printf("�Է��� ���� ¦���Դϴ�.");
	}
	else if (input % 2 == 1) {
		printf("�Է��� ���� Ȧ���Դϴ�.");
	}
	else {
		printf("��ȿ��������");
	}
	*/

	// 2
	/*
	int input1;
	int input2;
	printf("�� ���� ������ �Է��ϼ��� : ");
	scanf_s("%d%d", &input1, &input2);
	if (input1 > input2) {
		printf("%d", input1);
	}
	else if (input1 < input2) {
		printf("%d", input2);
	}
	else if (input1 == input2) {
		printf("���� ���� %d", input1);
	}
	else {
		printf("��ȿ��������");
	}
	*/

	// 3
	/*
	int input1, input2, input3;
	int result = 0;
	printf("�� ���� ������ �Է� : ");
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
	printf("�ּҰ� : %d", result);
	*/

	// 4
	/*
	int input = 0;
	printf("������ �Է� : ");
	scanf_s("%d", &input);
	if (input >= 60) {
		printf("�հ��Դϴ�.");
	}
	else {
		printf("���հ��Դϴ�.");
	}
	*/

	// 5-3
	/*
	int input = 0;
	printf("������ �Է� : ");
	scanf_s("%d", &input);
	if (input >= 60) {
		printf("�հ��Դϴ�.");
		if (input >= 90) {
			printf("\n���д���Դϴ�.");
		}
	}
	else {
		printf("���հ��Դϴ�.");
	}
	*/

	// 6
	/*
	int age = 0;
	printf("���̸� �Է��ϼ��� : ");
	scanf_s("%d", &age);
	if (age >= 19) {
		printf("�����Դϴ�.");
	}
	else if (age >= 13 && age < 19) {
		printf("û�ҳ��Դϴ�.");
	}
	else {
		printf("����Դϴ�.");
	}
	*/

	// 5-6
	/*
	char input;
	printf("������ �� ����̺긦 �����Ͻðڽ��ϱ�?(y/n)");
	scanf_s("%c", &input);
	if (input == 'y') {
		printf("��, ����̺긦 �����ϰڽ��ϴ�.");
	}
	else if (input == 'n') {
		printf("�ƴϿ�, ����̺긦 �����ϰڽ��ϴ�.");
	}
	else {
		printf("��ȿ���� ���� ���Դϴ�.");
	}
	*/

	//5-7
	/*
	int input;
	char result = 'F';
	printf("������ �Է��Ͻÿ� : ");
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
		printf("��ȿ���� ����\n");
	}
	printf("������ %c�Դϴ�.", result);
	*/

	// 5-8
	/*
	int input;
	char result = 'F';
	printf("������ �Է��Ͻÿ� : ");
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
	printf("������ %c�Դϴ�.", result);
	*/

	// 5-9
	/*
	int input = 0;
	printf("������ �Է��ϼ��� : ");
	scanf_s("%d", &input);
	switch (input%2)
	{
	case 0:
		printf("�Է��� ���� ¦���Դϴ�.");
		break;
	case 1:
		printf("�Է��� ���� Ȧ���Դϴ�.");
		break;
	default:
		printf("��ȿ��������");
		break;
	}
	*/

	// =================�ݺ���=================
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
		printf("%d��\n", i);
		i++;
	}
	printf("\n");
	for (i = 1; i < 13; i++) {
		printf("%d��\n", i);
	}
	printf("\n");
	i = 1;
	do {
		printf("%d��\n", i);
		i++;
	} while (i < 13);
	*/

	// 3
	/*
	int dan = 0;
	int i = 1;
	printf("������ �Է�(for) : ");
	scanf_s("%d", &dan);
	for (i; i < 10; i++) {
		printf("%d * %d = %d\n", dan, i, dan * i);
	}

	dan = 0;
	i = 1;
	printf("������ �Է�(while) : ");
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
	printf("������ �Է��ϼ��� : ");
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
		printf("���� : %d\n", i);
		i++;
	}
	printf("������ �Ϸ�Ǿ����ϴ�.");
}