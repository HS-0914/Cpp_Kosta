/*
#include <iostream>
#include <string.h>
#include <memory>

using namespace std;

class Printer {
protected:
	string model;
	string manufacturer;
	int printedCount;
	int availableCount;
public:
	Printer() {
		this->model = "Default";
		this->manufacturer = "Default";
		this->printedCount =  0;
		this->availableCount = 0;
	}

	Printer(string model, string manufacturer, int availableCount) {
		this->model = model;
		this->manufacturer = manufacturer;
		this->printedCount = 0;
		this->availableCount = availableCount;
	}

	~Printer() {}

	void printPages(int pages) {
		this->printedCount += pages;
		this->availableCount -= pages;
		cout << pages << "¸Å Ãâ·Â" << endl;
	}
};

class Inkjet :public Printer {
private:
	int availableInk;
public:
	Inkjet() {
		this->availableInk = 0;
	}
	Inkjet(string model, string manufacturer, int availableCount, int availableInk)
		:Printer(model, manufacturer, availableCount)
	{
		this->availableInk = availableInk;
	}
	~Inkjet() {}
	void printInkJet(int pages) {
		this->availableInk -= pages;
		printPages(pages);
	}
};

class Laser :public Printer {
private:
	int availableToner;
public:
	Laser() {
		this->availableToner = 0;
	}
	Laser(string model, string manufacturer, int availableCount, int availableToner)
		:Printer(model, manufacturer, availableCount)
	{
		this->availableToner = availableToner;
	}
	~Laser() {}
	void printLaser(int pages) {
		this->availableToner -= pages;
		printPages(pages);
	}
};


int main() {

	Inkjet* test = new Inkjet("test", "test", 200, 300);
	Laser* test2 = new Laser("test", "test", 200, 500);

	unique_ptr<Inkjet> smart = make_unique<Inkjet>("test", "test", 200, 300);
	unique_ptr<Laser> smart2 = make_unique<Laser>("test", "test", 200, 500);

	test->printInkJet(2);
	test2->printLaser(5);

	smart->printInkJet(3);
	smart2->printLaser(4);
	
	delete test;
	delete test2;
	return 0;
}
*/

#include <iostream>
#include <vector>

using namespace std;

void swap(int& x, int& y) {

	int temp = x;
	x = y;
	y = temp;
}

void QuickSort(vector<int>& arr, int start, int end) {

	if (start >= end) return;
	int pivot = arr[end];
	int left = start;
	int right = end - 1;

	while (true) {
		while (arr[left] < pivot) left++;
		while (arr[right] > pivot) right--;
		if (left >= right) break;
		swap(arr[left], arr[right]);
	}
	swap(arr[left], arr[end]);
	QuickSort(arr, start, left-1);
	QuickSort(arr, left+1, end);
}

int main() {
	vector<int> arr;
	int num = -1;
	while (true) {
		cin >> num;
		if (num == 0) break;
		arr.push_back(num);
	}

	int len = arr.size();

	QuickSort(arr, 0, arr.size() - 1);

	vector<int>::iterator it;

	for (it = arr.begin(); it != arr.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
	return 0;
}