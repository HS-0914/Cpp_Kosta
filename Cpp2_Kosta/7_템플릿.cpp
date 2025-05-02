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
/* Ŭ���� ���ø�
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
		// *p�� a �ְ� ++����ż� ���� ĭ���� �̵���
		*p++ = a;
	}
	T Pop() {
		// NULL�� ����� ����
		return *(--p);
	}
private:
	T* p;
	int size;
};

int main() {
	// ���ø� => ��ü�� ������ ��
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

	// �Լ� ���ø�

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