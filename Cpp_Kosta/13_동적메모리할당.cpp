#include<stdio.h>
#include <malloc.h>

int main() {
	int* student;
	int num = 5;
	/*
	printf("�л����Է� : ");
	scanf_s("%d", &num);// ��Ÿ��
	*/

	// malloc(num * sizeof(int)) �� ������ void* �̱� ������ int* �� ĳ���� ����� �Ѵ�.
	student = (int*)malloc(num * sizeof(int));// �޸� �Ҵ�

	if (student == NULL) {
		printf("�޸𸮰� �����մϴ�.\n");
		return 0;
	}

	//�޸� ���
	for (int i = 0; i < num; i++) {
		/*
		printf("%d��° �л� ���� �Է� : ", i + 1);
		scanf_s("%d", student + i);// ��Ÿ��
		*/
		student[i] = i + 1;
	}

	int* restudent;
	restudent = (int*)realloc(student, sizeof(int) * 10);// �޸� ���Ҵ�
	for (int i = 5; i < 10; i++) {
		restudent[i] = i + 1;
	}

	for (int i = 0; i < 10; i++) {
		printf("%d\n", restudent[i]);
	}

	/*
	int total = 0;
	for (int i = 0; i < num; i++) {
		total += student[i];
		//printf("%d��° �л� ���� : %d\n", i + 1, student[i]);
	}
	printf("���� : %d, ��� : %d\n", total, total / num);
	*/

	// realloc �Լ��� ����ϸ� ���� �޸��� �ּҰ��� ��ȯ�ϰ�, ���ο� �޸𸮸� �Ҵ��Ѵ�.
	// �˾Ƽ� free ����
	free(restudent);// �޸� ����
}

// �޸� �Ҵ��� �Ǹ� �޸��� �ּҰ��� ����
// ���� �� NULL ����
// �������� void* �ε�, Ÿ���� �����Ǿ� ���� �ʴ� �����͸� ����
// (�ڵ��� �޸� ũ�⸸ŭ �Ҵ� ����, �޸𸮴� ���ϴ� ���·� ���ؼ� ����

// void* realloc(void* ptr, size_t size);

/*
�ڵ� ��� ������ �������� �ϳ��� ���Ͽ��� �����ϱ� ���������.
������ ������ ���� �ϴ� ������ ȿ������ �ش�ȭ ��Ű�� �����̴�.
*/