#include<iostream>

using namespace std;

class Deposit {
private:
	const char* strName;
	double dBalance;

	// static 변수는 지역 변수처럼 프로그램이 시작되면서 메모리가 할당된다.
	// 전역변수와 같이 프로그램 시작 시 한번만 초기화
	// static 멤버 변수의 접근 지정자는 초기화 과정에 전혀 영향을 안줌
	// private속성의 static멤버일지라도 클래스 외부에서 초기화 가능
	static double dInterestRate;
	static int nCount;

public:
	Deposit() {
		cout << "객체 생성 개수 : " << ++nCount << endl;
	}
	Deposit(const char* name, double balance) {
		strName = name;
		dBalance = balance;
	}
	~Deposit() {
		cout << "객체 소멸 개수 : " << --nCount << endl;
	}

	// 이자 적용
	// dBalance += (dBalance * dInterestRate);

	void BackBalance() {
		this->dBalance += (dBalance * dInterestRate);
		cout << "이자받은 원금 : " << dBalance << endl;
	}
	static void SetInterestRate(double dNewRate) {

		// static 멤버가 아닌 일반 멤버 변수에는 접근 불가
		dInterestRate = dNewRate;
	}

	static double GetInterestRate() {
		return dInterestRate;
	}
};

// 초기화
double Deposit::dInterestRate = 0.05;
int Deposit::nCount = 0;

int main() {
	/*
	// lee 가 상수이기 때문에 strName은 const가 붙어야한다.
	Deposit cus1("lee", 1000);
	Deposit cus2("kim", 2000);
	Deposit cus3("park", 3000);
	Deposit cus4("son", 4000);
	*/

	Deposit kim;
	Deposit im;
	Deposit park;
	Deposit son;

	Deposit::SetInterestRate(0.04);
	cout << "변경된 이자율 : " << Deposit::GetInterestRate() << endl;

	return 0;
}