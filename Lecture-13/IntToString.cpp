// IntToString
#include <iostream>
using namespace std;

string s[10]={
	"zero","one","two","three","four","five","six","seven","eight","nine"
};

void IntToString(int n){
	// base case
	if(n == 0){
		return;
	}

	// recursive case
	int digit = n%10;
	// cout<<s[digit]<<' ';
	IntToString(n/10);
	cout<<s[digit]<<' ';
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif	
	
	int x,n;
	cin>>n;

	IntToString(n);

	cout<<endl;
	return 0;
}