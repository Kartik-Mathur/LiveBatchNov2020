// InbuiltHeap.cpp
#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

// class Meracomparator {
// public:
// 	bool operator()(int a, int b) {
// 		return a > b;
// 	}
// };

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	// priority_queue<int, vector<int>, Meracomparator> h;
	priority_queue<int, vector<int>, greater<int> > h;
	h.push(1);
	h.push(10);
	h.push(12);
	h.push(5);
	h.push(6);
	h.push(4);
	h.push(8);
	h.push(80);
	h.push(-8);
	h.push(-80);

	while (!h.empty()) {
		cout << h.top() << endl;
		h.pop();
	}


	return 0;
}










