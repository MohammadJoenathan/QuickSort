#include <iostream>
using namespace std;

int data[4] = { 60, 5, 9, 8};
void QuickSort (int L, int R) {
	int i, j;
	int mid;
	i = L;
	j = R;
	mid = data[(L + R) / 2];
	do {
		while (data[i] < mid) i++;
		while (data[j] > mid) j--;
		if (i <= j) {
			int t;
			t = data[j];
			data[j] = data[i];
			data[i] = t;
			i++;
			j--;
			cout << " Quicksort ("<< L << ", "<< R << ") = ";
			for (int i=0; i<4;i++) {
				cout << data[i] << " ";
			}
			cout << endl;
		}
	}
	while (i < j);
		if (L < j) QuickSort(L, j);
		if (i < R) QuickSort(i, R);
	}
int main () {
	cout << " Proses Quick Sort" << endl;
	cout << " -------------------------------------" << endl;
	cout << " Data Awal : ";
	for (int i=0; i<4; i++) {
		cout << data[i]<<" ";
	}
	cout << endl;
	QuickSort(0,3);
	return 0;
}

