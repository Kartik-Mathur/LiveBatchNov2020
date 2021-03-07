#include <iostream>
using namespace std;

#define F(a,n) for(int i = 0 ;i < n ; i++){cin>>a[i];}

int main() {

	int n;
	cin >> n;
	int *arr = new int[n];

	F(arr, n);

	int ans[2] = {0};
	int s = 0 , e = n - 1;

	int i = 0;

	while (s <= e) {
		if (arr[e] >= arr[s]) {
			ans[i] += arr[e--];
		}
		else {
			ans[i] += arr[s++];
		}

		i = 1 - i;
	}
	cout << ans[0] << " " << ans[1] << endl;
	return 0;
}
















