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

	// ã�� ��ġ �ּҰ� ����
	if (find(vArr.begin(), vArr.end(), 35) != vArr.end()) {
		cout << "�˻�����" << endl;
	}
	else {
		cout << "�˻� ����" << endl;
	}
	*/
	vector<string> vs;
	vs.push_back("�μ������� �߿伺");
	vs.push_back("���� ���Ƽ� ���� �����ؼ�");
	vs.push_back("���� ��");
	vs.push_back("�󸶳� ����, ���� ���, ���� ���");
	
	for_each(vs.begin(), vs.end(), func);

	return 0;
}