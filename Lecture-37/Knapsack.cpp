// Knapsack
#include <iostream>
using namespace std;

int Knapsack(int *price, int *weight, int capacity, int n, int dp[][100]) {
	// Base case
	if (capacity == 0 or n == 0) {
		return dp[capacity][n] = 0;
	}
	if (dp[capacity][n] != -1) {
		return dp[capacity][n];
	}
	// Recursive case
	// 1. Include item
	int op1 = INT_MIN, op2 = INT_MIN;
	if (capacity >= weight[n - 1]) {
		op1 = price[n - 1] + Knapsack(price, weight, capacity - weight[n - 1], n - 1, dp);
	}
	// 2. Exclude item
	op2 = 0 + Knapsack(price, weight, capacity, n - 1, dp);

	return dp[capacity][n] = max(op1, op2);
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int price[] = {13, 13, 16};
	int weight[] = {7, 7, 8};
	int n = sizeof(weight) / sizeof(int);
	int dp[100][100];
	memset(dp, -1, sizeof dp);
	int capacity = 14;
	cout << Knapsack(price, weight, capacity, n, dp);

	cout << endl;
	return 0;
}