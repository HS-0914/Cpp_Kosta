// 에라스토테네스의 체
/*
#include <iostream>
#include <set>
#include <cmath>
using namespace std;

void sieve(int input) {
	set<int> scon;
	set<int>::iterator it;
	int root = sqrt(input);
	for (int i = 2; i <= input; i++)
	{
		scon.insert(i);
	}

	for (int i = 2; i <= root; i++)
	{	
		int max = input / i;
		for (int j = 2; j <= max; j++)
		{
			scon.erase(i * j);
		}
	}

	for (it = scon.begin(); it != scon.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

int main() {

	// 입력 값
	int input;
	cout << "입력 값 : ";
	cin >> input;

	sieve(input);

	return 0;
}
*/


/*
################################################################################################################################################
################################################################################################################################################
################################################################################################################################################
################################################################################################################################################
################################################################################################################################################
*/
// 프린터큐
/*
#include <iostream>
#include <queue>
#include <random>
#include <thread>

using namespace std;

queue<int> q;
int qSize;
// 시드값을 얻기 위한 random_device 생성.
random_device rd;

// random_device 를 통해 난수 생성 엔진을 초기화 한다.
mt19937 gen(rd());

// 0 부터 99 까지 균등하게 나타나는 난수열을 생성하기 위해 균등 분포 정의.
uniform_int_distribution<int> dist(2, 10);

void InitQueue(int size);
bool Insert(int data);
int Delete();
void PrintQueue();
void InsertRandomPage();
void PrintPage();

void InitQueue(int size) {
	qSize = size;
	cout << "인쇄 대기 중..." << endl;
}

bool Insert(int data) {
	if (qSize <= q.size()) return false;
	q.push(data);
	cout << data << "페이지짜리 새 문서 삽입" << endl;
	return true;
}
int Delete() {
	if (q.empty()) return -1;
	int front = q.front();
	q.pop();
	PrintQueue();
	return front;
}

void PrintQueue() {
	cout << "대기중인 문서 수 : " << q.size() << endl;
}

void InsertRandomPage() {
	while (true) {
		int r = dist(gen);
		if (Insert(r)) PrintQueue();
		this_thread::sleep_for(chrono::seconds(5));
	}
}

void PrintPage() {
	while (true) {
		if (!q.empty()) {
			int currentPage = q.front();
			Delete();
			cout << currentPage << "페이지짜리 문서 인쇄" << endl;
			while (currentPage > 0) {
				cout << currentPage-- << "페이지 인쇄 중..." << endl;
				this_thread::sleep_for(chrono::seconds(1));
			}
		}
		else {
				this_thread::sleep_for(chrono::seconds(1));
		}
	}
}

int main() {


	int size;
	cin >> size;
	InitQueue(size);

	thread t1(InsertRandomPage);
	thread t2(PrintPage);
	t1.join();
	t2.join();

	return 0;
}
*/

/*
################################################################################################################################################
################################################################################################################################################
################################################################################################################################################
################################################################################################################################################
################################################################################################################################################
*/
// 자동차 블랙박스 구현하기
#include <iostream>
#include <string>
#include <thread>
#include <fstream>

using namespace std;

const int DEFAULT_TIME = 60;
string status = "OFF";
int funcSelect = 0;
int timeLeft = 0;
ofstream record("data.rec", ios::app);

void Rec() {
	while (true) {
		if (timeLeft && status == "ON") {
			record << "Recoding...>" << --timeLeft << "\n" << flush;
		}
		this_thread::sleep_for(chrono::seconds(1));
	}
}

void RecOn_Off() {
	if (status == "OFF") {
		if (!timeLeft) timeLeft = DEFAULT_TIME;
		status = "ON";
	}
	else {
		status = "OFF";
	}
}

void PrintTimeLeft() {
	cout << "현재 잔여 녹화시간 : " << timeLeft << "초" << endl;
}

void SetTimeLeft() {
	int setTimeLeft = timeLeft;
	PrintTimeLeft();
	cout << "녹화 시간 입력 (초단위) -> ";
	cin >> setTimeLeft;
	timeLeft = setTimeLeft;
}

void ExitBlackBox() {
	record.close();
	exit(0);
}

void PrintMenu() {
	cout << "===== BlackBox Simulator =====" << endl;
	cout << "1. 녹화 ON/OFF   [[ 현재 상태 : " << status << " ]]" << endl;
	cout << "2. 잔여 녹화 시간 확인" << endl;
	cout << "3. 녹화 시간 설정" << endl;
	cout << "4. 프로그램 종료" << endl;
	cout << "기능 선택 => ";
	cin >> funcSelect;
	cout << endl;
	switch (funcSelect)
	{
	case 1:
		RecOn_Off();
		break;
	case 2:
		PrintTimeLeft();
		break;
	case 3:
		SetTimeLeft();
		break;
	case 4:
		ExitBlackBox();
		break;
	default:
		cout << "1~4 사이의 기능을 선택하세요" << endl;
		break;
	}
}

int main() {
	thread t1(Rec);
	t1.detach();
	while (true) {
		PrintMenu();
	}
	return 0;
}