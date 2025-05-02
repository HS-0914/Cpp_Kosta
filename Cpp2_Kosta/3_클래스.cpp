#include<iostream>
using namespace std;
struct test {
	int a;
	int b;
};

class MousePoint {

	/*
	 클래스의 멤버 선언 시 접근 권한을 설정한다.
	 private 캡슐화와 데이터 은닉 철학에 부합한다.
	 public 데이터의 은닉 X, 외부에서도 접근 가능하다.
	*/

	// 변수 선언
private:
	int x;
	int y;

	// 함수처럼 공유되는 자원
	// private라 내부에서만 전역 변수처럼, 외부에서는 접근 불가
	static int z; 

public:
	// 생성자 오버로딩
	MousePoint(int x, int y) {
		this->x = x;
		this->y = y;
	}
	MousePoint() {
		cout << "디폴트 생성자 호출" << endl;
	}
	~MousePoint(){
		cout << "소멸자 호출" << endl;
	}
	// 함수 정의
	void setXY(int x, int y) {
		this->x = x;
		this->y = y;
		//cout << "멤버함수 : " << this->x << this->y << endl;
	}
	int getX() {
		return x;
	}
	int getX() { // 권한 쓰기 권한
		return x;
	}
	int getY() {
		return y;
	}

	// const 멤버함수는 const로 지정되지 않은 다른 멤버함수를 호출할 수 없다.
	int gettX() const { // 읽기 전용
		return x;
	}
	// const 객체는 const 멤버함수만 호출할 수 있다.
};

void setRect(MousePoint pt1, MousePoint pt2) {
	pt1.setXY(1000, 2000); // mp1 값안바뀜
}

// MousuPoint& CopyObject면 레퍼런스가 리턴 return pt1;
MousePoint CopyObject(MousePoint& pt1, MousePoint& pt2) { // 레퍼런스 방식 리턴은 값 복사

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

	//b.setXY(10, 20); // 객체 초기화 (사실아님)
	/*
	그러면 어떻게 초기화 함? ==> 클래스 전용 초기화 메서드를 제공한다.
	생성자 라고함
	특)
	생성자의 이름은 클래스의 이름과 동일
	생성자의 타입은 지정하지 않음 ==> void Plus() 이런식이 아님
	그러면 뭐임? ==> 초기화인데 반환형이 왜 필요함? 그래서 지정안함

	생성자의 호출은 객체 선언 시 자동으로 호출. 인위적 호출 X
	반환값을 지정하지 않음
	디폴트 생성자가 존재
	*/

	/*
	소멸자
	객체가 소멸할 때 자동 호출되는 소멸자가 존재한다.

	특 )
	클래스의 이름을 그대로 사용 맨 앞에 틸트(~) 기호 표기
	타입 지정 X
	자동 호출 인위적 호출 금지
	반환값 지정 X
	전달인자 지정 X
	생성자와 다르게 오버로딩 안됨
	*/

	/*
	cout << "x좌표 : " << b.getX() << endl; // 캡슐화
	cout << "y좌표 : " << b.getY() << endl; // 캡슐화
	*/

	// 객체 배열
	// 객체의 속성은 일반 변수의 속성과 동일하다. 그래서 배열도 가능
	// 멤버변수는 따로 지만 메서드는 공유
	/*MousePoint pt[3];
	pt[0].setXY(100, 200);*/
	/*
	MousePoint pt[3] = { MousePoint(2,3), MousePoint(100,200), MousePoint(400,500) };
	int size = sizeof(pt) / sizeof(pt[0]);
	for (int i = 0; i < size; i++) {
		cout << "x좌표 : " << pt[i].getX() << endl; // 캡슐화
		cout << "y좌표 : " << pt[i].getY() << endl; // 캡슐화

	}
	*/

	/*
	// 주소 넣기는 되지만 포인터를 사용할때 문제가됨
	int* p;
	p = &pt;
	*/

	/*
	// 객체 포인터
	MousePoint* pObj; // 객체 아님
	MousePoint pO(10, 20); // 얘만 객체임
	pObj = &pO;
	cout << pObj->getX() << endl;
	cout << pObj->getY() << endl;
	*/
		
		
	// 실제 메ㄹ모리를 참조하고있는것 참조할땐 간접 참조 연산

	
	// 데이텨 영역 메모리 관리 , staic
	// 지역 반, 전역 반

	return 0;

}

// TDD 기능을 단위테스트로 개발 // 작게 작게