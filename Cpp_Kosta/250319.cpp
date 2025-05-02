#include <iostream>
using namespace std;

class Employee
{
public:
	Employee();
	Employee(const char* szName, const char* szAddr);
	~Employee();
	virtual void Display() = 0;
private:
	char* pName;
	char* pAddr;
};

Employee::Employee()
{
	pName = NULL;
	pAddr = NULL;
}

Employee::Employee(const char* strName, const char* strAddr)
{
	cout << "���ڰ� 2���� ������ ȣ��" << endl;
	pName = new char[strlen(strName) + 1];
	pAddr = new char[strlen(strAddr) + 1];
	strcpy_s(pName, strlen(strName) + 1, strName);
	strcpy_s(pAddr, strlen(strAddr)+ 1, strAddr);
}

Employee::~Employee()
{
	delete[] pName;
	delete[] pAddr;
}

void Employee::Display()
{
	cout << "Employee�� Display()" << endl;
	cout << "�̸� :" << pName << endl;
	cout << "�ּ� :" << pAddr << endl;
}

class Manager: public Employee{
private:
	const char* pRole;
public:
	Manager(const char* pName, const char* pAddr, const char* pRole):Employee(pName, pAddr) {
		this->pRole = pRole;
	}
	~Manager() {
	}
	void Display() {
		Employee::Display();
		cout << "Manager�� Display()" << endl;
		cout << "���� : " << this->pRole << endl;
	};
};

class Developer : public Employee {
private:
	const char* pLang;
public:
	Developer(const char* pName, const char* pAddr, const char* pLang) :Employee(pName, pAddr) {
		this->pLang = pLang;
	}
	~Developer() {
	}
	void Display(){
		Employee::Display();
		cout << "Developer�� Display()" << endl;
		cout << "���α׷��� ��� : " << this->pLang << endl;
	}
};

int main() {
	/*
	Employee emp("kim", "seoul");
	emp.Display();
	*/

	/*
	Manager mng("kim", "seoul", "����");
	mng.Display();
	*/

	/*
	Developer dev("son", "incheon", "c++");
	dev.Display();
	*/
	Employee* emp;
	Developer dev("son", "incheon", "c++");
	
	emp = (Employee*)&dev;
	emp->Display();

	return 0;
}