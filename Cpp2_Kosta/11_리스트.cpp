#include<iostream>
#include<list>

using namespace std;

int main() {

	int num = 0;
	cin >> num;
	list<int> arr(num);

	for (int i = 0; i < num; i++)
	{
		//arr[i] = (i + 1) * 10;
		arr.push_back((i + 1) * 10);
		//cout << arr[i] << endl;

	}

	list<int> lst;

	lst.push_back(5);
	lst.push_back(2);
	lst.push_front(6);
	lst.push_front(1);

	list<int>::iterator it;

	for (it = arr.begin(); it != arr.end(); it++) {
		cout << *it << endl;
	}

	return 0;
}