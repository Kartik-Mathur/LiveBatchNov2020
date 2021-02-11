//Question Link:https://leetcode.com/problems/asteroid-collision/



class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int>res;
        int n=asteroids.size();
        stack<int>s;
        for(int i=0;i<n;i++){
            if(s.empty() || asteroids[i]>0)
                s.push(asteroids[i]);
            else {
                bool add=true;
              while(!s.empty() && s.top()>0){
                  int x=abs(asteroids[i]);
                  if(x<s.top()){
                      
                      add=false;
                      break;
                  }
                  if(x==s.top()){
                      add=false;
                      s.pop();
                      break;
                  }
                  s.pop();
                  
                      
              }
                if(add)
                   s.push(asteroids[i]);
                
            }
            
            cout << i << " " << s.size() << endl;
        }
        
        while(!s.empty()){
            res.push_back(s.top());
            s.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};