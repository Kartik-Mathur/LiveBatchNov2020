// Power
#include <iostream>
using namespace std;

int Power(int x,int n){
	// base case
	if(n == 0){
		return 1;
	}
	
	// recursive case
	return x*Power(x,n-1);
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif	
	
	int x,n;
	cin>>x>>n;

	cout<<Power(x,n);

	cout<<endl;
	return 0;
}