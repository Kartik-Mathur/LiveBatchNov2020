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
	node* head, *tail;
	int len;
public:
	Queue(): head(NULL), tail(NULL), len(0) {}

	void push(int d) {
		if (head == NULL) {
			head = tail = new node(d);
		}
		else {
			node* n = new node(d);
			tail->next = n;
			tail = n;
		}
		len++;
	}

	void pop() {
		if (head == NULL) {
			return;
		}
		else if (head->next == NULL) {
			delete head;
			head = tail = NULL;
			len--;
		}
		else {
			node* n = head;
			head = head->next;
			delete n;
			len--;
		}
	}

	int front() {
		return head->data;
	}

	bool empty() {
		return head == NULL;
	}

	int size() {
		return len;
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

	while (!q.empty()) {
		cout << q.front() << " ";
		q.pop();
	}

	cout << endl;
	return 0;
}















