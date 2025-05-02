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
조건부 컴파일 지시자
지정한 조건의 진위 여부에 따라 코드의 일정부분을 컴파일 할 것인지 결정한다.
전처리문이므로 컴파일 전에 조건을 평가한다.
#ifdef 매크로명
	코드
#endif
*/