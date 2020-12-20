#include <iostream>
using namespace std;

int multiply(int a,int b){
	// base case
	if(b == 0) return 0;

	// recursive case
	int ChotaAns = multiply(a,b-1);
	int BadaAns = a+ChotaAns;
	return BadaAns;
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int a,b;
	cin>>a>>b;
	cout<<multiply(a,b);

	cout<<endl;
	return 0;
}