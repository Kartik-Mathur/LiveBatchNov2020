// ValentineMagic
#include <iostream>
#include <cmath>
#include <climits>
#include <algorithm>
using namespace std;
#define ll long long
ll chocolates[5005], candies[5005], dp[5005][5005];

ll magic(ll i, ll j) {
	// base case
	if (i == 0) {
		return dp[i][j] = 0;
	}
	if (j == 0) {
		return dp[i][j] = INT_MAX;
	}
	if (dp[i][j] != -1) {
		return dp[i][j];
	}
	// recursive case
	ll op1 = INT_MAX, op2 = INT_MAX;
	op1 = magic(i, j - 1);
	op2 = magic(i - 1, j - 1) + abs(chocolates[i - 1] - candies[j - 1]);
	return dp[i][j] = min(op1, op2);
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ll n, m;
	cin >> n >> m;

	for (ll i = 0 ; i < n ; i++) {
		cin >> chocolates[i];
	}
	for (ll i = 0 ; i < m ; i++) {
		cin >> candies[i];
	}
	sort(chocolates, chocolates + n);
	sort(candies, candies + m);
	memset(dp, -1, sizeof(dp));
	cout << magic(n, m) ;

	return 0;
}










