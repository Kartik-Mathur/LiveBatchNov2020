// FastPower
#include <iostream>
using namespace std;

int power(int x,int n){
	if(n == 0){
		return 1;
	}

	return x*(power(x,n-1));
}

int FastPower(int x,int n){
	// base case
	if(n == 0){
		return 1;
	}

	int ChotaAns = FastPower(x,n/2);
	if((n&1)){ // n is odd
		return ChotaAns*ChotaAns*x;
	}
	else{ // n is even
		return ChotaAns*ChotaAns;
	}
}

int main(){
	int x,n;
	cin>>x>>n;

	cout<<power(x,n)<<endl;
	cout<<FastPower(x,n)<<endl;

	
	return 0;
}