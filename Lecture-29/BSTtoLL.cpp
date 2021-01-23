// BinarySearchTree.cpp
#include <iostream>
#include <queue>
#include <cmath>
using namespace std;

class node {
public:
	int data;
	node* left;
	node* right;
	node(int d): data(d), left(NULL), right(NULL) {}
};

void preOrder(node* root) {
	// base case
	if (root == NULL) {
		return;
	}
	// recursive case
	cout << root->data << ",";
	preOrder(root->left);
	preOrder(root->right);
}

void inOrder(node* root) {
	// base case
	if (root == NULL) {
		return;
	}
	inOrder(root->left);
	cout << root->data << ",";
	inOrder(root->right);
}

void postOrder(node* root) {
	// base case
	if (root == NULL) {
		return;
	}
	// recursive case
	postOrder(root->left);
	postOrder(root->right);
	cout << root->data << " ";
}


/////////////////////////////// LEVEL ORDER //////////////////////////
void PrintLevel(node* root) {
	queue<node*> q;
	q.push(root);
	q.push(NULL);

	while (!q.empty()) {
		node* x = q.front(); // x can be an valid address or NULL
		q.pop();
		if ( x == NULL) {
			cout << endl;
			if (!q.empty()) {
				q.push(NULL);
			}
		}
		else {
			cout << x->data << " ";
			if (x->left) {
				q.push(x->left);
			}
			if (x->right) {
				q.push(x->right);
			}
		}
	}
}
/////////////////////////////// !LEVEL ORDER //////////////////////////

/////////////////////////////// Create BST //////////////////////////
node* InsertInBST(node* root, int data) {
	// base case
	if (root == NULL) {
		root = new node(data);
		return root;
	}

	// recursive case
	if (data <= root->data) {
		root->left = InsertInBST(root->left, data);
	}
	else {
		root->right = InsertInBST(root->right, data);
	}

	return root;
}

node* BuildTree() {
	node* root = NULL;
	int data;
	cin >> data;

	while (data != -1) {
		root = InsertInBST(root, data);
		cin >> data;
	}

	return root;
}
/////////////////////////////// Create BST //////////////////////////
class LinkedList {
public:
	node* head;
	node* tail;
	LinkedList() {
		head = tail = NULL;
	}
};

LinkedList BSTtoLL(node* root) {
	LinkedList l;
	// base case
	if (root == NULL) {
		return l;
	}


	// recursive case
	if (root->left == NULL and root->right == NULL) {
		l.head = l.tail = root;
	}
	else if (root->left != NULL and root->right == NULL) {
		LinkedList left = BSTtoLL(root->left);
		left.tail -> right = root;
		l.head = left.head;
		l.tail = root;
	}
	else if (root->left == NULL and root->right != NULL) {
		LinkedList right = BSTtoLL(root->right);
		root->right = right.head;
		l.head = root;
		l.tail = right.tail;
	}
	else {
		LinkedList left = BSTtoLL(root->left);
		LinkedList right = BSTtoLL(root->right);
		left.tail->right = root;
		root->right = right.head;
		l.head = left.head;
		l.tail = right.tail;
	}
	return l;
}

void PrintLL(node* head) {
	while (head != NULL) {
		cout << head->data << "-->";
		head = head->right;
	}
	cout << "NULL" << endl;
}


int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	node* root = BuildTree();

	preOrder(root);
	cout << endl;

	inOrder(root);
	cout << endl;

	PrintLevel(root);
	LinkedList l = BSTtoLL(root);
	PrintLL(l.head);
	return 0;
}








