#include<stdio.h>

int BinarySearch(int* pArr, int nSize, int nKey) {
	unsigned int lower = 0;
	unsigned int upper = nSize - 1;

	unsigned int mid = 0;


	for (;;) {
		mid = (lower + upper) / 2;

		if (lower > upper) {
			printf("찾을 수 없습니다.");
		}

		if (pArr[mid] == nKey) {
			printf("%d 번째 있습니다.", mid + 1);
			break;
		}

		if (pArr[mid] > nKey) {
			upper = mid - 1;
		}
		else {
			lower = mid + 1;
		}

	}
}

int main() {
	int arr[] = { 2,6,13,19,21,21,23,29,35,48,62,89,90,95,99,102,109,208,629 };
	// unsigned => 무조건 양수만
	// signed =>둘다 ㄱㄴ 평소에 쓰는게 이거
	unsigned int size = sizeof(arr)/sizeof(arr[0]);
	int key = 29;

	BinarySearch(arr, size, key);


	return 0;
}