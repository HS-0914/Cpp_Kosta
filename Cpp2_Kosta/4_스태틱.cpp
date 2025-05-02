#include<iostream>

using namespace std;

class Deposit {
private:
	const char* strName;
	double dBalance;

	// static ������ ���� ����ó�� ���α׷��� ���۵Ǹ鼭 �޸𸮰� �Ҵ�ȴ�.
	// ���������� ���� ���α׷� ���� �� �ѹ��� �ʱ�ȭ
	// static ��� ������ ���� �����ڴ� �ʱ�ȭ ������ ���� ������ ����
	// private�Ӽ��� static��������� Ŭ���� �ܺο��� �ʱ�ȭ ����
	static double dInterestRate;
	static int nCount;

public:
	Deposit() {
		cout << "��ü ���� ���� : " << ++nCount << endl;
	}
	Deposit(const char* name, double balance) {
		strName = name;
		dBalance = balance;
	}
	~Deposit() {
		cout << "��ü �Ҹ� ���� : " << --nCount << endl;
	}

	// ���� ����
	// dBalance += (dBalance * dInterestRate);

	void BackBalance() {
		this->dBalance += (dBalance * dInterestRate);
		cout << "���ڹ��� ���� : " << dBalance << endl;
	}
	static void SetInterestRate(double dNewRate) {

		// static ����� �ƴ� �Ϲ� ��� �������� ���� �Ұ�
		dInterestRate = dNewRate;
	}

	static double GetInterestRate() {
		return dInterestRate;
	}
};

// �ʱ�ȭ
double Deposit::dInterestRate = 0.05;
int Deposit::nCount = 0;

int main() {
	/*
	// lee �� ����̱� ������ strName�� const�� �پ���Ѵ�.
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
	cout << "����� ������ : " << Deposit::GetInterestRate() << endl;

	return 0;
}