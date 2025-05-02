// 어떤 버킷에 넣어줄건지 결정하는 것 => 해시함수

#include<stdio.h>
#include<string.h> // memset

#define BK 10 // 버킷
#define SL 1 // 슬롯

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
		printf("%d번째 키를 입력하세요 : ", i + 1);
		scanf_s("%d", &key);
		InsertValue(key);
	}

	printf("값을 입력하세요 : ");
	scanf_s("%d", &key);

	if (FindValue(key)) {
		printf("검색");
	} else {
		printf("검색X");
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
		printf("버킷에 공간이 없음");
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
		printf("%d번째 키를 입력하세요 : ", i + 1);
		scanf_s("%d", &key);
		InsertValue(key, next);
	}

	printf("값을 입력하세요 : ");
	scanf_s("%d", &key);

	if (FindValue(key, next)) {
		printf("검색");
	}
	else {
		printf("검색X");
	}

	for (int i = 0; i < BK; i++)
	{
		printf("%d\n", hashTable[i][0]);
	}
}