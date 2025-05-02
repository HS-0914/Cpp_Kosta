/*
반복자의 개념
컨테이너의 구간에 대해 값을 읽어올 수 있도록 기능을 제공한다.
모든 컨테이너에 대해서 동일하게 동작하여 값을 얻어올 수 있게 한다.

포인터와 흡사
++연산 적용 가능

범위 [first, last)

컨테이너 형식은 달라도 사용 형식은 같음

상이한 자료구조를 가진 컨테이너를 동일한 방법으로 접근이 가능하다.
*/

#include<iostream>
#include<vector>
#include<list>

using namespace std;

int main() {
	/*
	int arr[] = { 1,2,3,4,5 };
	//int* pNum;
	vector<int> vArr; (&arr[0], &arr[5]);
	for(int i = 0; i < 5; i++) {
		vArr.push_back(i + 1);
	}

	vector<int>::iterator it;
	for (it = vArr.begin(); it != vArr.end(); it++) {
		cout << *it << endl;
	}
	*/

	/*
	char arr[] = "programming";
	char* pArr = arr;

	// pArr는 주소라 무한루프
	while (*pArr) {
		cout << *pArr << endl;
		pArr++;
	}
	*/

	list<int> lst;
	list<int>::iterator it;
	
	for (int i = 0; i < 5; i++)
	{
		lst.push_back(i + 1);
	}

	for (it = lst.begin(); it != lst.end(); it++) {
		cout << *it << endl;
	}

	return 0;
}