#include<iostream>
using namespace std;
struct test {
	int a;
	int b;
};

class MousePoint {

	/*
	 Ŭ������ ��� ���� �� ���� ������ �����Ѵ�.
	 private ĸ��ȭ�� ������ ���� ö�п� �����Ѵ�.
	 public �������� ���� X, �ܺο����� ���� �����ϴ�.
	*/

	// ���� ����
private:
	int x;
	int y;

	// �Լ�ó�� �����Ǵ� �ڿ�
	// private�� ���ο����� ���� ����ó��, �ܺο����� ���� �Ұ�
	static int z; 

public:
	// ������ �����ε�
	MousePoint(int x, int y) {
		this->x = x;
		this->y = y;
	}
	MousePoint() {
		cout << "����Ʈ ������ ȣ��" << endl;
	}
	~MousePoint(){
		cout << "�Ҹ��� ȣ��" << endl;
	}
	// �Լ� ����
	void setXY(int x, int y) {
		this->x = x;
		this->y = y;
		//cout << "����Լ� : " << this->x << this->y << endl;
	}
	int getX() {
		return x;
	}
	int getX() { // ���� ���� ����
		return x;
	}
	int getY() {
		return y;
	}

	// const ����Լ��� const�� �������� ���� �ٸ� ����Լ��� ȣ���� �� ����.
	int gettX() const { // �б� ����
		return x;
	}
	// const ��ü�� const ����Լ��� ȣ���� �� �ִ�.
};

void setRect(MousePoint pt1, MousePoint pt2) {
	pt1.setXY(1000, 2000); // mp1 ���ȹٲ�
}

// MousuPoint& CopyObject�� ���۷����� ���� return pt1;
MousePoint CopyObject(MousePoint& pt1, MousePoint& pt2) { // ���۷��� ��� ������ �� ����

	pt1 = pt2;
	return pt1;
}

int main() {
	/*
	test test2 = { 101, 20 };
	MousePoint mp1(10, 20);
	MousePoint mp2(30, 40);

	MousePoint mp3 = CopyObject(mp1, mp2); // mp1 = pt1;

	MousePoint b2;

	cout << mp1.getX() << mp1.getY() << endl;
	*/

	//b.setXY(10, 20); // ��ü �ʱ�ȭ (��Ǿƴ�)
	/*
	�׷��� ��� �ʱ�ȭ ��? ==> Ŭ���� ���� �ʱ�ȭ �޼��带 �����Ѵ�.
	������ �����
	Ư)
	�������� �̸��� Ŭ������ �̸��� ����
	�������� Ÿ���� �������� ���� ==> void Plus() �̷����� �ƴ�
	�׷��� ����? ==> �ʱ�ȭ�ε� ��ȯ���� �� �ʿ���? �׷��� ��������

	�������� ȣ���� ��ü ���� �� �ڵ����� ȣ��. ������ ȣ�� X
	��ȯ���� �������� ����
	����Ʈ �����ڰ� ����
	*/

	/*
	�Ҹ���
	��ü�� �Ҹ��� �� �ڵ� ȣ��Ǵ� �Ҹ��ڰ� �����Ѵ�.

	Ư )
	Ŭ������ �̸��� �״�� ��� �� �տ� ƿƮ(~) ��ȣ ǥ��
	Ÿ�� ���� X
	�ڵ� ȣ�� ������ ȣ�� ����
	��ȯ�� ���� X
	�������� ���� X
	�����ڿ� �ٸ��� �����ε� �ȵ�
	*/

	/*
	cout << "x��ǥ : " << b.getX() << endl; // ĸ��ȭ
	cout << "y��ǥ : " << b.getY() << endl; // ĸ��ȭ
	*/

	// ��ü �迭
	// ��ü�� �Ӽ��� �Ϲ� ������ �Ӽ��� �����ϴ�. �׷��� �迭�� ����
	// ��������� ���� ���� �޼���� ����
	/*MousePoint pt[3];
	pt[0].setXY(100, 200);*/
	/*
	MousePoint pt[3] = { MousePoint(2,3), MousePoint(100,200), MousePoint(400,500) };
	int size = sizeof(pt) / sizeof(pt[0]);
	for (int i = 0; i < size; i++) {
		cout << "x��ǥ : " << pt[i].getX() << endl; // ĸ��ȭ
		cout << "y��ǥ : " << pt[i].getY() << endl; // ĸ��ȭ

	}
	*/

	/*
	// �ּ� �ֱ�� ������ �����͸� ����Ҷ� ��������
	int* p;
	p = &pt;
	*/

	/*
	// ��ü ������
	MousePoint* pObj; // ��ü �ƴ�
	MousePoint pO(10, 20); // �길 ��ü��
	pObj = &pO;
	cout << pObj->getX() << endl;
	cout << pObj->getY() << endl;
	*/
		
		
	// ���� �ޤ��𸮸� �����ϰ��ִ°� �����Ҷ� ���� ���� ����

	
	// ������ ���� �޸� ���� , staic
	// ���� ��, ���� ��

	return 0;

}

// TDD ����� �����׽�Ʈ�� ���� // �۰� �۰�