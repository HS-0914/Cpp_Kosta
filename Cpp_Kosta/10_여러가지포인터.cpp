#include<stdio.h>
int Plus(int a, int b);
int Minus(int a, int b);

int Plus(int a, int b) {
	return a + b;
}

int Minus(int a, int b) {
	return a - b;
}

int main() {
	// void a; �޸� �Ҵ��� �Ұ����ؼ� ������ ����.
	 
	// void�� Ÿ���� �������� �ʾƼ� �󸶸�ŭ�� �޸𸮰� �ʿ������� ������
	// �������̱� ������ 4����Ʈ �Ҵ��� �����ϴ�.
	/*
	void* a; 
	int b = 100;

	a = &b;
	printf("%d\n", *(int*)a); // ����� ����ȯ(Type Casting)
	*/

	/*
	void* a;
	double b = 3.14;
	a = &b;
	printf("%f\n", *(double*)a);
	*/

	/*
	int (*pFunc)(int a, int b); // �Լ� ������ ����
	pFunc = Plus; // �Լ� �����Ϳ� �Լ� �ּҰ� ����
	int a = pFunc(10, 20); // �Լ� �����ͷ� �Լ� ȣ��
	printf("%d\n", a);

	pFunc = Minus;
	a = pFunc(10, 20);
	printf("%d\n", a);
	*/

	// Null �����Ͷ� �ƹ��͵� ����Ű�� �ʴ� �����͸� ���Ѵ�.
	// ������ �������� ����
	// ���� ���� const a = null ������ ����
	// ���������� �Լ��� ���� ���� üũ �뵵�� ����Ѵ�.
	// null üũ�� �ʼ�

	// sprintf ���������� ���

	return 0;
}
