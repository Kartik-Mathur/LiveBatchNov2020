// Hashmap
#include <iostream>
using namespace std;

class node {
public:
	int val;
	node* next;
	string key;
	node(string k, int v) {
		key = k;
		val = v;
		next = NULL;
	}
};

class hashmap {
	int ts;
	node** arr;
	int cs; // current size

	void rehashing() {
		node** oldarr = arr;
		int oldts = ts;
		// 1. Double the size of the hashtable
		arr = new node*[2 * ts];
		ts = 2 * ts;
		cs = 0;
		for (int i = 0 ; i < ts ; i++) {
			arr[i] = NULL;
		}
		// 2. Now copy the oldtable key,values into the new hashtable
		for (int i = 0 ; i  < oldts; i ++) {
			node* head = oldarr[i];
			while (head) {
				insert(head->key, head->val);
				head = head->next;
			}
		}

		// Now we have copied the data
		delete []oldarr;
	}

	int hashFunction(string key) {
		int mul = 1;
		int ans = 0;

		for (int i = 0; i < key.length() ; i++) {
			ans += ( (key[i] % ts) * (mul % ts) ) % ts;
			mul *= 29;
			mul %= ts;
		}
		ans %= ts;
		return ans;
	}

public:
	hashmap(int size = 7) {
		arr = new node*[size];
		cs = 0;
		ts = size;
		// Because array is of pointers thats why add NULL to every bucket
		for (int i = 0 ; i < ts ; i++) {
			arr[i] = NULL;
		}
	}

	void insert(string key, int val) {
		int indx = hashFunction(key); // this will give hashindex
		node* n = new node(key, val);
		cs++;
		n->next = arr[indx];
		arr[indx] = n;
		if ( (cs / (ts * 1.0) >= 0.6) ) {
			rehashing();
		}
	}

	void Print() {
		for (int i = 0 ; i < ts; i++) {
			cout << i << "-->";
			node* head = arr[i];
			while (head) {
				cout << head->key << " ";
				head = head->next;
			}
			cout << endl;
		}
	}

	node* search(string key) {
		int indx = hashFunction(key);
		node* head = arr[indx];
		while (head) {
			if (head->key == key) {
				return head;
			}
			head = head->next;
		}
		return NULL;
	}

	int& operator[](string key) {
		node* ans = search(key);
		if (ans == NULL) {
			// Key is not present
			// In this case key should get inserted
			int garbage;
			insert(key, garbage);
			ans = search(key);
			return ans->val;
		}
		else {
			// Key is present
			// ans->key and ans->val
			return ans->val;
		}
	}

};


int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	hashmap h;

	h.insert("Mango", 100);
	h.insert("Pineapple", 50);
	h.insert("Apple", 120);
	h.insert("Guava", 60);
	// h.insert("Kiwi", 140);
	h["Kiwi"] = 140;

	h["Mango"] = 120;
	cout << "Mango : " << h["Mango"] << endl;
	cout << "Kiwi : " << h["Kiwi"] << endl;
	h.Print();
	cout << endl;
	return 0;
}
















