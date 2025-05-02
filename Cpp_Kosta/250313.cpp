#include<iostream>
using namespace std;

class Person {
private:
    const char* name;
    int age;
public:
    Person(const char* name, int age) {
        this->name = name;
        this->age = age;
    }

    const char* getName() {
        return this->name;
    }
    
    int getAge() {
        return this->age;
    }
};

class Counter {
private:
    static int count;
public:
    Counter() {
        cout << "생성된 객체 수 : " << ++count << endl;
    }
    ~Counter() {
        cout << "소멸되고 남은 객체 수 : " <<--count << endl;
    }
    static int getCount() {
        return count;
    }
    static void Increase() {
        count++;
    }
};

int Counter::count = 0;

class Shape {
protected:
    int x;
    int y;
public:
    Shape(){
        cout << "Shape 생성자 호출" << endl;
    }
    Shape(int x, int y) {
        this->x = x;
        this->y = y;
    }
    ~Shape() {
        cout << "Shape 소멸자 호출" << endl;
    }
    virtual void Draw() = 0;
};

class Rectangle :Shape {
private:
    int width;
    int height;
public:
    Rectangle() {
        cout << "Rectangle 생성자 호출" << endl;
    }
    Rectangle(int x, int y, int width, int height): Shape(x,y) {
        this->width = width;
        this->height = height;
    }
    ~Rectangle() {
        cout << "Rectangle 소멸자 호출" << endl;
    }
    void Draw() {
        printf("x : %d, y : %d, w : %d, h : %d\n", x, y, width, height);
    }
};

class Circle :Shape {
private:
    int r;
public:
    Circle() {
        cout << "Shape 생성자 호출" << endl;
    }
    Circle(int x, int y, int r) {
        this->r = r;
    }
    void Draw() {
        printf("x : %d, y : %d, r : %d\n", x, y, r);
    }
};

class MyString {
private:
    char* pbuf;
    int size;
public:
    MyString() {}
    MyString(char pbuf, int size) {
        this->size = size;
        this->pbuf = new char[size + 1];
        memset(this->pbuf, pbuf, size);
        this->pbuf[size] = '\0';

    }
    ~MyString() {
        delete pbuf;
    }
    void operator=(const MyString& m)
    {
        if (this == &m) {
            return;
        }
        // 해당하는 operator의 버퍼를 삭제
        delete[] this->pbuf;
        // 길이 복사 
        this->size = m.size;
        // 길이를 버퍼에 다시할당
        this->pbuf = new char[this->size + 1];
        // 데이터 복사 
        strcpy_s(this->pbuf, size + 1, m.pbuf);
    }
    void Print() {
        cout << pbuf << " : " << size << endl;
    }
};

class Square: Rectangle {
public:
    Square() {
        cout << "Square 생성자 호출" << endl;
    }
    Square(int x, int y, int width, int height): Rectangle(x,y,width,height) {
        cout << "Square 생성자 호출" << endl;
    }
    ~Square() {
        cout << "Square 소멸자 호출" << endl;
    }
    void Draw() {
        cout << "Square의 Draw" << endl;
    }
};

int main() {
    /*
    // 1-2
    Person* p[3];
    int size = sizeof(p) / sizeof(p[0]);

    p[0] = new Person("lee", 10);
    p[1] = new Person("kim", 20);
    p[2] = new Person("park", 30);

    for (int i = 0; i < size; i++)
    {
        cout << p[i]->getName() << " : " << p[i]->getAge() << endl;
    }

    for (int i = 0; i < size; i++)
    {
        delete p[i];
    }
    */

    // 3
    /*
    Counter::Increase();
    cout << Counter::getCount() << endl;
    */

    /*
    // 4
    Counter a1;
    Counter a2;
    Counter a3;
    Counter a4;
    */

    // 5
    //Shape r(5, 3);

    // 6
    /*
    MyString str1('A', 4);
    MyString str2('V', 10);
    str1 = str2;
    str1.Print();
    */

    // 7
    //Square a;
    //Square

    // 8
    Square a(5, 2, 10, 20);
    Shape* b = (Shape*) & a;
    b->Draw();

    return 0;
}