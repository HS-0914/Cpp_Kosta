#include<iostream>

/*
// 2
namespace A {
	void func() {
		std::cout << "A�б� �ּ�" << std::endl;
	}	
}

namespace B {
	void func() {
		std::cout << "B�б� �ּ�" << std::endl;
	}
}
*/

using namespace std;
void func(int a = 20, int b = 10);

/*
// 4
int temp = 10;
*/

// 5 ������ void �տ� inline�� �ٿ����� ���� �˾Ƽ� inline���� �Ǵ��ؼ� ����
void print() {
	cout << "inline �Լ�" << endl;
}

int main() {
	/*
	// 1
	int a = 10;
	double b = 3.14f;
	char c = 'A';

	cin >> a;
	cout << a << endl; // :: ==> scope������ (��������������) // usding namespace std;�� ����ϸ� ��������
	cin >> b;
	std::cout << b << std::endl; // scope (��������������)
	std::cout << c << std::endl; // scope (��������������)
	*/

	/*
	// 2
	A::func();
	B::func();
	*/

	/*
	// 3
	func();
	func(30, 40);
	func(30);
	*/

	/*
	// 4
	{ // �ڵ��� ������ ����ִ� ���
		int temp = 20;
		cout << "temp : " << temp << endl;
		cout << "temp : " << ::temp << endl; // namespace ���� => ���� namespace
		printf("temp : %d\n", temp);
	}
	printf("temp : %d\n", temp);
	*/

	// 5 �ζ��� �Լ�
	// �̷��� ����
	print();
	print();
	print();
	print();

	// �̰�ó�� �۵��� ���ɵ� ����
	cout << "inline �Լ�" << endl;
	cout << "inline �Լ�" << endl;
	cout << "inline �Լ�" << endl;
	cout << "inline �Լ�" << endl;

	return 0;
}

void func(int a, int b) {
	cout << a << " " << b << endl;
}

// �ζ��� �Լ�