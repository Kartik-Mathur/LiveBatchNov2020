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
class Pair {
public:
	int height;
	bool Balanced;
	Pair() {
		height = 0;
		Balanced = true;
	}
};

Pair isBalanced(node* root) {
	Pair p;
	// base case
	if (root == NULL) {
		return p;
	}

	// recursive case
	Pair left = isBalanced(root->left);
	Pair right = isBalanced(root->right);

	p.height = max(left.height, right.height) + 1;
	if (left.Balanced and right.Balanced and (abs(left.height - right.height) <= 1) ) {
		p.Balanced = true;
	}
	else {
		p.Balanced = false;
	}
	return p;
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

	Pair ans = isBalanced(root);
	if (ans.Balanced) {
		cout << "Tree is Balanced" << endl;
	}
	else {
		cout << "Not Balanced Tree" << endl;
	}
	cout << "Height " << ans.height << endl;
	return 0;
}








