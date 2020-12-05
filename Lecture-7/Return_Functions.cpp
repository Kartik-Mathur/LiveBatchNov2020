// Return_Functions.cpp
#include <iostream>
using namespace std;

int multiply(int x,int y){
	// int ans = x*y;
	return x*y; // To return value from a function
	// we use return statement
}

bool isEven(int n){
	if(n%2 == 0){
		return true;
	}
	else{
		return false;
	}
}

int main(){
	
	int a,b;
	cin>>a>>b;

	// cout<<a*b<<endl;	
	// cout<<multiply(a,b)<<endl;
	int ans = multiply(a,b);
	cout<<ans<<endl;

	// If I want to use the result that was given by multiply
	cout<<ans*10<<endl;
	bool val = isEven(a);
	if( val == true){
		cout<<"val is even"<<endl;
	}
	else{
		cout<<"val is odd"<<endl;
	}

	return 0;
}