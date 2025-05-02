#include<iostream>

using namespace std;

//class SingletonClass {
//
//private:
//	static SingletonClass instance; // ���� ����, ���� �̱���
//	SingletonClass() {}
//public:
//	~SingletonClass() {}
//	static SingletonClass& getInstance() {
//		return instance;
//	}
//	void ShowMessage() {
//		cout << "�̱��� ����" << endl;
//	}
//};
//
//SingletonClass SingletonClass::instance;
//
//int main() {
//	// �ܺο��� ��ü ���� ���� new ����
//	//SingletonClass* instance = new SingletonClass();
//
//	SingletonClass::getInstance().ShowMessage();
//	SingletonClass::getInstance().ShowMessage();
//	SingletonClass::getInstance().ShowMessage();
//	SingletonClass::getInstance().ShowMessage();
//
//	return 0;
//}


// ���� �ʱ�ȭ
class SingletonClass {

private:
	int total;
	static SingletonClass* pInstance; // 
	SingletonClass() {
		total = 0;
	}
public:
	~SingletonClass() {}
	static SingletonClass* getInstance() { // ���� �ʱ�ȭ
		if (pInstance == NULL) {
			pInstance = new SingletonClass();
		}
		return pInstance;
	}
	void ShowMessage() {
		cout << "�̱��� ����" << endl;
	}
	void addValue(int value) {
		total = total + value;
	}
	int getTotalValue() {
		return total;
	}
	void destroy() {
		if (pInstance != NULL) {
			delete pInstance;
			pInstance = NULL;
			cout << "pInstance ����" << endl;
		}
	}
};

SingletonClass* SingletonClass::pInstance = NULL;

int main() {
	// �ܺο��� ��ü ���� ���� new ����
	//SingletonClass* instance = new SingletonClass();

	//SingletonClass::getInstance()->ShowMessage();
	SingletonClass* ins1 = SingletonClass::getInstance();
	SingletonClass* ins2 = SingletonClass::getInstance();
	SingletonClass* ins3 = SingletonClass::getInstance();

	ins1->addValue(10);
	cout << "total : " << ins1->getTotalValue() << endl;
	ins2->addValue(10);
	cout << "total : " << ins2->getTotalValue() << endl;
	ins3->addValue(10);
	cout << "total : " << ins3->getTotalValue() << endl;


	SingletonClass::getInstance()->destroy();
	return 0;
	
}
