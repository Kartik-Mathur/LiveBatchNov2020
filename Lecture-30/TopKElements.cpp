// TopKElements.cpp
#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
#define Minheap priority_queue<int, vector<int>, greater<int> >

void printHeap(Minheap h) {
	while (!h.empty()) {
		cout << h.top() << " ";
		h.pop();
	}
	cout << endl;
}

int main() {

// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif


	Minheap h; // Minheap
	int n, count = 0;
	int k = 3;

	while (1) {
		cin >> n;
		if (n == -1) {
			// Print the heap
			printHeap(h);
		}
		else {
			if (count < k) {
				h.push(n);
				count++;
			}
			else {
				if (h.top() < n) {
					h.pop();
					h.push(n);
				}
			}
		}
	}



	return 0;
}










