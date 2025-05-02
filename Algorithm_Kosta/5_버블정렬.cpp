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
		printf("%d�ܰ� : %s \n", i + 1, str);
		for (int j = 1; j < len - i; j++)
		{
			if (str[j - 1] > str[j]) {
				swap(&str[j - 1], &str[j]);
			}
			printf("%d�ܰ� %d��°: %s \n", i + 1, j, str);
		}
	}
}

int main() {
	char* str[] = "winapi";


	printf("���� �� ���ڿ� : %s \n", str);

	BubbleSort(str);

	printf("���� �� ���ڿ� : %s \n", str);

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
		printf("%d�ܰ� : ", i + 1);
		printArr(height, len);
		for (int j = 1; j < len - i; j++)
		{
			if (height[j - 1] > height[j]) {
				swap(&height[j - 1], &height[j]);
			}
			printf("%d�ܰ� %d��°: ", i + 1, j);
			printArr(height, len);
		}
	}
}

int main() {
	int height[] = { 143,134,137,132,140,134 };
	int len = sizeof(height) / sizeof(height[0]);


	printf("���� �� �迭 : ");
	printArr(height, len);

	BubbleSort(height, len);

	printf("���� �� �迭 : ");
	printArr(height, len);

	return 0;
}