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
node* CreateTree(int *arr, int s, int e) {
	// base case
	if (s > e) {
		return NULL;
	}

	// recursive case
	int mid = (s + e) / 2;
	node* root = new node(arr[mid]);
	root->left = CreateTree(arr, s, mid - 1);
	root->right = CreateTree(arr, mid + 1, e);
	return root;
}


int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int arr[] = {1, 2, 3, 4, 8, 9, 10};
	int n = sizeof(arr) / sizeof(int);
	node* root = CreateTree(arr, 0, n - 1);

	preOrder(root);
	cout << endl;

	inOrder(root);
	cout << endl;

	PrintLevel(root);

	return 0;
}








