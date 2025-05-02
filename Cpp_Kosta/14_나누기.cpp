#include<stdio.h>
// dll : 동적 연결 라이브러리
//extern int Plus(int a, int b);


int main() {
	//int result = Plus(10, 20);
	//printf("두 수의 합 : %d", result);
#if RELEASE
	printf("Debug\n");
#else
	printf("Release\n");
#endif
	// 

	printf("현재 날짜는 %s입니다.\n", __DATE__);
	printf("현재 시간은 %s입니다.\n", __TIME__);
	printf("소스 파일은 %s입니다.\n", __FILE__);
	printf("현재 라인은 %d입니다.\n", __LINE__);


	return 0;
}

