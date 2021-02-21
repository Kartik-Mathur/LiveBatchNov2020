// PENDING RIGHT NOW
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

	int maxxor_helper(int n) {
		node* temp = root;
		int result = 0;

		for (int i = 31 ; i >= 0 ; i--) {
			if (n & (1 << i)) {
				// current bit: 1
				if (temp->left) {

					temp = temp->left;
				}
				else {
					temp = temp->right;
				}

			}
			else {
				// current bit: 0
				if (temp->right) {

					temp = temp->right;
				}
				else {
					temp = temp->left;
				}
			}
		}

		return result;
	}

	int maxxor(int *arr, int n) {
		int ans = 0;
		int val = 0;
		for (int i = 0 ; i < n ; i++) {
			val ^= arr[i];
			insert(val);
			int result = maxxor_helper(val);
			ans = max(ans, result);
		}

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



