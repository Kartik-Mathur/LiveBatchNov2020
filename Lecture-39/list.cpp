#include <iostream>
#include <list>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	list<int> l;

	l.push_back(1);
	l.push_back(2);
	l.push_back(3);
	l.push_back(4);
	// 1 2 3 4
	// l.push_front(0);

	for (auto node : l) {
		cout << node << "-->";
	}


	cout << endl;
	return 0;
}