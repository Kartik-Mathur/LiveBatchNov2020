// StringToInt
#include <iostream>
#include <cstring>
using namespace std;
int StringToInt(char *a, int n){
	// base case
	if(n == 0){
		return 0;
	}
	// recursive case
	int last_digit = a[n-1] - '0';
	return StringToInt(a,n-1)*10 + last_digit;
	// int ChotaInteger = StringToInt(a,n-1);
	// int BadaAns = ChotaInteger*10 + last_digit;
	// return BadaAns;
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	char a[100];
	cin>>a;
	// int a = '5'-'0';
	// cout<<a<<endl;

	int x = StringToInt(a,strlen(a));
	cout<<x<<endl;
	cout<<x*10+5;
	// cout<<endl;
	return 0;
}