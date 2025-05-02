/*
void* memmove(void* dest, const void* src, size_t num);
 - dest : ������ ���� �ٿ����� �޸𸮸� ����Ű�� ������
 - src : ������ �޸𸮸� ����Ű�� ������
 - num : ������ ����Ʈ ����
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


// ���� �Ҵ�
int main() {

	// 1. �޸� �Ҵ�
	// growby => �ø��� �󸶳� �þ�� ���� ����
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
	// 2. ������ �ʱ�ȭ
	 
	// 3. ������ �߰�
	// 4. �ڵ� ���Ҵ�
}

/*
���� �Ҵ�
char arr[16] = "abcdef";

void Insert(int idx, char ch) {
	memmove(arr + idx + 1, arr + idx, strlen(arr) - idx + 1);
	arr[idx] = ch;
}

void Delete(int idx) {
	memmove(arr + idx, arr + idx + 1, strlen(arr) - idx);
}

int main() {
	printf("���� : %s\n", arr);
	Insert(3, 't');
	printf("������ : %s\n", arr);
	Delete(1);
	printf("������ : %s\n", arr);

	return 0;
}
*/
