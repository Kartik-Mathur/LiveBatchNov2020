#include <iostream>
#include <vector>
using namespace std;

class node {
public:
	int data;
	node* next; // self referential class

	node(int d): data(d), next(NULL) {}
};

int length(node* head) {
	int cnt = 0;
	while (head) {
		cnt++;
		head = head -> next;
	}
	return cnt;
}

void InsertAtEnd(node* &head, int data) {
	node* n = new node(data);
	if (head == NULL) {
		// We are inserting the first node
		head = n;
	}
	else {
		// We have linkedList
		node* temp = head;
		while (temp->next) {
			temp = temp->next;
		}
		temp->next = n;
	}
}

void PrintLL(node* head) {
	while (head) {
		cout << head->data << "-->";
		head = head->next;
	}
	cout << "NULL" << endl;
}

///////////////////////////////// Find Mid ////////////////////////
// Without calculating the length
node* mid(node* head) {
	if (!head) {
		return head;
	}
	node* fast = head->next, *slow = head;

	while (fast and fast->next) {
		fast = fast->next->next;
		slow = slow->next;
	}
	return slow;
}
///////////////////////////////// Find Mid ////////////////////////

///////////////////////////////// Reverse A LL ////////////////////
void ReverseLL(node* &head) {
	node* c = head, *prev = NULL, *n;
	while (c) {
		n = c->next;
		c->next = prev;
		prev = c;
		c = n;
	}
	head = prev;
}
///////////////////////////////// Reverse A LL ////////////////////

///////////////////////////////// BUBBLE SORT /////////////////////
void bubbleSort(node* &head) {
	int len = length(head);
	node* c, *prev, *n;
	for (int iter = 1 ; iter <= len - 1 ; iter++) {
		c = head; prev = NULL;
		while (c and c->next) {
			n = c ->next;
			if (c->data > n->data) {
				// swapping hogi
				c->next = n->next;
				n->next = c;
				if (prev == NULL) {
					// head change hoga
					prev = head = n;
				}
				else {
					// head change nhi hoga
					prev->next = n;
					prev = n;
				}
			}
			else {
				// swapping nhi hogi
				prev = c;
				c = n;
			}
		}
	}
}
///////////////////////////////// BUBBLE SORT /////////////////////


int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	node* head = NULL;

	InsertAtEnd(head, 1);
	InsertAtEnd(head, 2);
	InsertAtEnd(head, 12);
	InsertAtEnd(head, 21);
	InsertAtEnd(head, 5);

	PrintLL(head);
	// ReverseLL(head);
	// PrintLL(head);
	bubbleSort(head);
	PrintLL(head);

	return 0;
}