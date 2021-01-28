// GenerateBalancedParanthesis
#include <iostream>
using namespace std;

void Solve(char *arr, int o, int c, int i, int n) {
	// base case
	if (i == 2 * n) {
		arr[i] = '\0';
		cout << arr << endl;
		return;
	}
	// recursive case
	// check can we add an opening bracket
	if (o < n) {
		// Add '('
		arr[i] = '(';
		Solve(arr, o + 1, c, i + 1, n);
	}
	// check can we add a closing bracket
	if (c < o) {
		// Add ')'
		arr[i] = ')';
		Solve(arr, o, c + 1, i + 1, n);
	}

}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;
	char arr[100];
	Solve(arr, 0, 0, 0, n);


	return 0;
}







