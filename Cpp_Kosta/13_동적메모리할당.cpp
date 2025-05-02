#include<stdio.h>
#include <malloc.h>

int main() {
	int* student;
	int num = 5;
	/*
	printf("학생수입력 : ");
	scanf_s("%d", &num);// 런타임
	*/

	// malloc(num * sizeof(int)) 는 리턴이 void* 이기 때문에 int* 로 캐스팅 해줘야 한다.
	student = (int*)malloc(num * sizeof(int));// 메모리 할당

	if (student == NULL) {
		printf("메모리가 부족합니다.\n");
		return 0;
	}

	//메모리 사용
	for (int i = 0; i < num; i++) {
		/*
		printf("%d번째 학생 성적 입력 : ", i + 1);
		scanf_s("%d", student + i);// 런타임
		*/
		student[i] = i + 1;
	}

	int* restudent;
	restudent = (int*)realloc(student, sizeof(int) * 10);// 메모리 재할당
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
		//printf("%d번째 학생 성적 : %d\n", i + 1, student[i]);
	}
	printf("총점 : %d, 평균 : %d\n", total, total / num);
	*/

	// realloc 함수를 사용하면 기존 메모리의 주소값을 반환하고, 새로운 메모리를 할당한다.
	// 알아서 free 해줌
	free(restudent);// 메모리 해제
}

// 메모리 할당이 되면 메모리의 주소값을 리턴
// 부족 시 NULL 리턴
// 리턴형이 void* 인데, 타입이 지정되어 있지 않는 포인터를 리턴
// (코딩한 메모리 크기만큼 할당 해줌, 메모리는 원하는 형태로 정해서 쓰셈

// void* realloc(void* ptr, size_t size);

/*
코드 양과 라인이 많아지면 하나의 파일에서 관리하기 힘들어진다.
파일음 나누어 관리 하는 이유는 효율성을 극대화 시키기 위함이다.
*/