// MinimumCoins.cpp
#include <iostream>
using namespace std;

int solve(int amount, int *coins, int n) {
	// base case
	if (amount == 0) {
		return 0;
	}

	// recursive case
	int ans = INT_MAX;
	for (int i = 0 ; i < n ; i++) {
		if (amount - coins[i] >= 0) {
			int ChotiAmount = amount - coins[i];
			int ChotaAns = solve(ChotiAmount, coins, n);
			if (ChotaAns != INT_MAX and ChotaAns < ans) {
				ans = ChotaAns + 1;
			}
		}
	}

	return ans;
}

int topDown(int amount, int *coins, int n, int *dp) {
	// base case
	if (amount == 0) {
		return dp[amount] = 0;
	}
	// Check
	if (dp[amount] != -1) {
		return dp[amount];
	}

	// recursive case
	int ans = INT_MAX;
	for (int i = 0 ; i < n ; i++) {
		if (amount - coins[i] >= 0) {
			int ChotiAmount = amount - coins[i];
			int ChotaAns = topDown(ChotiAmount, coins, n, dp);
			if (ChotaAns != INT_MAX and ChotaAns < ans) {
				ans = ChotaAns + 1;
			}
		}
	}
	// store
	return dp[amount] = ans;
}

int bottomUp(int amount, int *coins, int n) {
	int *dp = new int[amount + 1];
	for (int i = 0 ; i <= amount ; i++) {
		dp[i] = INT_MAX;
	}

	dp[0] = 0;

	for (int rupay = 1; rupay <= amount ; rupay++) {
		for (int i = 0 ; i < n ; i++) {
			if (rupay - coins[i] >= 0) {
				int chtAmt = rupay - coins[i];
				dp[rupay] = min(dp[chtAmt] + 1, dp[rupay]);
			}
		}
	}
	// for (int i = 0 ; i <= amount ; i++) {
	// 	cout << dp[i] << ' ';
	// }
	// cout << endl;
	return dp[amount];
}

int main() {

// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

	int coins[] = {1, 3, 5, 10};
	int n = sizeof(coins) / sizeof(int);

	int dp[10000];
	memset(dp, -1, sizeof(dp));

	int amount;
	cin >> amount;

	cout << topDown(amount, coins, n, dp) << endl;
	cout << bottomUp(amount, coins, n) << endl;
	cout << solve(amount, coins, n) << endl;



	cout << endl;
	return 0;
}




