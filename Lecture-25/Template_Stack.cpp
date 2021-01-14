#include <iostream>
#include <vector>
using namespace std;

// Every class can have a template
template <typename T> // T is given by the user
class Stack {
private:
	vector<T> v;
public:
	T top() {
		return v[v.size() - 1];
	}

	void push(T data) {
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

	Stack<int> s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
	// s.push('A');
	// s.push('B');
	// s.push('C');
	// s.push('D');
	// s.push('E');

	while (!s.empty()) {
		cout << s.top() << " ";
		s.pop();
	}
	cout << endl;
	return 0;
}



















