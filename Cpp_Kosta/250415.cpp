// �������׳׽��� ü
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

	// �Է� ��
	int input;
	cout << "�Է� �� : ";
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
// ������ť
/*
#include <iostream>
#include <queue>
#include <random>
#include <thread>

using namespace std;

queue<int> q;
int qSize;
// �õ尪�� ��� ���� random_device ����.
random_device rd;

// random_device �� ���� ���� ���� ������ �ʱ�ȭ �Ѵ�.
mt19937 gen(rd());

// 0 ���� 99 ���� �յ��ϰ� ��Ÿ���� �������� �����ϱ� ���� �յ� ���� ����.
uniform_int_distribution<int> dist(2, 10);

void InitQueue(int size);
bool Insert(int data);
int Delete();
void PrintQueue();
void InsertRandomPage();
void PrintPage();

void InitQueue(int size) {
	qSize = size;
	cout << "�μ� ��� ��..." << endl;
}

bool Insert(int data) {
	if (qSize <= q.size()) return false;
	q.push(data);
	cout << data << "������¥�� �� ���� ����" << endl;
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
	cout << "������� ���� �� : " << q.size() << endl;
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
			cout << currentPage << "������¥�� ���� �μ�" << endl;
			while (currentPage > 0) {
				cout << currentPage-- << "������ �μ� ��..." << endl;
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
// �ڵ��� ���ڽ� �����ϱ�
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
	cout << "���� �ܿ� ��ȭ�ð� : " << timeLeft << "��" << endl;
}

void SetTimeLeft() {
	int setTimeLeft = timeLeft;
	PrintTimeLeft();
	cout << "��ȭ �ð� �Է� (�ʴ���) -> ";
	cin >> setTimeLeft;
	timeLeft = setTimeLeft;
}

void ExitBlackBox() {
	record.close();
	exit(0);
}

void PrintMenu() {
	cout << "===== BlackBox Simulator =====" << endl;
	cout << "1. ��ȭ ON/OFF   [[ ���� ���� : " << status << " ]]" << endl;
	cout << "2. �ܿ� ��ȭ �ð� Ȯ��" << endl;
	cout << "3. ��ȭ �ð� ����" << endl;
	cout << "4. ���α׷� ����" << endl;
	cout << "��� ���� => ";
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
		cout << "1~4 ������ ����� �����ϼ���" << endl;
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