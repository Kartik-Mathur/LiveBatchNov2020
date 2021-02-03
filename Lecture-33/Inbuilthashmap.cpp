#include <iostream>
#include <unordered_map>
using namespace std;


int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	// Syntax
	// unordered_map<key,value> h;

	unordered_map<string, int> h;
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


	// If I only want to iterate over the data
	// for each loop-> used to iterate over vectors, hashmaps
	for (pair<string, int> fruit : h) {
		cout << fruit.first << "->" << fruit.second << endl;
	}
	cout << endl;

	// // 2nd way
	// For each fruit belonging to hashmap h
	for (auto fruit : h) {
		cout << fruit.first << "->" << fruit.second << endl;
	}
	cout << endl;

	// 3rd way
	for ( auto it = h.begin(); it != h.end(); it++ ) {
		cout << it->first << ":" << it->second << endl;
	}

	cout << endl;
	h.erase("Orange");
	h.erase("Banana");
	// 4th way
	for (int i = 0 ; i < h.bucket_count() ; i++) {
		cout << i << "--> ";
		for (auto it = h.begin(i) ; it != h.end(i) ; it++ ) {
			cout << "( " << it->first << " " << it->second << ") ";
		}
		cout << endl;
	}

	cout << h["Mango"] << endl;
	return 0;
}











