// SwitchCase.cpp
#include <iostream>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	char ch;
	ch = 'n';

	switch (ch) {
	case 'n':
	case 'N': cout << "North" << endl;
		break;
	case 's':
	case 'S': cout << "South" << endl;
		break;
	case 'e':
	case 'E': cout << "East" << endl;
		break;
	case 'w':
	case 'W': cout << "West" << endl;
	}

	cout << endl;
	return 0;
}