/*
void* memmove(void* dest, const void* src, size_t num);
 - dest : 복사한 것을 붙여넣을 메모리를 가리키는 포인터
 - src : 복사할 메모리를 가리키는 포인터
 - num : 복사할 바이트 길이
*/



#include<stdio.h>
#include<memory>

int* ar;
int size;
int num;
int growby;

void InitArray(int asize, int agrowby) {
	size = asize;
	growby = agrowby;
	num = 0;
	ar = (int*)malloc(size * sizeof(int));
}

void Insert(int index, int value) {
	//int need = num + 1;
	//if (need > size) {
	//	size = need + growby;
	//	ar = (int*)realloc(ar, size * sizeof(int));
	//}
	memmove(ar + index + 1, ar + index, sizeof(int)*(num-index));
	ar[index] = value;
	num++;
}

void DumpArray() {
	for (int i = 0; i < num; i++) {
		printf("%d ", ar[i]);
	}
	printf("\n");
}


// 동적 할당
int main() {

	// 1. 메모리 할당
	// growby => 늘릴때 얼마나 늘어나는 단위 설정
	InitArray(10, 5);
	for (int i = 0; i <= 8; i++)
	{
		Insert(num, i);
	}
	DumpArray();
	Insert(3, 10);
	DumpArray();
	Insert(3, 11);
	DumpArray();
	Insert(3, 12);
	DumpArray();
	Insert(3, 13);
	DumpArray();
	// 2. 데이터 초기화
	 
	// 3. 데이터 추가
	// 4. 자동 재할당
}

/*
정적 할당
char arr[16] = "abcdef";

void Insert(int idx, char ch) {
	memmove(arr + idx + 1, arr + idx, strlen(arr) - idx + 1);
	arr[idx] = ch;
}

void Delete(int idx) {
	memmove(arr + idx, arr + idx + 1, strlen(arr) - idx);
}

int main() {
	printf("최초 : %s\n", arr);
	Insert(3, 't');
	printf("삽입후 : %s\n", arr);
	Delete(1);
	printf("삭제후 : %s\n", arr);

	return 0;
}
*/
