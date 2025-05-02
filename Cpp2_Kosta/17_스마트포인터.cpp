/*
�������� �Ҵ�� �޸𸮵� �ڵ����� �����ϴ� �������� ����Ŭ����
auto_ptr ���ø��� memory������Ͽ� ���� ��, ���� ��� ����
template<typename T> auto_ptr;

*/

#include<iostream>
#include<memory>

using namespace std;

int main() {

	/*
	double* rate = new double();
	*rate = 3.14;
	cout << *rate << endl;
	delete rate;
	*/
	
	/*
	int* a;
	int b;
	cout << "������ �� �Է� : ";
	cin >> b;

	// heap �޸𸮿� 4byte ���� 10�̶�� �� �߰�

	try
	{
		a = new int(10);

		if (b != 0) {
			cout << "������ ��� : " << *a / b << endl;
		}
		else {
			throw b;
		}
		delete a;
	}
	catch (const int ex)
	{
		cout << "������� �� ���� " << ex << "�̹Ƿ� ���� ���� �Ұ�" << endl;
	}
	*/

	auto_ptr<double> rate(new double);
	// *�� ���� ������ ���۷����� �Ǿ�����(��w���ε�)
	*rate = 3.14;
	cout << *rate << endl;

	return 0;
}