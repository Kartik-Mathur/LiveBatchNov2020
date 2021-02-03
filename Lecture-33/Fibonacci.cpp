#include <iostream>
using namespace std;

int fibo(int n) {
	if (n == 0 || n == 1) {
		return n;
	}

	return fibo(n - 1) + fibo(n - 2);
}

int topDown(int n, int *dp) {
	// base case
	if (n == 0 || n == 1) {
		return n;
	}

	// Check if fun(n) is already calculated?
	if (dp[n] != -1) {
		return dp[n];
	}

	// recursive case
	// int ans = fun(n - 1, dp) + fun(n - 2, dp);
	// dp[n] = ans; // Write it in your notebook before you
	// return the answer
	return dp[n] = topDown(n - 1, dp) + topDown(n - 2, dp);
}

int BottomUp(int n) {
	int *dp = new int[n + 1];

	// Initialize
	dp[0] = 0;
	dp[1] = 1;

	for (int i = 2; i <= n ; i++) {
		dp[i] = dp[i - 1] + dp[i - 2];
	}
	int ans = dp[n];
	delete []dp;
	return ans;
}


int main() {

// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif
	int n;
	cin >> n;
	int *dp = new int[n + 1];
	for (int i = 0 ; i <= n ; i ++) {
		dp[i] = -1;
	}

	cout << topDown(n, dp) << endl;
	cout << BottomUp(n) << endl;
	cout << fibo(n) << endl;
	return 0;
}










