#include <iostream>
#include <climits>
using namespace std;

int ans = INT_MAX;

void fun(int a, int b, int steps) {
	// base case
	if (a == 1 and b == 1) {
		ans = min(ans, steps);
		return;
	}

	// recursive case
	if (a - b > 0) fun(a - b, b, steps + 1);
	if (b - a > 0) fun(a, b - a, steps + 1);

}

void solve(int n) {
	if (n == 1) {
		cout << 0 << endl;
		return;
	}
	for (int x = 1; x < n ; x++) {
		fun(x, n - x, 1);
	}

	cout << ans << endl;
}

int main() {

	int n;
	cin >> n;

	solve(n);

	return 0;
}