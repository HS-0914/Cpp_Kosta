#include<iostream>


// c���� �Լ� �̸� �ٸ��� �ؾ���
// c++�� �����ε� ����
int Add(int a, int b) {
	return a + b;
}

double Add(double a, double b) {
	return a + b;
}

using namespace std;

int main() {

	/*
	// 1 
	printf("%d\n", AddI(10, 20));
	printf("%.2f\n", AddD(3.14, 1.59));
	*/

	cout << Add(10, 20) << endl;
	cout << Add(3.14, 1.59) << endl;
	return 0;
}

//