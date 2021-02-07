#include <iostream>
using namespace std;

int topDown(int i, int j, int cost[][4], int dp[][100]) {
	// base case
	if (i == 0 and j == 0) {
		return dp[i][j] = cost[i][j];
	}
	if (i < 0 || j < 0) {
		return INT_MAX;
	}
	if (dp[i][j] != -1) {
		return dp[i][j];
	}

	// recursive case
	int op1 = topDown(i - 1, j, cost, dp);
	int op2 = topDown(i, j - 1, cost, dp);

	return dp[i][j] = min(op1, op2) + cost[i][j];
}

int bottomUp(int a, int b, int cost[][4]) {
	int dp[100][100];

	dp[0][0] = cost[0][0];

	int sum = cost[0][0];
	for (int k = 1 ; k < 4 ; k++) {
		sum += cost[0][k];
		dp[0][k] = sum;
	}

	sum = cost[0][0];
	for (int k = 1 ; k < 4 ; k++) {
		sum += cost[k][0];
		dp[k][0] = sum;
	}

	for (int i = 1 ; i < 4 ; i++) {
		for (int j = 1 ; j < 4 ; j++) {
			dp[i][j] = cost[i][j] + min(dp[i - 1][j], dp[i][j - 1]);
		}
	}

	return dp[a][b];
}


int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int cost[][4] = {
		{2, 1, 3, 4},
		{3, 1, 1, 10},
		{1, 6, 1, 1},
		{2, 7, 4, 3}
	};

	int dp[100][100];
	memset(dp, -1, sizeof(dp));
	int i = 1, j = 3;

	cout << topDown(i, j, cost, dp) << endl;

	cout << bottomUp(i, j, cost);
	return 0;
}










