#include<iostream>
#include<vector>

using namespace std;

int main() {

	int num = 0;
	cin >> num;
	vector<int> arr;

	for (int i = 0; i < num; i++)
	{
		//arr[i] = (i + 1) * 10;
		arr.push_back((i + 1) * 10);
		cout << arr[i] << endl;

	}
	vector<int>::iterator it;

	for (it = arr.begin(); it != arr.end(); it++) {
		cout << *it << endl;
	}

	return 0;
}