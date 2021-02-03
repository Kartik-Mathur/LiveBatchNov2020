#include <iostream>
using namespace std;


int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	auto i = 100;
	cout << i << endl;
	pair<string, int> p("Guava", 120);

	cout << p.first << endl;
	cout << p.second;

	cout << endl;
	return 0;
}