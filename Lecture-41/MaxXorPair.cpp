// MaxXorPair.cpp
#include <iostream>
#include <unordered_map>
using namespace std;

class node {
public:
	int data;
	node* left;// 0
	node* right; // 1
	node(): left(NULL), right(NULL) {}
};

class Trie {
	node* root;
public:
	Trie() {
		root = new node();
	}

	void insert(int n) {
		node* temp = root;
		for (int i = 31 ; i >= 0 ; i--) {
			if (n & (1 << i)) {
				if (!temp->right) {
					temp->right = new node();
				}
				temp = temp->right;
			}
			else {
				if (!temp->left) {
					temp->left = new node();
				}
				temp = temp->left;
			}
		}
		temp->data = n;
	}

	int maxxor_helper(int n, int ans, int &no1, int &no2) {
		node* temp = root;
		int result = 0;
		int x = 0;
		for (int i = 31 ; i >= 0 ; i--) {
			if (n & (1 << i)) {
				// current bit: 1
				if (temp->left) {
					result += (1 << i);
					temp = temp->left;
				}
				else {
					temp = temp->right;
				}

			}
			else {
				// current bit: 0
				if (temp->right) {
					result += (1 << i);
					temp = temp->right;
				}
				else {
					temp = temp->left;
				}
			}
		}
		if (ans < result) {
			no1 = n;
			no2 = temp->data;
		}

		return result;
	}

	int maxxor(int *arr, int n) {
		int ans = 0, no1, no2;
		for (int i = 0 ; i < n ; i++) {
			insert(arr[i]);
			int result = maxxor_helper(arr[i], ans, no1, no2);
			ans = max(ans, result);
		}
		cout << "Two Numbers are " << no1 << " and " << no2 << endl;
		return ans;
	}


};

int main() {

	Trie t;

	int arr[] = {2, 5, 8, 25};
	int n = 4;

	cout << t.maxxor(arr, n) << endl;

	return 0;
}










