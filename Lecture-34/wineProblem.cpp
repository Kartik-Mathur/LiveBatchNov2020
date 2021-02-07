#include <iostream>
using namespace std;

int solve(int l, int r, int *price, int day, int dp[][100]) {
	// base case
	if (l > r) {
		return dp[l][r] = 0;
	}

	if (dp[l][r] != -1) {
		return dp[l][r];
	}

	// recursive case
	int op1 = day * price[l] + solve(l + 1, r, price, day + 1, dp);
	int op2 = day * price[r] + solve(l, r - 1, price, day + 1, dp);

	return dp[l][r] = max(op1, op2);
}

int bottomUp(int *price, int n) {
	int dp[100][100] = {0};
	// Iterate on the diagonal to fill the values
	// for selling single bottles
	for (int i = 0 ; i < n ; i++) {
		dp[i][i] = n * price[i];
	}

	for (int i = n - 2 ; i >= 0 ; i--) {
		for (int j = 0 ; j < n ; j++) {
			if (i < j) {
				int day = n - (j - i);
				int op1 = day * price[i] + dp[i + 1][j];
				int op2 = day * price[j] + dp[i][j - 1];

				dp[i][j] = max(op1, op2);
			}
		}
	}

	for (int i = 0 ; i < n ; i++) {
		for (int j = 0 ; j < n ; j++) {
			cout << dp[i][j] << " ";
		}
		cout << endl;
	}
	return dp[0][n - 1];
}


int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int price[] = {2, 3, 5, 1, 4};
	int n = sizeof(price) / sizeof(int);
	int dp[100][100] = {0};

	for (int i = 0 ; i < 100 ; i++) {
		for (int j = 0 ; j < 100 ; j++) {
			dp[i][j] = -1;
		}
	}

	cout << solve(0, n - 1, price, 1, dp) << endl;
	cout << bottomUp(price, n) << endl;

	return 0;
}