/*
�ݺ����� ����
�����̳��� ������ ���� ���� �о�� �� �ֵ��� ����� �����Ѵ�.
��� �����̳ʿ� ���ؼ� �����ϰ� �����Ͽ� ���� ���� �� �ְ� �Ѵ�.

�����Ϳ� ���
++���� ���� ����

���� [first, last)

�����̳� ������ �޶� ��� ������ ����

������ �ڷᱸ���� ���� �����̳ʸ� ������ ������� ������ �����ϴ�.
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

	// pArr�� �ּҶ� ���ѷ���
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