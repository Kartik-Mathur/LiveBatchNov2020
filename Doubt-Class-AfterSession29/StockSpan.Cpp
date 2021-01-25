#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Function to calculate span
// price[]: price array in input
// n: size of array
vector <int> calculateSpan(int price[], int n)
{
   vector<int>res;
   for(int i=0;i<n;i++)
   res.push_back(1);
   
   stack<int>s;
   s.push(0);
   for(int i=1;i<n;i++){
       //remove smaller than current from stack
       while(!s.empty() && price[s.top()]<=price[i])
       s.pop();
       //if stack is empty then price is less on all previous day
       if(s.empty())
       res[i]=i+1;
       else{
           //else s.top() is greater than current price
           res[i]=i-s.top();
       }
       s.push(i);
   }
   return res;
}


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int i,a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        
        vector <int> s = calculateSpan(a, n);
        
        for(i=0;i<n;i++)
        {
            cout<<s[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
  // } Driver Code Ends