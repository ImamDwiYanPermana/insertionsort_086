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
	for (int i = 1; i < n; i++) {

		temp = arr[i];

		j = i - 1;
	while (j >= 0 && arr[j] > temp)

		{
			arr[j + 1] = arr[j];
			j--;
		}

		cout << "\nPass " << i << ":";

		for (int k = 0; k < n; k++) {
			cout << arr[k] << "";
		}
	}

}