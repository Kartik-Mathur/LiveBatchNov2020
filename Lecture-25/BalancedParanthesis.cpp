#include <iostream>
#include <stack>
using namespace std;

bool isBalanced(char *a) {
	stack<int> s;

	for (int i = 0 ; a[i] ; i++) {
		char ch = a[i];
		switch (ch) {
		case '(':
		case '{':
		case '[': s.push(ch);
			break;
		case ')':
			if (!s.empty() and s.top() == '(') {
				s.pop();
			}
			else {
				return false;
			}
			break;
		case '}':
			if (!s.empty() and s.top() == '{') {
				s.pop();
			}
			else {
				return false;
			}
			break;
		case ']':
			if (!s.empty() and s.top() == '[') {
				s.pop();
			}
			else {
				return false;
			}
		}
	}

	return s.empty();
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	char a[] = "[{(a+b)+c*(d+e)}]";
	if (isBalanced(a)) {
		cout << "Balanced" << endl;
	}
	else {
		cout << "Not Balanced" << endl;
	}

	return 0;
}