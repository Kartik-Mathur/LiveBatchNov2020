// CountWays
#include <iostream>
using namespace std;

int RatWays(int n,int m){
	// base case
	if(n == 0 and m == 0){
		return 1;
	}
	if(n<0||m<0){
		return 0;
	}

	// recursive case
	return RatWays(n-1,m)+RatWays(n,m-1);
}

int main(){
	int n,m;
	cin>>n>>m;

	cout<<RatWays(n,m)<<endl;

	return 0;
}