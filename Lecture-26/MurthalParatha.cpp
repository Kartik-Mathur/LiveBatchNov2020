#include <iostream>
#include <climits>
using namespace std;
#define ll int

bool isPossible(ll *a, ll p , ll l, ll mid) {
	for (ll i = 0 ; i < l ; i++) {
		ll total_time_spent = 0;
		ll cm = 1;
		ll R = a[i];
		// R, 2*R, 3*R, 4*R ...... N*R
		// Total time will be R + 2R + 3R + 4R + ...... + NR
		// cm is 1,2,3,4 ..... N
		while (total_time_spent + cm * R <= mid) {
			p--;
			total_time_spent += cm * R;
			cm++;
			if (p == 0) {
				return true;
			}
		}
	}

	return p == 0;
}

ll MurthalParantha(ll *a, ll p , ll l) {
	ll s = 0, e = INT_MAX;
	ll ans = INT_MAX;

	while (s <= e) {
		ll mid = (s + e) / 2;
		if (isPossible(a, p, l, mid)) {
			ans = min(ans, mid);
			e = mid - 1;
		}
		else {
			s = mid + 1;
		}
	}
	return ans;
}


int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ll p, l;
	cin >> p >> l;

	ll* a = new ll[l];
	for (ll i = 0 ; i < l ; i++) {
		cin >> a[i];
	}

	cout << MurthalParantha(a, p, l) << endl;



	return 0;
}








