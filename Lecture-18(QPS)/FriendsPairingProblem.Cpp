#include <bits/stdc++.h>
using namespace std;


int noOfWays(int n){
	//base case
	if(n==1 || n==2)
		return n;

	int ans =0;
	//nth single
	ans+=noOfWays(n-1);

	//nth pair
	//number of ways to select other person-(n-1)
	ans+=((n-1)*noOfWays(n-2));
	return ans;

}



int main(){

	int n;
	cin>>n;

	cout << noOfWays(n) << endl;







}