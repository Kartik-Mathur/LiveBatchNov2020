#include <iostream>
#include <map>
using namespace std;


int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	// Syntax
	// unordered_map<key,value> h;

	map<string, int> h;
	// 1st way to insert
	// h["Apple"] = 100;
	// h["Mango"] = 120;
	// h["PineApple"] = 50;
	// h["Kiwi"] = 20;
	string key;
	int value;
	int n;
	cin >> n;

	for (int i = 0 ; i < n ; i++) {
		cin >> key >> value;
		h.insert({key, value});
	}
	// 2nd way
	pair<string, int> p("Guava", 120);
	h.insert(p);

	// 3rd way
	h.insert(make_pair("Banana", 40));

	// 4th way
	h.insert({"Orange", 60});

	// For each fruit belonging to hashmap h
	for (auto fruit : h) {
		cout << fruit.first << "->" << fruit.second << endl;
	}
	cout << endl;

	return 0;
}











