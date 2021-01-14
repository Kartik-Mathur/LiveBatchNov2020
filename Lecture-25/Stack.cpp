#include <iostream>
#include <vector>
using namespace std;

class Stack {
private:
	vector<int> v;
public:
	int top() {
		return v[v.size() - 1];
	}

	void push(int data) {
		v.push_back(data);
	}

	void pop() {
		v.pop_back();
	}

	bool empty() {
		return v.size() == 0;
	}

	int size() {
		return v.size();
	}
};

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	Stack s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);

	while (!s.empty()) {
		cout << s.top() << " ";
		s.pop();
	}
	cout << endl;
	return 0;
}



















