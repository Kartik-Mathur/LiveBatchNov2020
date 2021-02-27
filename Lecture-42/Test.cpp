// https://leetcode.com/problems/two-sum/
class Solution {
	unordered_map<string, bool> h;
	// set<string> s;
	int solve(string bW, string eW, vector<string>& wL) {
		queue<string> q;
		q.push(bW);
		int level = 0;

		while (!q.empty()) {
			int n = q.size();
			level++;
			while (n--) {
				auto word = q.front();
				q.pop();
				for (int i = 0 ; i < word.length() ; i++) {
					string temp = word;
					for (char ch = 'a'; ch <= 'z' ; ch++) {
						temp[i] = ch;
						if (temp == word) {
							continue;
						}
						else if (temp == eW) {
							return level + 1;
						}
						// else if(s.find(temp)!=s.end()){
						else if (h[temp] == true) {
							q.push(temp);
							// s.erase(temp);
							h[temp] = false;
						}
					}
				}
			}
		}

		return 0;
	}
public:
	int ladderLength(string beginWord, string endWord, vector<string>& wordList) {

		bool kyaEndWordHai = false;
		for (auto word : wordList) {
			// s.insert(word);
			h[word] = true;
			if (word == endWord) kyaEndWordHai = true;
		}
		if (!kyaEndWordHai) return 0;

		return solve(beginWord, endWord, wordList);
	}
};


class Solution {
public:
	static bool cmp(vector<int> &a, vector<int> &b) {
//     a[0] and b[0] represents: start time
		return a[0] == b[0] ? a[1] < b[1] : a[0] < b[0];
	}

	int minMeetingRooms(vector<vector<int> >& intervals) {
		// [
		//     [2,15],
		//     [4,9],
		//     [9,29]
		// ]
		priority_queue<int, vector<int>, greater<int> > q;

		sort(intervals.begin(), intervals.end(), cmp);
		for (int i = 0 ; i < intervals.size() ; i++) {
			cout << intervals[i][0] << " " << intervals[i][1] << endl;
		}

		q.push(intervals[0][1]);

		for (int i = 1 ; i < intervals.size() ; i++) {
			auto x = intervals[i];
			if (q.top() > x[0]) {
				q.push(x[1]);
			}
			else {
				q.pop();
				q.push(x[1]);
			}
		}

		return q.size();
	}

};