// User_DefinedStack
#include <iostream>
#include "Stack.h"
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	Stack<char> s;
	// s.push(1);
	// s.push(2);
	// s.push(3);
	// s.push(4);
	// s.push(5);
	// s.push(6);
	s.push('A');
	s.push('B');
	s.push('C');
	s.push('D');
	s.push('E');

	while (!s.empty()) {
		cout << s.top() << " ";
		s.pop();
	}
	cout << endl;
	cout << endl;
	return 0;
}