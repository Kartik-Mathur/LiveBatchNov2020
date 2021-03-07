// FindAllAnagrams.cpp
class Solution {
public:
	bool compare(int *a, int *b) {
		for (int i = 0 ; i < 26 ; i++) {
			if (a[i] != b[i]) {
				return false;
			}
		}
		return true;
	}

	void solve(string &s, string &p, vector<int> &ans) {
		int freqp[26] = {0}, freqs[26] = {0};

		for (int i = 0 ; i < p.length() ; i++) {
			freqp[p[i] - 'a']++;
		}

		for (int i = 0 ; i < s.length() ; i++) {
			freqs[s[i] - 'a']++;

			if (i >= p.length()) {
				freqs[s[i - p.length()] - 'a']--;
			}

			if (compare(freqs, freqp)) {
				ans.push_back(i - p.length() + 1);
			}
		}
	}

	vector<int> findAnagrams(string s, string p) {
		vector<int> ans;
		if (p.length() > s.length()) return ans;

		solve(s, p, ans);

		return ans;
	}
};