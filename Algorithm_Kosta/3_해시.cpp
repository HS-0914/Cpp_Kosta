// � ��Ŷ�� �־��ٰ��� �����ϴ� �� => �ؽ��Լ�

#include<stdio.h>
#include<string.h> // memset

#define BK 10 // ��Ŷ
#define SL 1 // ����

/*
// 1
int hashTable[BK][SL];

int Hash(int key) {
	return key % 10;

}

void InsertValue(int key) {
	int bucket = Hash(key);
	if (!hashTable[bucket][0]) {
		hashTable[bucket][0] = key;
	}
}

int FindValue(int key) {
	int bucket = Hash(key);
	return (hashTable[bucket][0] == key);
}

int main() {
	int key = 0;
	memset(hashTable, 0, sizeof(hashTable));

	for (int i = 0; i < 5; i++)
	{
		printf("%d��° Ű�� �Է��ϼ��� : ", i + 1);
		scanf_s("%d", &key);
		InsertValue(key);
	}

	printf("���� �Է��ϼ��� : ");
	scanf_s("%d", &key);

	if (FindValue(key)) {
		printf("�˻�");
	} else {
		printf("�˻�X");
	}
}
*/

// 2
int hashTable[BK][SL];

int Hash(int key) {
	return key % 10;

}

void InsertValue(int key, int next) {
	if (next > 9) {
		printf("��Ŷ�� ������ ����");
		return;
	}
	int bucket = Hash(key+next);
	if (!hashTable[bucket][0]) {
		hashTable[bucket][0] = key;
	}
	else {
		InsertValue(key, ++next);
	}
}

int FindValue(int key, int next) {
	if (next > 9) {
		return 0;
	}
	int bucket = Hash(key+next);
	if (hashTable[bucket][0] == key) {
		return 1;
	}
	else {
		return FindValue(key, ++next);
	}
	//return (hashTable[bucket][0] == key) || FindValue(key, ++next);
}

int main() {
	int key = 0;
	int next = 0;
	memset(hashTable, 0, sizeof(hashTable));

	for (int i = 0; i < 5; i++)
	{
		printf("%d��° Ű�� �Է��ϼ��� : ", i + 1);
		scanf_s("%d", &key);
		InsertValue(key, next);
	}

	printf("���� �Է��ϼ��� : ");
	scanf_s("%d", &key);

	if (FindValue(key, next)) {
		printf("�˻�");
	}
	else {
		printf("�˻�X");
	}

	for (int i = 0; i < BK; i++)
	{
		printf("%d\n", hashTable[i][0]);
	}
}