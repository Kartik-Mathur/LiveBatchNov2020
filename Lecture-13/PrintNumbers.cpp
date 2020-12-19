// PrintNumbers
#include <iostream>
using namespace std;

void PrintDec(int n){
	// base case
	if(n == 0){
		return;
	}
	// recursive case
	// cout<<n<<' ';
	PrintDec(n-1);
	cout<<n<<' ';
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n;
	cin>>n;

	PrintDec(n);


	cout<<endl;
	return 0;
}