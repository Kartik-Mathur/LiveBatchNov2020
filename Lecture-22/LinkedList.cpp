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

int lengthRec(node* head) {
	// base case
	if (!head) { // NULL == 0, if(head == NULL)
		return 0;
	}

	// recursive case
	return 1 + lengthRec(head->next);
}

void InsertAtFront(node* &head, node* &tail, int data) {
	node* n = new node(data);
	if (head == NULL) {
		// We are inserting the first node
		head = tail = n;
	}
	else {
		// We have linkedList
		n->next = head;
		head = n;
	}
}

void InsertAtEnd(node* &head, node* &tail, int data) {
	node* n = new node(data);
	if (head == NULL) {
		// We are inserting the first node
		head = tail = n;
	}
	else {
		// We have linkedList
		tail -> next = n;
		tail = n;
	}
}

void InsertAtMid(node* &head, node* &tail, int data, int pos) {
	if (pos == 0) {
		InsertAtFront(head, tail, data);
	}
	else if (pos >= length(head) - 1) {
		InsertAtEnd(head, tail, data);
	}
	else {
		node* temp = head;
		node* n = new node(data);
		for (int i = 1 ; i <= pos - 1 ; i++) {
			temp = temp->next;
		}
		n->next = temp->next;
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


///////////////////////////////// DELETION ///////////////////////
void DeleteAtFront(node* &head, node* &tail) {
	if (head == NULL) {
		return;
	}
	else if (head->next == NULL) {
		delete head;
		head = tail = NULL;
	}
	else {
		node* n = head;
		head = head->next;
		delete n;
	}
}
void DeleteAtEnd(node* &head, node* &tail) {
	if (head == NULL) {
		return;
	}
	else if (head->next == NULL) {
		delete head;
		head = tail = NULL;
	}
	else {
		node* temp = head;
		while (temp->next != tail) {
			temp = temp->next;
		}
		delete tail;
		tail = temp;
		tail -> next = NULL;
	}
}
void DeleteAtMid(node* &head, node* &tail, int pos) {
	if (pos == 0) {
		DeleteAtFront(head, tail);
	}
	else if (pos >= length(head) - 1) {
		DeleteAtEnd(head, tail);
	}
	else {
		node* temp = head;
		for (int i = 1 ; i < pos ; i++) {
			temp = temp->next;
		}
		node* n = temp->next;
		temp->next = n->next;
		delete n;
	}
}

///////////////////////////////// DELETION ///////////////////////


///////////////////////////////// Searching ///////////////////////
node* SearchRec(node* head, int key) {
	// base case
	if (!head) {
		return NULL;
	}

	// recursive case
	if (head -> data == key) {
		return head;
	}

	return SearchRec(head->next, key);
}

node* SearchIterative(node* head, int key) {
	while (head) {
		if (head->data == key) {
			return head;
		}
		head = head->next;
	}
	return NULL;
}
///////////////////////////////// Searching ///////////////////////

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



int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	node* head = NULL, *tail = NULL;
	// InsertAtFront(head,tail,1);
	// InsertAtFront(head,tail,2);
	// InsertAtFront(head,tail,3);
	InsertAtEnd(head, tail, 1);
	InsertAtEnd(head, tail, 2);
	InsertAtEnd(head, tail, 3);
	InsertAtEnd(head, tail, 4);
	// PrintLL(head);
	InsertAtMid(head, tail, 5, 2);
	// PrintLL(head);
	InsertAtMid(head, tail, 6, 0);
	PrintLL(head);
	cout << lengthRec(head) << endl;
	node * ans = SearchRec(head, 4);
	if (ans != NULL) {
		// node is found
		cout << "Node Found " << ans->data << endl;
	}
	else {
		cout << "Not Found" << endl;
	}
	ans = SearchIterative(head, 4);
	if (ans != NULL) {
		// node is found
		cout << "Node Found " << ans->data << endl;
	}
	else {
		cout << "Not Found" << endl;
	}
	DeleteAtFront(head, tail);
	PrintLL(head);
	ans = mid(head);
	if (ans != NULL) {
		// node is found
		cout << "Middle Found " << ans->data << endl;
	}
	else {
		cout << "Not Found" << endl;
	}
	// cout<<length(head)<<endl;
	// PrintLL(head);
	// DeleteAtFront(head,tail);
	// DeleteAtFront(head,tail);
	// PrintLL(head);
	// DeleteAtEnd(head,tail);
	// DeleteAtEnd(head,tail);
	// PrintLL(head);
	// DeleteAtMid(head,tail,0);
	// PrintLL(head);

	return 0;
}