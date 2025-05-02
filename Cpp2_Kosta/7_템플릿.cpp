/*
template <class T>
class MyClass {
private:
	T a;
	T b;
}
MyClass<int> mc;

*/
#include<iostream>

using namespace std;
/* 클래스 템플릿
template <class T>
class CStack {
public:
	CStack(T size) {
		this->size = size;
		p = new int[size];
	}
	~CStack() {
		delete[] p;
	}
	void Push(T a){
		// *p에 a 넣고 ++적용돼서 다음 칸으로 이동함
		*p++ = a;
	}
	T Pop() {
		// NULL로 만들고 리턴
		return *(--p);
	}
private:
	T* p;
	int size;
};

int main() {
	// 템플릿 => 객체가 생성될 때
	int size = 5;
	CStack<int> sp(size);
	for (int i = 0; i < size; i++)
	{
		sp.Push(i + 1);
	}
	for (int i = 0; i < size; i++)
	{
		cout << sp.Pop() << endl;
	}

	// 함수 템플릿

	return 0;
}
*/

template <class T>
T Max(T a, T b) {
	return (a > b) ? a : b;
}

template <class T>
void Swap(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}

int main() {

	int x = 5;
	int y = 3;

	char a = 'A';
	char b = 'B';

	cout << Max(x, y) << endl;
	cout << Max(a, b) << endl;

	cout << a << " : " << b << endl;
	Swap(a, b);
	cout << a << " : " << b << endl;

	return 0;
}