#include<stdio.h>
void Temp(int b);

int main() {
	/*
	// �迭�� �̸��� �����ʹ�.
	int arr[] = { 1, 2, 3, 4, 5 };
	int* pArr;

	pArr = arr;

	for (int i = 0; i < 5; i++) {
		printf("%d\n", arr[i]);
	}

	for (int i = 0; i < 5; i++) {
		printf("%x\n", &arr[i]);
	}

	// �迭�� �̸��� ù ��° �ּҰ��� ���� => ù ��° ����� �ּҰ��� ����Ű�� �����ʹ�.
	// arr == &arr[0]��� �� �� �ִ�.
	// �迭 ������ ���� -> ������ ������ �����Ѵ�.
	printf("%x\n", arr);

	for (int i = 0; i < 5; i++) {
		// ȥ�� ����
		printf("%d\n", *(pArr + i));
		printf("%d\n", pArr[i]);
	}
	*/

	// ���ڿ����� - ��ҿ� �����Ͽ� ���� ����
	char str[] = "love";
	// ���ڿ����
	const char* pStr = "you";
	// ���ڿ����?
	const char str2[] = "test";
	
	str[0] = 'r';
	printf("%s\n", str);
	printf("%s\n", pStr);
	printf("%s\n", str2);

	// 2���� �迭�� ����
	//���̰� j �� int �� �迭�� i�� ��Ƴ��� �迭�� �����϶�.
	//j���� �þ��

	// a�� ���μ�, b�� �����μ�, ���μ�
	int a = 10;
	Temp(a);


	return 0;
}

void Temp(int b) {
	printf("%d", b);
}