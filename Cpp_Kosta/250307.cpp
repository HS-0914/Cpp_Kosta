#include<iostream>
using namespace std;

class Phone {
private:
    char number[11];
    char shape[10];
    const char* sms;
public:
    Phone(const char* sms) {
        this->sms = sms;
    }
    void Send(const char* sms) {
        this->sms = sms;
    }
    const char* Receive() {
        return this->sms;
    }
    void Call(char number[11]) {
        //
    }
};

class MousePoint {
private:
    int x;
    int y;
public:
    MousePoint(int x, int y) {
        this->x = x;
        this->y = y;
    }
    void printXY() {
        cout << "X : " << x << " Y : " << y << endl;
    }
};

/*
template <class T>
class MousePoint {
private:
    T x;
    T y;
public:
    MousePoint(T x, T y) {
        this->x = x;
        this->y = y;
    }
    T getX() {
        return x;
    }

    T getY() {
        return y;
    }
    ~MousePoint() {}
};
*/

int main() {

    /*
    Phone ph;
    ph.Send(30);
    cout << ph.Receive() << endl;
    */

    Phone* pObj;
    Phone ph("분리수거를 잘하자.");
    pObj = &ph;
    cout << pObj->Receive() << endl;

    MousePoint* pM = new MousePoint(200, 100);
    pM->printXY();
    
    /*
    MousePoint<int> tmp(10, 20);
    cout << tmp.getX() << " : " << tmp.getY() << endl;
    */


    return 0;
}