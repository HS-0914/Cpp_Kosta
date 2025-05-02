#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

struct Node {
	int val; // 데이터
	Node* pNext; // 링크
};

//Node* head;

Node* InsertNode(Node* Target, Node* aNode) {
	Node* New;
	New = (Node*)malloc(sizeof(Node));
	*New = *aNode;
	New->pNext = Target->pNext;
	Target->pNext = New;
	return New;
}

bool DeleteNode(Node* Target) {
	Node* Del;
	Del = Target->pNext;
	Target->pNext = Del->pNext;
	free(Del);
	return true;
}

int main() {

	// 헤드 생성
	Node* head = (Node*)malloc(sizeof(Node));
	head->pNext = NULL;

	// 노드 추가
	Node* Now, Temp;

	Now = head;
	for (int i = 1; i <= 5; i++)
	{
		Temp.val = i;
		Now = InsertNode(Now, &Temp);
	}

	for (Now = head->pNext; Now;Now=Now->pNext)
	{
		printf("%d\t", Now->val);
	}
	printf("\n");
	//삭제
	DeleteNode(head->pNext);

	for (Now = head->pNext; Now; Now = Now->pNext)
	{
		printf("%d\t", Now->val);
	}

	while (DeleteNode(head)) { ; }
	free(head);
	head = NULL;
	return 0;
}