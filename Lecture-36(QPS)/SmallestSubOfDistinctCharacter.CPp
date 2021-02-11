//Question Link:https://leetcode.com/problems/smallest-subsequence-of-distinct-characters/


class Solution {
public:
    string smallestSubsequence(string text) {vector<int> cnt(256), v(256);
        for(char c : text)
            ++cnt[c];
        stack<char>s;
        for(char c : text) {
            --cnt[c];
            //already in solution 
            if(v[c])
                continue;
            v[c] = 1;
            while(s.size()>0 && cnt[s.top()] && c < s.top()){
                v[s.top()] = 0;
              s.pop();
            }
            s.push(c);
         
        }
                                             
                                             cout<<s.size();
       string ans ="";
       while(!s.empty()){
           ans+=s.top();
           s.pop();
           
       }
        reverse(ans.begin(),ans.end());
                                             return ans;
    }
};