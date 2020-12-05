// nCr.cpp
#include <iostream>
using namespace std;
// int fact(int n); // Forward Declaration

int fact(int n){
	int ans = 1;
	for(int i = 1 ; i <= n ; i++){
		ans *= i;
	}
	return ans;
}

int nCr(int n,int r){
	// int factn = fact(n);
	// int factr = fact(r);
	// int fnr = fact(n-r);

	// int ans = factn/(factr*fnr);
	// return ans;
	return fact(n)/(fact(r)*fact(n-r));
}

int main(){

	int n,r;
	cin>>n>>r;

	// cout<<fact(n)<<endl;
	cout<<nCr(n,r)<<endl;

	return 0;
}


