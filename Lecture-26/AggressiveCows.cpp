// AggressiveCows
#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;
#define ll long long int

bool CowsPlaceHoPai(ll *a, ll N, ll C, ll mid) {
	ll PlacedCows = 1;
	ll PrevCowIndx = 0;

	for (ll i = 1 ; i < N ; i++) {
		if (a[i] - a[PrevCowIndx] >= mid) {
			// We can place another cow here
			PlacedCows++;
			PrevCowIndx = i;
			if (PlacedCows == C) {
				return true;
			}
		}
	}
	return false;
}

ll aggressiveCows(ll *a, ll N, ll C) {
	ll s = 0;
	ll e = INT_MAX;

	ll ans = -1;
	while (s <= e) {
		ll mid = (s + e) / 2;
		if (CowsPlaceHoPai(a, N, C, mid)) {
			s = mid + 1;
			ans = max(ans, mid);
		}
		else {
			e = mid - 1;
		}
	}
	return ans;
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ll n, c;
	cin >> n >> c;
	ll *a = new ll[n];

	for (ll i = 0 ; i < n ; i++) {
		cin >> a[i];
	}

	sort(a, a + n);

	cout << aggressiveCows(a, n, c) << endl;

	return 0;
}








