#include <iostream>

using namespace std;

void QuickSort(int first, int last, int A[])
{
	int pivot;
	int l, r; 
	l = first; r = last;
	pivot = A[(l + r) / 2];
	while (l <= r) {
		while (A[l] < pivot) l++;
		while (A[r] > pivot) r--;
		if (l <= r) {
			swap(A[l], A[r]);
			l++;
			r--;
		}
	}
	if (first < r) QuickSort(first, r, A);
	if (l < last) QuickSort(l, last, A);
}

int main() {
	int n;
	cin >> n;
	int* c = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> c[i];
	}
	QuickSort(0, n - 1, c);
	for (int i = 0; i < n; i++) {
		cout << c[i]<<" ";
	}
	return 0;

}