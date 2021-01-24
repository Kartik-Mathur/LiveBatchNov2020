// DeletionInBst
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

/////////////////////////////////// DELETE IN BST //////////////////////
node* DeleteInBST(node*root, int key) {


	// recursive case
	if (root->data > key) {
		root->left = DeleteInBST(root->left, key);
		return root;
	}
	else if (root->data < key) {
		root->right = DeleteInBST(root->right, key);
		return root;
	}
	else {
		// root->data == key
		// 1. No children
		if (!root->left and !root->right) {
			delete root;
			return NULL;
		}
		else if (root->left and !root->right) {
			// 1 children is present that is the left subtree
			node* temp = root->left;
			delete root;
			return temp;
		}
		else if (!root->left and root->right) {
			// 1 children is present that is the right subtree
			node* temp = root->right;
			delete root;
			return temp;
		}
		else {
			// 2 children are present
			node* replace = root->right;
			while (replace->left) {
				replace = replace->left;
			}
			swap(root->data, replace->data);
			root->right = DeleteInBST(root->right, replace->data);
			return root;
		}
	}
}
/////////////////////////////////// DELETE IN BST //////////////////////


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
	DeleteInBST(root, );
	PrintLevel(root);
	return 0;
}








