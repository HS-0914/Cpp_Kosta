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
//	printf("두 개의 정수를 입력하시오 : ");
//}
//
//void print_Hap(int result) {
//	printf("두 수의 합은 %d입니다.\n", result);
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