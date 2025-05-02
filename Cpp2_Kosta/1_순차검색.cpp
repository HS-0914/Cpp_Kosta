#include<iostream>	
using namespace std;

int main() {

	int arr[] = { 23,47,19,63,57,26,75,73,82,89,47,11 };
	int key = 75;
	int answer = 0;
	int size = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < size; i++) {
		if (arr[i] == key) {
			answer = i;
			break;
		}
	}
	if (answer) {
		cout << "찾는 값은 " << answer << "번째에 있습니다." << endl;
	}
	else {
		cout << "값을 찾을 수 없다" << endl;
	}
	return 0;
}