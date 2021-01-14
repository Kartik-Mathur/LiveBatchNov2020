#include <iostream>
using namespace std;
class node {
public:
	int data;
	node* next;
	node(int d) {
		data = d;
		next = NULL;
	}
};

class Queue {
	int *arr;
	int f, e, n, cs;
public:
	Queue(int s = 5) {
		arr = new int[s];
		n = s;
		f = 0;
		e = n - 1;
		cs = 0;
	}

	void push(int d) {
		if (cs < n) {
			e = (e + 1) % n;
			arr[e] = d;
			cs++;
		}
		else {
			cout << "Queue OverFlow" << endl;
		}
	}

	void pop() {
		if (cs > 0) {
			f = (f + 1) % n;
			cs--;
		}
		else {
			cout << "Queue Under Flow" << endl;
		}
	}

	int front() {
		return arr[f];
	}

	bool empty() {
		return cs == 0;
	}

	int size() {
		return cs;
	}
};

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	Queue q;

	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);

	while (!q.empty()) {
		cout << q.front() << " ";
		q.pop();
	}

	cout << endl;
	q.pop();
	return 0;
}














