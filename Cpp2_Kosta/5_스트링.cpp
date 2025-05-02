#include <iostream>

/*

String(char ch, int nSize) {
	len = nSize;
	pbuf = new Char[len+1];
	memset(pbuf, ch, len);
	pbuf[len]
}
void String::operator=(const String& s){
	// 1. 기존 메모리 해제
	delete[] this->pbuf;
	// 2. 메모리 사이즈를 복사
	this->len = s.len;
	// 3. 새로운 메모리 할당
	this->pbuf = new char[this->len + 1];
	// 4. 데이터 복사
	strcpy(this->pbuf, len, s.pbuf);
	//ms 권장사항
	strcpy_s(this->pbuf, len, s.pbuf);
}
void getData() {
	cout << this->pbuf << endl;
	cout << this->len << endl;
}

*/


int main() {
	String str1('A', 3);
	String str2('B', 5);

	str2.getData();

	// str2 = str1;
	str2.operator=(str1);
	str2.getData();

	return 0;
}