#include<iostream>

using namespace std;


// �������� ��� ����� �־���ϱ� ������ nullüũ ��� ��
// �����ʹ� null�ϼ����ִ�=>�Ҿ������� �ֱ� ������ nullüũ �ʼ�
//void printDouble(const double& rd) {
//	cout << rd;
//}
//
//void printDouble(const double* pd) {
//	if (pd) {
//		cout << *pd;
//	}
//}
//
//int main() {
//	string s("abc");
//	string& rs = s;
//
//	double pi = 3.14;
//	printDouble(pi);
//	printDouble(&pi);
//
//	return 0;
//}

int main() {
	int** pp = new int* [3];
	for (int i = 0; i < 3; i++) {
		pp[i] = new int[200];
	}

	// ��¼�� ��¼�� ����

	for (int i = 0; i < 3; i++)
	{
		delete[] pp[i];
	}
	delete[] pp;
}


/*
�����͸� ��� �ϴ� ���
����ų ��ü�� �ּҰ� ���� ��
�ϳ��� ������ ������ ���� ���� ��ü�� �ٲپ� �����ؾ��ϴ� ���

�����ڸ� ����ϴ� ���
������ �����Ͱ� �ݵ�� �����Ұ�
������ ��� ��ü�� �ٲ� �ʿ䰡 ������
*/


/*


*/