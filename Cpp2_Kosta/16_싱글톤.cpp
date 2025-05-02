#include<iostream>

using namespace std;

class Singleton {
private:
	static Singleton* instance;
	int total;
	Singleton() {
		this->total = 0;
	}
public:
	~Singleton(){}
	static Singleton* getInstance() {
		if (instance == NULL) {
			instance = new Singleton();
		}
		return instance;
	}
	void showTotal() const {
		cout << "Total : " << total << endl;
	}
	void addValue(int value) {
		total += value;
	}
	static void del() {
		if (instance != NULL) {
			delete instance;
			instance = NULL;
		}
	}
};
Singleton* Singleton::instance=NULL;
int main() {
	Singleton* s1 = Singleton::getInstance();
	Singleton* s2 = Singleton::getInstance();
	Singleton* s3 = Singleton::getInstance();

	s1->addValue(10);
	s1->showTotal();
	s2->addValue(10);
	s2->showTotal();
	s3->addValue(10);
	s3->showTotal();

	Singleton::getInstance()->del();
	return 0;
}