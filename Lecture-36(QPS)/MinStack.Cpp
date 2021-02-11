//Question Link:https://leetcode.com/problems/min-stack/


class MinStack {
    stack<long long int>s;
    long long  int minEle;
public:
    /** initialize your data structure here. */
    MinStack() {
        minEle=-1;
    }
    
    void push(int x) {
          if (s.empty()) 
        { 
            minEle = x; 
            s.push(x); 
          
            return; 
        } 
    
        
        if (x < minEle) 
        {   long long z= x-minEle+x;
            s.push(z); 
            minEle = x; 
        } 
  
        else
           s.push(x); 
    }
    
    void pop() {
        if (s.empty()) 
        { 
            
            return; 
        } 
  
      
        long long int t = s.top(); 
        s.pop(); 
  
        
        if (t < minEle) 
        { 
            
            minEle = 2*minEle - t; 
        } 
  
        
    }
    
    int top() {
          if (s.empty()) 
        { 
        return -1;
           
        } 
  
        long long  int t = s.top(); // Top element. 
  
       
  
        // If t < minEle means minEle stores 
        // value of t. 
        if(t < minEle)
            return minEle;
        else
            return t;
        
    }
    
    int getMin() {
        return minEle;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */