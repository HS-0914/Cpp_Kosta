#include<iostream>

/*
// 2
namespace A {
	void func() {
		std::cout << "A학급 주성" << std::endl;
	}	
}

namespace B {
	void func() {
		std::cout << "B학급 주성" << std::endl;
	}
}
*/

using namespace std;
void func(int a = 20, int b = 10);

/*
// 4
int temp = 10;
*/

// 5 예전엔 void 앞에 inline을 붙였지만 이젠 알아서 inline으로 판단해서 넣음
void print() {
	cout << "inline 함수" << endl;
}

int main() {
	/*
	// 1
	int a = 10;
	double b = 3.14f;
	char c = 'A';

	cin >> a;
	cout << a << endl; // :: ==> scope연산자 (영역결정연산자) // usding namespace std;를 사용하면 생략가능
	cin >> b;
	std::cout << b << std::endl; // scope (영역결정연산자)
	std::cout << c << std::endl; // scope (영역결정연산자)
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
	{ // 코드의 영역을 잡아주는 기능
		int temp = 20;
		cout << "temp : " << temp << endl;
		cout << "temp : " << ::temp << endl; // namespace 생략 => 전역 namespace
		printf("temp : %d\n", temp);
	}
	printf("temp : %d\n", temp);
	*/

	// 5 인라인 함수
	// 이렇게 만들어도
	print();
	print();
	print();
	print();

	// 이거처럼 작동함 성능도 좋음
	cout << "inline 함수" << endl;
	cout << "inline 함수" << endl;
	cout << "inline 함수" << endl;
	cout << "inline 함수" << endl;

	return 0;
}

void func(int a, int b) {
	cout << a << " " << b << endl;
}

// 인라인 함수