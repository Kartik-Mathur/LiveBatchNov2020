// Knapsack
#include <iostream>
using namespace std;

int Knapsack(int *price, int *weight, int capacity, int n, int dp[][100]) {
	// Base case
	if (capacity == 0 or n == 0) {
		return dp[n][capacity] = 0;
	}
	if (dp[capacity][n] != -1) {
		return dp[n][capacity];
	}
	// Recursive case
	// 1. Include item
	int op1 = INT_MIN, op2 = INT_MIN;
	if (capacity >= weight[n - 1]) {
		op1 = price[n - 1] + Knapsack(price, weight, capacity - weight[n - 1], n - 1, dp);
	}
	// 2. Exclude item
	op2 = 0 + Knapsack(price, weight, capacity, n - 1, dp);

	return dp[n][capacity] = max(op1, op2);
}

int bottomUp(int *price, int *weight, int capacity, int N) {
	int dp[100][100] = {0};
	for (int n = 1 ; n <= N ; n++) {
		for (int c_cap = 1 ; c_cap <= capacity ; c_cap++) {
			int op1 = INT_MIN, op2 = INT_MIN;
			if (c_cap >= weight[n - 1]) {
				op1 = price[n - 1] + dp[n - 1][c_cap - weight[n - 1]];
			}
			op2 = 0 + dp[n - 1][c_cap];
			dp[n][c_cap] = max(op1, op2);
		}
	}
	for (int n = 0 ; n <= N ; n++) {
		for (int c_cap = 0 ; c_cap <= capacity ; c_cap++) {
			cout << dp[n][c_cap] << " ";
		}
		cout << endl;
	}
	return dp[N][capacity];
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int price[] = {4, 5, 8, 1};
	int weight[] = {1, 3, 5, 1};
	int n = sizeof(weight) / sizeof(int);
	int dp[100][100];
	memset(dp, -1, sizeof dp);
	int capacity = 5;
	cout << Knapsack(price, weight, capacity, n, dp);

	cout << endl;
	cout << bottomUp(price, weight, capacity, n) << endl;
	return 0;
}