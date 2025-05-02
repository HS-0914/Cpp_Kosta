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
	// virtual => �θ� �ڽ� �� ���� �Լ�(�������̵� ����)�� �ִٸ� �θ�� ������ ��
	// =0 => �̰� ���̸� ����� �ʿ������ ��Ÿ�� 
	// ������Ÿ���� ������ ���� 0 => ���������Լ�
	virtual double PayCheck() const = 0;
};

class Regular :public Employee{ // c++, c# ��� extends
public:
	Regular() {
	}
	// ������ ȣ�� ���
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
			cout << "�޿� : " << emp[i]->PayCheck() << endl;
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
	// 0 ����, �ذ�å => �����Լ�
	// �����Լ� -> �������̵� �� ������ ����Ǵ� ����Լ�
	// �������� PayCheck()�� ��ü�� ���� �پ��� ���� ���Ҽ� �ִ�.
	cout << emp->PayCheck() << endl;

	Department dept;
	dept.AddEmployee(rgl);
	dept.AddEmployee(tmp);
	dept.AddEmployee(slm);
	dept.Display();

	// ������ �θ� ���� �Ҹ��� �ڽ� ������
	return 0;
}

// c++
/*
���ø�
����ó��
STL�� ����(standard template library)
�����̳�
�ݺ���

�˰���
�ؽ�
�̱���
����Ʈ ������
�ǹ�
*/