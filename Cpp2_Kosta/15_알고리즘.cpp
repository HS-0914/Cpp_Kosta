#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

void func(string str) {
	cout << str << endl;
}

int main() {
	/*
	int arr[] = { 10,20,30,40,50 };
	vector<int> vArr(&arr[0], &arr[5]);
	vector<int>::iterator it;

	// 찾은 위치 주소값 리턴
	if (find(vArr.begin(), vArr.end(), 35) != vArr.end()) {
		cout << "검색성공" << endl;
	}
	else {
		cout << "검색 실패" << endl;
	}
	*/
	vector<string> vs;
	vs.push_back("인성교육의 중요성");
	vs.push_back("날이 좋아서 날이 적당해서");
	vs.push_back("낮잠 잠");
	vs.push_back("얼마나 좋아, 집도 사고, 땅도 사고");
	
	for_each(vs.begin(), vs.end(), func);

	return 0;
}