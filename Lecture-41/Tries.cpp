#include <iostream>
#include <unordered_map>
using namespace std;

class node {
public:
	char data;
	bool isTerminal;
	unordered_map<char, node*> h;

	node(char ch) {
		data = ch;
		isTerminal = false;
	}
};

class Trie {
	node* root;
public:
	Trie() {
		root = new node('\0');
	}

	void insert(char *word) {
		node* temp = root;
		for (int i = 0 ; word[i] ; i++) {
			char ch = word[i];
			if (temp->h.count(ch)) {
				// if ch exists
				temp = temp->h[ch];
			}
			else {
				// if ch doesnot exists
				temp->h[ch] = new node(ch);
				temp = temp->h[ch];
			}
		}

		temp->isTerminal = true;
	}

	bool search(char* word) {
		node* temp = root;
		for (int i = 0 ; word[i] ; i++) {
			char ch = word[i];
			if (temp->h.count(ch)) {
				// If exists
				temp = temp->h[ch];
			}
			else {
				return false;
			}
		}

		return temp->isTerminal;
	}
};

int main() {

	Trie t;
	char a[100] = "Hello";
	t.insert(a);
	t.insert("Hello World");
	t.insert("Code");
	t.insert("Coder");

	char key[100];
	while (1) {
		cin >> key;
		// cin.getline(key, 100);

		if (t.search(key)) {
			cout << "Word is Present";
		}
		else {
			cout << "Word is not Present";
		}
		cout << endl;
	}

	return 0;
}







