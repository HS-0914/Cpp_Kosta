#include <iostream>

using namespace std;

template <class T>
class SmartPointer {
private:
	T* p;
public:
	SmartPointer(T* sp) {
		p = sp;
	}
	~SmartPointer() {
		delete p;
	}
	T operator*() const {
		return *p;
	}

	T* operator->() const {
		return p;
	}
};

int main() {
	SmartPointer<string> pStr(new string("test"));

	cout << *pStr << endl;
	cout << pStr->length() << endl;

	return 0;
}


/*
���Ǻ� ������ ������
������ ������ ���� ���ο� ���� �ڵ��� �����κ��� ������ �� ������ �����Ѵ�.
��ó�����̹Ƿ� ������ ���� ������ ���Ѵ�.
#ifdef ��ũ�θ�
	�ڵ�
#endif
*/