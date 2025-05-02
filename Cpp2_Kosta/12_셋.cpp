/*
set: 동일한 타입의 데이터를 모아놓은 것이다.
데이터는 정렬된 위치에 삽입되므로 검색 속도가 빠르고,
키가 중복되지 않는다. + 오름차순으로 정렬도 해줌
set<T> st;
일반 컨테이너와 사용 형태는 동일하다.
key:value

*/

#include<iostream>
#include<set>

using namespace std;

int main() {
	/*
	int arr[] = { 1,2,3,2,5,6,3 };
	int size = sizeof(arr) / sizeof(arr[0]);
	set<int> scon;
	set<int>::iterator it;
	for (int i = 0; i < size; i++)
	{
		scon.insert(arr[i]);
	}
	*/
	const char* str = "abracadabra";
	int size = strlen(str);
	set<char> scon(&str[0], &str[size]);
	set<char>::iterator it;

	for (it = scon.begin(); it != scon.end(); it++) {
		cout << *it << endl;
	}

	return 0;
}