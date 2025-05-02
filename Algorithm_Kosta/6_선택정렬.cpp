#include <stdio.h>
#include <string.h>

void swap(char* x, char* y) {
	char temp = *x;
	*x = *y;
	*y = temp;
}

void SelectionSort(char* str) {
	int minidx = 0;

	int len = strlen(str);

	for (int i = 0; i < len - 1; i++)
	{
		printf("%d단계 : %s \n", i + 1, str);
		minidx = i;
		for (int j = 1 + i; j < len; j++)
		{
			if (str[minidx] > str[j]) {
				minidx = j;
			}
		}
		if (minidx != i) {
			swap(&str[minidx], &str[i]);
		}
	}
}

int main() {
	char str[] = "winapi";


	printf("정렬 전 문자열 : %s \n", str);

	SelectionSort(str);

	printf("정렬 후 문자열 : %s \n", str);

	return 0;
}