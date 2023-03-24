#include <iostream>
using namespace std;

int arr[20];
int n;

void input() {
	while (true) {
		cout << "masukan jumlah data pada array";
		cin >> n;
	}
	cout << endl;
	cout << "=====================" << endl;
	cout << "Masukan Element Array" << endl;
	cout << "=====================" << endl;
	
	for (int i = 0; i < n; i++)
	{
		cout << "data ke-" << (i + 1) << ":";
		cin >> arr[i];
	}

}

void insertionsort() {
	int temp;
	int j;

}