// PashaAndStrings.cpp
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

char a[200002];

void solve(int m) {
	int len = strlen(a);
	int count[100001] = {0};

	for (int i = 0 ; i < m ; i++) {
		int ai; cin >> ai;
		count[ai - 1]++;
	}

	long long int sum = 0;
	for (int i = 0 ; i < len / 2 ; i++) {
		sum += count[i];
		if (sum % 2 == 1) {
			swap(a[i], a[len - 1 - i]);
		}
	}
	cout << a << endl;
}

int main() {

	cin >> a;

	int m;
	cin >> m;

	solve(m);

	return 0;
}