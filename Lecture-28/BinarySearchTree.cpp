// BinarySearchTree.cpp
#include <iostream>
#include <queue>
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

	// recursive case
	// 1. Print left sub tree first
	inOrder(root->left);
	// 2. Print the root node
	cout << root->data << ",";
	// 3. Print the right sub tree
	inOrder(root->right);
}

void postOrder(node* root) {
	// base case
	if (root == NULL) {
		return;
	}

	// recursive case
	//1. Print left
	postOrder(root->left);
	//2. Print right
	postOrder(root->right);
	//3. Print root node
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

	return 0;
}








