// ExamplesHashmap.cpp
#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	// unordered_map<string, vector<int> >  h;
	map<string, vector<int> >  h;

	h["Aastha"].push_back(9999999);
	h["Aastha"].push_back(9999998);
	h["Aastha"].push_back(9999997);

	h["Gaurav"].push_back(9999996);
	h["Gaurav"].push_back(9999995);

	h["Nityunj"].push_back(9999994);

	for (auto person : h) {
		// person.first  -> key
		// person.second -> value, vector
		cout << person.first << "-->";
		for (int i = 0 ; i < person.second.size() ; i++) {
			cout << person.second[i] << ", ";
		}
		cout << endl;
	}

	return 0;
}



