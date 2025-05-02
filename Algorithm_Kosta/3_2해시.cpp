#include<stdio.h>
#include<string.h>

#define BK 10
#define SL 1

int hashtable[BK][SL];

int Hash(int nKey) {
    return nKey % 10;
}

void InsertValue(int nKey) {
    int bucket = Hash(nKey);

    while (hashtable[bucket][0] != 0)
    {
        bucket = bucket + 1;
    }
    hashtable[bucket][0] = nKey;
}

int FindValue(int nKey)
{
    int bucket = Hash(nKey);

    while (hashtable[bucket][0] != 0)
    {
        if (hashtable[bucket][0] == nKey) {
            return 1;
        }
        bucket = bucket + 1;
    }
    return 0;
}

void main()
{
    int key = 0;
    memset(hashtable, 0, sizeof(hashtable)); //�ʱ�ȭ

    for (int i = 0; i < 5; i++) {
        printf("%d��° ���� �Է��ϼ��� : ", i + 1);
        scanf_s("%d", &key);
        InsertValue(key);
    }

    printf("�˻��� Ű�� �Է��ϼ��� : ");
    scanf_s("%d", &key);

    if (FindValue(key)) {
        printf("�˻��Ǿ����ϴ�.");
    }
    else {
        printf("�˻����� �ʾҽ��ϴ�.");
    }
}

/*
�����迭

�迭�� ����
�迭�� ũ�Ⱑ Ŀ������ �˻� �ӵ��� �����ϴ�.
�޸� ������ ���ӵǰ� ��ġ =>�߰��� ��Ҹ� �����ϰų� ��Ҹ� �ٲܤ�|��0

*/