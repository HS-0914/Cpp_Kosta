/*
동적으로 할당된 메모리도 자동으로 해제하는 포인터의 레퍼클래스
auto_ptr 템플릿은 memory헤더파일에 정의 됨, 사용시 헤더 선언
template<typename T> auto_ptr;

*/

#include<iostream>
#include<memory>

using namespace std;

int main() {

	/*
	double* rate = new double();
	*rate = 3.14;
	cout << *rate << endl;
	delete rate;
	*/
	
	/*
	int* a;
	int b;
	cout << "나누는 수 입력 : ";
	cin >> b;

	// heap 메모리에 4byte 만들어서 10이라는 값 추가

	try
	{
		a = new int(10);

		if (b != 0) {
			cout << "나누기 결과 : " << *a / b << endl;
		}
		else {
			throw b;
		}
		delete a;
	}
	catch (const int ex)
	{
		cout << "나누어야 할 수는 " << ex << "이므로 연산 수행 불가" << endl;
	}
	*/

	auto_ptr<double> rate(new double);
	// *에 대해 연산자 오퍼레이팅 되어있음(오w버로딩)
	*rate = 3.14;
	cout << *rate << endl;

	return 0;
}