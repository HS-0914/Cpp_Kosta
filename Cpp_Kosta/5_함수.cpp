#include<stdio.h>

// int Add(int a, int b);
//void print_Start();
//void print_Hap(int result);
//
//int global;
//
//void main() {
//
//	int x = 10;
//	int y = 20;
//	
//	
//	/*
//	int hap = Add(x, y);
//	printf("%d", hap);
//	*/
//}

//int Add(int a, int b) {
//	global = a + b;
//	return a + b;
//}
//
//void print_Start() {
//	printf("========= Programming Start =========\n");
//	printf("�� ���� ������ �Է��Ͻÿ� : ");
//}
//
//void print_Hap(int result) {
//	printf("�� ���� ���� %d�Դϴ�.\n", result);
//	printf("========= Programming End =========\n");
//}
void func() {
	static int value = 0;
	value++;
	printf("%d\n", value);
}
void main() {
	for (int i = 0; i < 5; i++) {
		func();
	}
}