#include<iostream>

using namespace std;

//class MyString2
//{
//    char* pbuf;
//    int len;
//public:
//    MyString2(char ch, int nSize){
//        len;
//    }
//};

class MyString
{
private:
    char* pbuf;
    int len;
public:
    MyString() {}
    MyString(char ch, int nSize) {
        len = nSize;
        pbuf = new char[len + 1];
        memset(pbuf, ch, len);
        pbuf[len] = '\0';
    }
    // 0314 ���� �߰�
    MyString(const MyString& s) {
        
        // ���� �ִ��� ��� delete��� ��
        // ���� ���� 
        this->len = s.len;
        // ���̸� ���ۿ� �ٽ��Ҵ�
        this->pbuf = new char[this->len + 1];
        // ������ ���� 
        strcpy_s(this->pbuf, len + 1, s.pbuf);
        //pbuf[len] = '\0';
    }

    void getData()
    {
        cout << this->pbuf << endl;
        cout << this->len << endl;
    }

    ~MyString() {
        delete[] pbuf;
    }

    void operator=(const MyString& m)
    {
        if (this == &m) {
            return;
        }
        // �ش��ϴ� operator�� ���۸� ����
        delete[] this->pbuf;
        // ���� ���� 
        this->len = m.len;
        // ���̸� ���ۿ� �ٽ��Ҵ�
        this->pbuf = new char[this->len + 1];
        // ������ ���� 
        strcpy_s(this->pbuf, len + 1, m.pbuf);
        //pbuf[len] = '\0';
    }
};

void main()
{

    MyString str1('A', 3);
    //MyString str2('B', 5);
    MyString str2(str1);

    //str2.getData();

    //str2.operator=(str1);

    //str2.getData();


    ////str1 = str2;

    //str2.operator=(str1);

    //str1 = str2;

    //MyString2 str();s

    //StringCopy(str1, str2);
}