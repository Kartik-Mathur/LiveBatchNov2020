#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t>0){
      t--;
      char arr[100000];
      cin>>arr;
      int k;
      cin>>k;
      //to store frequency of different characters
      int freq[26]={0};
      //to store start of window
      int s=0;
      int ans=-1;
      //c stores different character in current substring
      int c=0;
      for(int i=0;arr[i]!='\0';i++){
          freq[arr[i]-'a']++;
          if(freq[arr[i]-'a']==1){
              c++;
          }
          while(c>k){
              freq[arr[s]-'a']--;
              if(freq[arr[s]-'a']==0)
              c--;
              s++;
          }
          if(c==k){
             ans =max(ans,i-s+1);
          }
          
      }
      
      cout << ans << endl;
      
      
      
   
    
    
  }
}
