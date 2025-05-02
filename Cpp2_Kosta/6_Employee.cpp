#include<iostream>
#include<string>

using namespace std;

class Employee {
protected:
	char* name;
	char* addr;
public:
	Employee() {
		this->name = NULL;
		this->addr = NULL;
	}
	Employee(const char* name, const char* addr) {
		this->name = new char[strlen(name) + 1];
		this->addr = new char[strlen(addr)+1];
		strcpy_s(this->name, strlen(name) + 1, name);
		strcpy_s(this->addr, strlen(addr) + 1, addr);
		// this->name = name;
		// this->addr = addr;
	}
	~Employee() {
		delete[] name;
		delete[] addr;
	}
	// virtual => 부모 자식 간 같은 함수(오버라이딩 예정)가 있다면 부모는 빠지게 됨
	// =0 => 이걸 붙이면 기능이 필요없음을 나타냄 
	// 프로토타입은 있지만 값이 0 => 순수가상함수
	virtual double PayCheck() const = 0;
};

class Regular :public Employee{ // c++, c# 대신 extends
public:
	Regular() {
	}
	// 생성자 호출 명시
	Regular(const char* name, const char* addr, double salary): Employee(name, addr){ 
		
		this->salary = salary;
	}
	~Regular() {

	}
	double PayCheck() const{
		return salary;
	}

private:
	double salary;
};

class Temporary :public Employee {
public:
	Temporary(const char* name, const char* addr, double dailyPay, int days):Employee(name, addr) {

		this->dailyPay = dailyPay;
		this->days = days;
	}
	Temporary() {

	}
	~Temporary() {

	}
	double PayCheck() const{
		return dailyPay * days;
	}
private:
	double dailyPay;
	int days;
};

class SalesMan :public Regular {
private:
	double allowance;
public:
	SalesMan() {}
	~SalesMan() {}
	SalesMan(const char* pName, const char* pAddr, double pSalary, double allowance): Regular(pName, pAddr, pSalary) {
		this->allowance = allowance;
	}
	double PayCheck() const {
		return Regular::PayCheck() + allowance;
	}
};

class Department {
private:
	Employee* emp[10];
	int count;
public:
	Department() {
		count = 0;
	}
	void AddEmployee(Employee& emp) {
		this->emp[count] = &emp;
		count++;
	}
	void Display() const {
		for (int i = 0; i < count; i++) {
			cout << "급여 : " << emp[i]->PayCheck() << endl;
		}
	}
};


int main() {

	Regular rgl("park", "seoul", 300); 
	cout << rgl.PayCheck() << endl;
	
	Temporary tmp("choi", "bundang", 20, 10);
	cout << tmp.PayCheck() << endl;

	SalesMan slm("kim", "suwon", 300, 100);
	cout << slm.PayCheck() << endl;

	Employee* emp = (Employee*) & rgl;
	// 0 나옴, 해결책 => 가상함수
	// 가상함수 -> 오버라이딩 될 것으로 예상되는 멤버함수
	// 가변적인 PayCheck()로 객체에 따라 다양한 값을 구할수 있다.
	cout << emp->PayCheck() << endl;

	Department dept;
	dept.AddEmployee(rgl);
	dept.AddEmployee(tmp);
	dept.AddEmployee(slm);
	dept.Display();

	// 생성은 부모 먼저 소멸은 자식 먼저임
	return 0;
}

// c++
/*
템플릿
예외처리
STL의 개요(standard template library)
컨테이너
반복자

알고리즘
해시
싱글톤
스마트 포인터
실무
*/