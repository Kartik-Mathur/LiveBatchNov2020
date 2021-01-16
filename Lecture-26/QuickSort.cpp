#include <iostream>
#include <cstdlib> //rand()
#include <ctime> // srand()
using namespace std;

int PartitionHelper(int *a, int s, int e) {
	int i = s - 1;
	int x = a[e];

	for (int j = s ; j < e; j++) {
		if (a[j] <= x) {
			i++;
			swap(a[i], a[j]);
		}
	}

	swap(a[i + 1], a[e]);
	return i + 1;
}

int Partition(int *a, int s, int e) {
	// Change the element
	// so that array should not remain sorted, even if its sorted
	// Pick an index anything between s and e
	// swap that element with the e index element
	srand(time(0));
	int ri = s + (rand()) % (e - s);
	swap(a[ri], a[e]);
	return PartitionHelper(a, s, e);
}

void QuickSort(int *a, int s, int e) {
	if (s >= e) {
		return;
	}

	int p = Partition(a, s, e);
	QuickSort(a, s, p - 1);
	QuickSort(a, p + 1, e);
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int a[] = {2, 7, 8, 1, 3, 4, 2, 2};
	int n = sizeof(a) / sizeof(int);

	// To generate a number between
	// [low,high), where high is not included
	// int number = low + rand()%(high-low)
	for (int i = 0 ; i < n ; i++) {
		cout << a[i] << " ";
	}
	cout << endl;

	QuickSort(a, 0, n - 1);

	for (int i = 0 ; i < n ; i++) {
		cout << a[i] << " ";
	}
	cout << endl;



	return 0;
}








