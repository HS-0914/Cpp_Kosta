#include<iostream>
#include<list> // ��ũ�� ����Ʈ
#include<vector> // ���� �迭
// �ڷᱸ���� �ٸ����� ��� ����� ���


using namespace std;
//#define professional
#define LIST

int main() {
	int i;
//#ifdef professional
//	// ������ ���
//	cout << "������ ��� ���� ����" << endl;

#ifdef LIST
	list<int> lst;
	list<int>::iterator it;
#else
	// �Ϲ� ���
	cout << "�Ϲ� ��� ���� ����" << endl;
	vector<int> lst;
	vector<int>::iterator it;
#endif
	// �����ڵ� 80%
	cout << "�����ڵ�" << endl;

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

// �ڷᱸ���� �޶� ���Ǻ� �����ϰ� �Ϲ�ȭ�� ���� ȿ�������� ���� ����