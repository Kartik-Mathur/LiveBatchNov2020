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
node* SearchBST(node* root, int key) {
	// base case
	if (!root) {
		return root;
	}

	// recursive case
	if (root->data == key) {
		return root;
	}
	else if (key < root->data) {
		return SearchBST(root->left, key);
	}
	else {
		return SearchBST(root->right, key);
	}
}

void PrintRange(node* root, int k1, int k2) {
	// base case
	if (!root) {
		return;
	}

	// recursive case
	PrintRange(root->left, k1, k2);

	if (root->data >= k1 and root->data <= k2) {
		cout << root->data << " ";
	}

	PrintRange(root->right, k1, k2);
}

bool isBST(node* root, int min = INT_MIN, int max = INT_MAX) {
	// base case
	if (root == NULL) {
		return true;
	}

	// recursive case
	if (root->data >= min and root->data <= max and isBST(root->left, min, root->data) and isBST(root->right, root->data, max)) {
		return true;
	}
	else {
		return false;
	}
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
	node* ans = SearchBST(root, 15);

	if (ans) {
		cout << "Found " << ans->data << endl;
	}
	else {
		cout << "Node not Found" << endl;
	}
	PrintRange(root, 7, 13);
	cout << endl;
	if (isBST(root)) {
		cout << "Yes" << endl;
	}
	return 0;
}








