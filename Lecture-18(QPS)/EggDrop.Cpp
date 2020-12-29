#include <bits/stdc++.h>
using namespace std;


int eggdrop(int n,int k){
	//base case
	if(k==1)
		return n;
	if(n==0 || n==1)
		return n;
   
   int ans =INT_MAX;

	//try all floor as first floor for current egg
   for(int i=1;i<=n;i++){
   	//break
   	//eggdrop(i-1,k-1)

   		//not break
   	//eggdrop(n-i,k);
   
     //we don't have control over whether egg breaks or not from ith floor hence we take max
   int v1= max(eggdrop(i-1,k-1),eggdrop(n-i,k));

   //we have control over which floor we use for first egg hence we take min
   ans =min(ans,v1+1);

   
   }

   return ans;

}



int main(){

	int n;
	cin>>n;
    
    int k;
    cin>>k;
	cout << eggdrop(n,k) << endl;







}