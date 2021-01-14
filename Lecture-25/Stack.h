#include "node.h"
template<typename T>
class Stack {
private:
	node<T>* head;
	int len;
public:
	Stack() {
		head = NULL;
		len = 0;
	}

	void push(T d) {
		node<T>* n = new node<T>(d);
		n->next = head;
		head = n;
		len++;
	}

	void pop() {
		// Delete at Front
		if (head == NULL) {
			return;
		}
		else if (head->next == NULL) {
			// We have a single node
			delete head;
			head = NULL;
			len--;
		}
		else {
			node<T>* n = head;
			head = head->next;
			delete n;
			len--;
		}
	}

	bool empty() {
		return head == NULL; // or len == 0
	}

	int size() {
		return len;
	}

	T top() {
		return head->data;
	}
};