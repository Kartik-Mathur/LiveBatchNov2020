#include <iostream>
#include <queue>
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

int CountNodes(node *root) {
	// base case
	if (root == NULL) {
		return 0;
	}

	// recursive case
	return CountNodes(root->left) + CountNodes(root->right) + 1;
}

int height(node* root) {
	// base case
	if (root == NULL) {
		return 0;
	}

	// recursive case
	int left_height = height(root->left);
	int right_height = height(root->right);
	return max(left_height, right_height) + 1;
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

/////////////////////////////// LEVEL ORDER //////////////////////////

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	node* root = BuildTree();
	// mirror(root);
	// preOrder(root);
	// cout << endl;
	PrintLevel(root);
	// inOrder(root);
	// cout << endl;
	// postOrder(root);
	// cout << endl;
	// cout << "Total Node Count: " << CountNodes(root) << endl;
	// cout << "Height: " << height(root) << endl;
	// cout << "Diameter: " << diameter(root) << endl;

	// Pair ans = fastDiameter(root);
	// cout << "Fast Height: " << ans.height << endl;
	// cout << "Fast Diameter: " << ans.diameter << endl;
	// cout << "Sum of Tree: " << SumOfBT(root) << endl;

	return 0;
}








