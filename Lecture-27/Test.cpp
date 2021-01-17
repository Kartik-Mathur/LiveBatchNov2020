#include <iostream>
using namespace std;
// 8 3 1 -1 -1 6 4 -1 -1 7 -1 -1 10 -1 14 13 -1 -1 -1
class node {
public:
	int data;
	node* left;
	node* right;
	node(int d): data(d), left(NULL), right(NULL) {}
};

node* BuildTree() {
	int data;
	cin >> data;
	if (data == -1) {
		return NULL;
	}
	else {
		node* root = new node(data);
		root->left = BuildTree();
		root->right = BuildTree();
		return root;
	}
}

void preOrder(node* root) {
	// base case
	if (root == NULL) {
		return;
	}

	// recursive case
	cout << root->data << " ";
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
	cout << root->data << " ";
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
	postOrder(root);

	return 0;
}








