#include<iostream>
#include<vector>

using namespace std;

int main() {

	int num = 0;
	cin >> num;
	vector<int> arr(num+1);

	arr[0] = 0;
	arr[1] = 1;

	if (num > 1) {
		for (int i = 2; i < num+1; i++)
		{
			arr[i] = arr[i - 1] + arr[i - 2];
		}
	}

	vector<int>::iterator it;

	for (it = arr.begin(); it != arr.end(); it++) {
		cout << *it << ", ";
	}
	cout << endl;

	return 0;
}