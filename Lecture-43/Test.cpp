#include <iostream>
#include <vector>
using namespace std;
#define pb push_back

int evil(vector<int> v, int bit) {
	if (v.size() == 0 || bit < 0) {
		return 0;
	}

	vector<int> zeros, ones;

	int mask = (1 << bit);
	for (int i = 0 ; i < v.size() ; i++) {
		if ((v[i]&mask) == 0) {
			zeros.pb(v[i]);
		}
		else {
			ones.pb(v[i]);
		}
	}

	if (ones.size() == 0) {
		// No number is there where we have MSB equals to 1
		// result can have 0 at MSB bit
		return evil(zeros, bit - 1) + 0;
	}
	if (zeros.size() == 0) {
		// No number is there where we have MSB equals to 0
		// result can have 0 at MSB bit
		return evil(ones, bit - 1) + 0;
	}
	// some numbers have MSB as 1 and other have MSB as 0, so its not possible to keep 0 at MSB position
	// in result
	return min(evil(zeros, bit - 1), evil(ones, bit - 1)) + (1 << bit);

}

int main() {

	int n;
	cin >> n;

	vector<int> v;

	for (int i = 0 ; i < n ; i++) {
		int x; cin >> x;
		v.pb(x);
	}

	cout << evil(v, 30) << endl;

	return 0;
}












