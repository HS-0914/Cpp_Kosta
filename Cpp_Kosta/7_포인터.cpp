#include<stdio.h>

int main() {

	/*
	int b = 100;
	int* pB = &b;

	printf("b = %d\n", b);
	printf("&b = %x\n", &b);
	printf("pB = %x\n", pB);
	printf("*pB = %d\n", *pB);
	*/

	char str[] = "Programming";
	char* pStr;

	pStr = &str[0];
	//pStr = str+2;

	printf("%x\n", pStr);
	printf("%x\n", pStr + 1);
	printf("%c\n", *(pStr + 1));
	printf("%x\n", pStr + 3);
	printf("%c\n", *(pStr + 3));

	char a = 'A';
	char* pA = &a;
	double d = 3.14;
	printf("%d\n", sizeof(pA));
	printf("%d", sizeof(d));

	return 0;
}