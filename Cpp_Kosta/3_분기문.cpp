#include<stdio.h>

void main() {
	/*
	int a;

	printf("������ �Է��ϼ��� : ");
	scanf_s("%d", &a);

	if (a > 5) {
		printf("a�� 5���� Ů�ϴ�.\n");
	}
	else if (a < 5) {
		printf("a�� 5���� �۽��ϴ�.\n");
	}
	else if (a == 5) {
		printf("a�� 5�� �����ϴ�.\n");
	}
	else {
		printf("a�� ���� ��ȿ���� �ʽ��ϴ�.");
	}
	*/
	/*else {
		printf("a�� 5�� �����ϴ�.");
	}*/

	// switch - case ��
	/*
	int shortcut = 0;
	printf("����Ű�� �Է��ϼ��� : ");
	scanf_s("%d", &shortcut);

	switch (shortcut) 
	{
	case 1:
		printf("�� : 010-xxxx-xxxx ��ȭ�� �Ǵ�");
		break;
	case 2:
		printf("�Ƶ� : 010-xxxx-xxxx ��ȭ�� �Ǵ�");
		break;
	case 3:
		printf("ģ�� : 010-xxxx-xxxx ��ȭ�� �Ǵ�");
		break;
	default:
		printf("�ش� ����Ű�� �����ϴ�.");
	}
	*/

	// ���� �Է��ϼ���.
	// 12-2 : �ܿ��Դϴ�.
	// 3-5 : ���Դϴ�.
	// 6-8 : �����Դϴ�.
	// 9-11 : �����Դϴ�.
	int input = 0;
	printf("���� �Է��ϼ��� : ");
	scanf_s("%d", &input);

	switch (input)
	{
	case 1:
	case 2:
	case 12:
		printf("�ܿ��Դϴ�.");
		break;
	case 3:
	case 4:
	case 5:
		printf("���Դϴ�.");
		break;
	case 6:
	case 7:
	case 8:
		printf("�����Դϴ�.");
		break;
	case 9:
	case 10:
	case 11:
		printf("�����Դϴ�.");
		break;
	default:
		printf("��ȿ��������");
	}
}