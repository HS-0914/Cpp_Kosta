#include<iostream>

using namespace std;


// 참조자일 경우 대상이 있어야하기 때문에 null체크 없어도 됨
// 포인터는 null일수도있다=>불안정성이 있기 때문에 null체크 필수
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

	// 어쩌구 저쩌구 실행

	for (int i = 0; i < 3; i++)
	{
		delete[] pp[i];
	}
	delete[] pp;
}


/*
포인터를 써야 하는 경우
가리킬 객체의 주소가 없을 때
하나의 변수를 가지고 여러 개의 객체를 바꾸어 참조해야하는 경우

참조자를 써야하는 경우
참조할 포인터가 반드시 존재할것
참조할 대상 객체를 바꿀 필요가 없을때
*/


/*


*/