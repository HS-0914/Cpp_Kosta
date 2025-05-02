/*
맵: 
두 개의 데이터가 하나의 쌍을 이루어 저장하는 컨테이너로 
정렬된 상태로 관리되고, 검색속도가 빠르다.

대용량의 데이터를 검색할 경우 유리하고, 
데이터 삽입, 삭제 시 데이터의 이동이 발생하므로 상대적으로 느리다.

map<key, data> mp;

map<string, int> person;
person["이창현"] = 4;
map -> object구조의 원형?
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
	{"손형수", "0102323"}, {"홍길동", "0101111"}, {"김철수", "0102222"}
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
	cout << "이름검색 : ";
	cin >> name;

	// 찾아서 주소값 리턴
	it = person.find(name);
	// 못찾으면 end?
	if (it == person.end()) {
		cout << "찾을 수 없습니다." << endl;
	}
	else {
		cout << name << "의 전화번호는 " << it->second << endl;
	}

	return 0;
}
