#include<stdio.h>

int LinearSearch(int arr[], int key) {
    int size = sizeof(arr) / sizeof(arr);
    printf("%d", size);

    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i + 1;
        }
    }

    return -1;
}

int main() {

    int arr[] = { 23,47,19,63,57,26,75,73,82,89,47,11 };
    int key = 75;

    int idx = LinearSearch(arr, key);
    if (idx == -1) {
        printf("���� ã�� �� �����ϴ�.");
    }
    else {
        printf("ã�� ���� %d��°�� �ֽ��ϴ�.", idx);

    }
    

	return 0;
}