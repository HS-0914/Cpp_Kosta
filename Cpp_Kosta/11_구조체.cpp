/*
�ϳ� �̻��� ���� �ٸ� ������ �������� ��� "���ο� �ڷ���"���� 
������ �� �ִ� ����ü
�������� ��(������ ����)�� �������� ����ü�� �����ϴ�.
���� ����� => ���������� ���� => �߻����� ������Ÿ��
*/

#include <stdio.h>

/*
- struct Ű����� ����ü��� �ڷ����� �ǹ�
- student�� ����ü�� �̸�
- name, age, height�� ����ü�� ���
*/
struct Student {
	char name[10];
	int age;
	double height;
} std1[3] = {
	{"shs", 25, 170.5},
	{"shs", 25, 170.5},
	{"shs", 25, 170.7},
}, * pSt;

int main() {
	/*
	Student std1; // ����ü ����
	std.age = 20;
	std1.age = 30;
	*/ 
	//pSt = &std;
	//strcpy_s(pSt->name, "shs");

	//Student a = { "shs", 25, 170.5 };
	pSt = std1;

	int size = sizeof(std1) / sizeof(std1[0]);
	for (int i = 0; i < size; i++) {
		printf("�̸�: %s, ����: %d, Ű: %.1lf\n", std1[i].name, std1[i].age, std1[i].height);
	}
	for (int i = 0; i < size; i++) {
		printf("�̸�: %s, ����: %d, Ű: %.1lf\n", pSt[i].name, pSt[i].age, pSt[i].height);
		printf("�̸�: %s, ����: %d, Ű: %.1lf\n", (pSt + i)->name, (pSt + i)->age, (pSt + i)->height);
	}


	return 0;
}
/*
����ü(Union)�� ����� ���� �ڷ����̴�.
����ü�� �������� ������� �޸𸮸� �����Ѵ�.
*/