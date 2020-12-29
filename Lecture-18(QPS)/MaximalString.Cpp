#include <bits/stdc++.h>
using namespace std;

//it will store maximal string
string res;


void maximal_string(string s,int i,int k){
	//base case
	int n=s.length();
	if(k==0 || i==n){
         res=max(res,s);
         return;
	}

  
	//try all index for swapping
	for(int j=i+1;j<n;j++){
		           swap(s[i],s[j]);
           maximal_string(s,i+1,k-1);
            //backtracking as all swaps are with respect to original string
            swap(s[i],s[j]);
	}
   //when we don't swap ith index
	   maximal_string(s,i+1,k);
	

}



int main(){
	string s;
	cin>>s;

	res=s;
	int k;
	cin>>k;
  maximal_string(s,0,k);
  cout << res << endl;






}