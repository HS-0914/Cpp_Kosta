/*
��: 
�� ���� �����Ͱ� �ϳ��� ���� �̷�� �����ϴ� �����̳ʷ� 
���ĵ� ���·� �����ǰ�, �˻��ӵ��� ������.

��뷮�� �����͸� �˻��� ��� �����ϰ�, 
������ ����, ���� �� �������� �̵��� �߻��ϹǷ� ��������� ������.

map<key, data> mp;

map<string, int> person;
person["��â��"] = 4;
map -> object������ ����?
*/

#include<iostream>
//#include<map>
#include<hash_map>

using namespace std;
using namespace stdext;

struct PhoneAddr {
	string name;
	string pnum;
}arPerson[] = {
	{"������", "0102323"}, {"ȫ�浿", "0101111"}, {"��ö��", "0102222"}
};

int main() {

	//map<string, string> person;
	//map<string, string>::iterator it;
	hash_map<string, string> person;
	hash_map<string, string>::iterator it;
	int size = sizeof(arPerson) / sizeof(arPerson[0]);

	for (int i = 0; i < size; i++)
	{
		person[arPerson[i].name] = arPerson[i].pnum;
	}

	string name;
	cout << "�̸��˻� : ";
	cin >> name;

	// ã�Ƽ� �ּҰ� ����
	it = person.find(name);
	// ��ã���� end?
	if (it == person.end()) {
		cout << "ã�� �� �����ϴ�." << endl;
	}
	else {
		cout << name << "�� ��ȭ��ȣ�� " << it->second << endl;
	}

	return 0;
}
