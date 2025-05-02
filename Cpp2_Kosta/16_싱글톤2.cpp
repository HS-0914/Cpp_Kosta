#include<iostream>

using namespace std;

//class SingletonClass {
//
//private:
//	static SingletonClass instance; // 정적 변수, 정적 싱글톤
//	SingletonClass() {}
//public:
//	~SingletonClass() {}
//	static SingletonClass& getInstance() {
//		return instance;
//	}
//	void ShowMessage() {
//		cout << "싱글톤 패턴" << endl;
//	}
//};
//
//SingletonClass SingletonClass::instance;
//
//int main() {
//	// 외부에서 객체 생성 금지 new 금지
//	//SingletonClass* instance = new SingletonClass();
//
//	SingletonClass::getInstance().ShowMessage();
//	SingletonClass::getInstance().ShowMessage();
//	SingletonClass::getInstance().ShowMessage();
//	SingletonClass::getInstance().ShowMessage();
//
//	return 0;
//}


// 늦은 초기화
class SingletonClass {

private:
	int total;
	static SingletonClass* pInstance; // 
	SingletonClass() {
		total = 0;
	}
public:
	~SingletonClass() {}
	static SingletonClass* getInstance() { // 늦은 초기화
		if (pInstance == NULL) {
			pInstance = new SingletonClass();
		}
		return pInstance;
	}
	void ShowMessage() {
		cout << "싱글톤 패턴" << endl;
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
			cout << "pInstance 해제" << endl;
		}
	}
};

SingletonClass* SingletonClass::pInstance = NULL;

int main() {
	// 외부에서 객체 생성 금지 new 금지
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
