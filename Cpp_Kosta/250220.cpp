#include<stdio.h>


void func2() {
	printf("local = 20 �޸� �Ҵ�\n");
	printf("local = 20 �޸� �Ҹ�\n");
	int local = 20;
}

void func1() {
	int local = 10;
	printf("local = 10 �޸� �Ҵ�\n");
	func2();
	printf("local = 10 �޸� �Ҹ�\n");
}

// 1
void vending(int price) {
	if (price == 100) {
		printf("��Ŀ��");
	}
	else if (price == 200) {
		printf("��ũĿ��");
	}
	else {
		printf("��ȿ��������");
	}
}

// 2
// int total = 0;
void marathon() {
	int read = 0;
	static int total = 0;
	while (1) {
		printf("���� å�� ������ ���� �Է��Ͻÿ� : ");
		scanf_s("%d", &read);
		if (read == -1) {
			printf("�� �й��ϼ���.");
			break;
		}
		total += read;
		printf("���� ���� ������ : %d\n", total);
	}
}

// 3
int returnFunc(int a) {
	return a * 2;
}

// 4
void nemo(int width, int height) {
	printf("�簢���� ���� : %d", width * height);
}

// 5
void circle(int radian) {
	printf("���� ���� : �� %f", radian * radian * 3.14);
}

// 6
void minMax(int input1, int input2) {
	if (input1 >= input2) {
		printf("�ִ밪 : %d // �ּҰ� : %d", input1, input2);
	}
	else {
		printf("�ִ밪 : %d // �ּҰ� : %d", input2, input1);
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
	printf("������ ����(100, 200)�� �Է��ϼ��� : ");
	scanf_s("%d", &price);
	vending(price);

	// 2
	marathon();

	// 3
	int output = returnFunc(5);
	printf("���޹��� �� * 2 = %d", output);

	// 4
	int x = 0;
	int y = 0;
	printf("�� ����(����, ����)�� �Է��ϼ��� : ");
	scanf_s("%d%d", &x, &y);
	nemo(x, y);
	
	// 5
	int r = 0;
	printf("�������� �Է��ϼ��� : ");
	scanf_s("%d", &r);
	circle(r);

	// 6
	int input1 = 0;
	int input2 = 0;
	printf("�� ������ �Է��ϼ��� : ");
	scanf_s("%d%d", &input1, &input2);
	minMax(input1, input2);

	// 7
	/*
	int input1 = 0;
	int input2 = 0;
	printf("�� ������ �Է��ϼ��� : ");
	scanf_s("%d%d", &input1, &input2);
	printf("�� ������ ���� %d �Դϴ�.", plus(input1, input2));
	printf("�� ������ ���� %d �Դϴ�.", minus(input1, input2));
	printf("�� ������ ���� %d �Դϴ�.", multiple(input1, input2));
	printf("�� ������ ������� %f �Դϴ�.", divide(input1, input2));
	*/

	// 6
	/*
	int val = 0;
	printf("val = 0 �޸� �Ҵ�\n");
	func1();
	*/

	// 8
	/*
	int arr1[3] = { 1, 2, 3 };
	int arr2[3];

	for (int i = 0; i < 3; i++) {
		arr2[i] = arr1[i];
		printf("arr2�� %d��° ��� : %d\n", i + 1, arr2[i]);
	}
	*/

	// 9
	int arr1[5] = { 1, 2, 3, 4, 5 };
	int arr2[5];

	for (int i = 0; i < 5; i++) {
		arr2[i] = arr1[5 - (i + 1)];
		printf("arr2�� %d��° ��� : %d\n", i + 1, arr2[i]);
	}
}