// NStairs
#include <iostream>
using namespace std;

int NStairs(int n){ // for k = 3
	// base case
	if(n == 0){
		return 1;
	}

	if(n<0){
		return 0;
	}
	
	// recursive case
	return NStairs(n-1)+NStairs(n-2)+NStairs(n-3);
}

int solve(int n,int k){
	// base case
	if(n == 0){
		return 1;
	}

	if(n<0){
		return 0;
	}

	// recurive case
	int ans = 0;
	for(int i = 1 ; i <= k ; i++){
		ans += solve(n-i,k);
	}
	return ans;
}

int main(){
	
	int n;
	cin>>n;

	cout<<NStairs(n)<<endl;;
	cout<<solve(n,3);


	cout<<endl;
	return 0;
}