#include<iostream>
#include<list> // 링크드 리스트
#include<vector> // 동적 배열
// 자료구조는 다르지만 사용 방법은 비슷


using namespace std;
//#define professional
#define LIST

int main() {
	int i;
//#ifdef professional
//	// 전문가 기능
//	cout << "전문가 기능 빌드 성공" << endl;

#ifdef LIST
	list<int> lst;
	list<int>::iterator it;
#else
	// 일반 기능
	cout << "일반 기능 빌드 성공" << endl;
	vector<int> lst;
	vector<int>::iterator it;
#endif
	// 공통코드 80%
	cout << "공통코드" << endl;

	for (int i = 0; i < 5; i++)
	{
		lst.push_back(i + 1);
	}
	for (it=lst.begin(); it != lst.end(); it++)
	{
		cout << *it << endl;
	}
	return 0;
}

// 자료구조가 달라도 조건부 컴파일과 일반화로 인해 효율적으로 구현 가능