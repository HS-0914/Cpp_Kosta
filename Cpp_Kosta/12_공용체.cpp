#include<stdio.h>

union unTemp {
	char a;
	int b;
	double c;
}un;

/*
������ enumeration�� ����, enum(�̳�)
�����͵��� ������ ����
������ ������� ������ ����� ����Ѵ�.

enum �������̸� {
	���������1 = 0,
	���������2,
	...
};
// �� ���� ���� �ϳ� ������ �ڵ����� 1�� �����Ǽ� ���� �� ( 1, 2, 3, ... )
*/

enum Week {
	// ���������� �� ���� ù ��°���� 0���� ����
	sun = 1,
	mon,
	tue,
	wed,
	thu,
	fri,
	sat
};

int main() {
	/*
	printf("�ּ� : %x, ũ�� : %d\n", &un.a, sizeof(un.a));
	printf("�ּ� : %x, ũ�� : %d\n", &un.b, sizeof(un.b));
	printf("�ּ� : %x, ũ�� : %d\n", &un.c, sizeof(un.c));

	un.a = 'A';
	printf("������ a : %c\n", un.a);
	un.b = 100;
	printf("������ b : %d\n", un.b);
	un.c = 3.12;
	printf("�Ǽ��� c : %.2f\n", un.c);

	// �޸𸮸� �����ϰ� �ֱ� ������ �������� ����� ������ ��µȴ�.
	printf("������ a : %c\n", un.a);
	*/

	int day = 0;
	printf("������ �Է��ϼ��� : ");
	scanf_s("%d", &day);


	switch (day) {
	case sun:
		printf("�Ͽ��Ͽ� ¥�İ�Ƽ �丮��\n");
		break;
	case mon:
		printf("������ ����~\n");
		break;	
	case tue:
		printf("ȭ���Ͽ� ������\n");
		break;
	case wed:
		printf("�����Ͽ��� �ܹ� ���� ��\n");
		break;
	default:
		printf("�߸��� �Է��Դϴ�.\n");
		break;
	}
	printf("sun : %d\n", sun);
	return 0;
}

/*
�������� �� �Ű����� ���� ��� ���� �޸� ���(���Լ���)
�޸� �Ҵ��� ������Ÿ�ӿ� �̷������.
*/