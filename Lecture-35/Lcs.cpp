// LCS.cpp
#include <iostream>
using namespace std;
char s1[100], s2[100];

int lcs(int i, int j) {
	// base case
	if (s1[i] == '\0' || s2[j] == '\0') {
		return 0;
	}

	// recursive case
	if (s1[i] == s2[j]) {
		return 1 + lcs(i + 1, j + 1);
	}
	else {
		return max(lcs(i + 1, j), lcs(i, j + 1));
	}
}

int bottomUp() {
	int dp[100][100] = {0};
	int n = strlen(s1);
	int m = strlen(s2);
	for (int i = 1 ; i <= n ; i++) {
		for (int j = 1 ; j <= m ; j++) {
			if (s1[i - 1] == s2[j - 1]) {
				dp[i][j] = 1 + dp[i - 1][j - 1];
			}
			else {
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
			}
		}
	}

	for (int i = 0 ; i <= n ; i++) {
		for (int j = 0 ; j <= m ; j++) {
			cout << dp[i][j] << " ";
		}
		cout << endl;
	}

	return dp[n][m];
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	cin >> s1 >> s2;
	cout << lcs(0, 0) << endl;
	cout << bottomUp() << endl;
	return 0;
}