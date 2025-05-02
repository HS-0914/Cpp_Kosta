#include<stdio.h>
#include<string.h>

/*
void swap(char* x, char* y) {
	char temp = *x;
	*x = *y;
	*y = temp;
}

void BubbleSort(char* str) {
	int len = strlen(str);

	for (int i = 0; i < len - 1; i++)
	{
		printf("%d단계 : %s \n", i + 1, str);
		for (int j = 1; j < len - i; j++)
		{
			if (str[j - 1] > str[j]) {
				swap(&str[j - 1], &str[j]);
			}
			printf("%d단계 %d번째: %s \n", i + 1, j, str);
		}
	}
}

int main() {
	char* str[] = "winapi";


	printf("정렬 전 문자열 : %s \n", str);

	BubbleSort(str);

	printf("정렬 후 문자열 : %s \n", str);

	return 0;
}
*/

void printArr(int *arr, int len) {
	for (int i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void swap(int* x, int* y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}

void BubbleSort(int* height, int len) {

	for (int i = 0; i < len - 1; i++)
	{
		printf("%d단계 : ", i + 1);
		printArr(height, len);
		for (int j = 1; j < len - i; j++)
		{
			if (height[j - 1] > height[j]) {
				swap(&height[j - 1], &height[j]);
			}
			printf("%d단계 %d번째: ", i + 1, j);
			printArr(height, len);
		}
	}
}

int main() {
	int height[] = { 143,134,137,132,140,134 };
	int len = sizeof(height) / sizeof(height[0]);


	printf("정렬 전 배열 : ");
	printArr(height, len);

	BubbleSort(height, len);

	printf("정렬 후 배열 : ");
	printArr(height, len);

	return 0;
}