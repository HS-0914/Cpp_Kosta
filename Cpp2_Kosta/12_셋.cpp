/*
set: ������ Ÿ���� �����͸� ��Ƴ��� ���̴�.
�����ʹ� ���ĵ� ��ġ�� ���ԵǹǷ� �˻� �ӵ��� ������,
Ű�� �ߺ����� �ʴ´�. + ������������ ���ĵ� ����
set<T> st;
�Ϲ� �����̳ʿ� ��� ���´� �����ϴ�.
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