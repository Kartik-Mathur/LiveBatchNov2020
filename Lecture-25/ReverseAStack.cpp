#include <iostream>
#include <stack>
using namespace std;

void InsertAtBottom(stack<int> &s, int TopElement) {
	if (s.empty()) {
		s.push(TopElement);
		return;
	}
	// recursive case
	int top = s.top();
	s.pop();
	InsertAtBottom(s, TopElement);
	s.push(top);
}

void ReverseStack(stack<int> &s) {
	// Base case
	if (s.empty()) {
		return;
	}

	// Recursive case
	int TopElement = s.top();
	s.pop();
	ReverseStack(s);
	InsertAtBottom(s, TopElement);
}

void Print(stack<int> s) {
	while (!s.empty()) {
		cout << s.top() << " ";
		s.pop();
	}
	cout << endl;
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	stack<int> s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);


	Print(s);
	ReverseStack(s);
	Print(s);

	return 0;
}






















