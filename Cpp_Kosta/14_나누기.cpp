#include<stdio.h>
// dll : ���� ���� ���̺귯��
//extern int Plus(int a, int b);


int main() {
	//int result = Plus(10, 20);
	//printf("�� ���� �� : %d", result);
#if RELEASE
	printf("Debug\n");
#else
	printf("Release\n");
#endif
	// 

	printf("���� ��¥�� %s�Դϴ�.\n", __DATE__);
	printf("���� �ð��� %s�Դϴ�.\n", __TIME__);
	printf("�ҽ� ������ %s�Դϴ�.\n", __FILE__);
	printf("���� ������ %d�Դϴ�.\n", __LINE__);


	return 0;
}

