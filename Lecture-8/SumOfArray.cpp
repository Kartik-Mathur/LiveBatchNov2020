// SumOfArray
#include <iostream>
using namespace std;

int SumOfArray(int a[],int n){
	int ans = 0;
	for(int i = 0 ; i < n ; i++){
		ans += a[i];
	}

	return ans;
}

void TakeInput(int a[100],int n){

	for(int i = 0 ; i < n ; i ++){
		cin>>a[i];
	}	
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif	

	// int a[] = {1,2,3,4,5,6,7,8,9,10};
	// int n = sizeof(a)/sizeof(int);

	int a[100],n; 
	cin>>n;
	TakeInput(a,n);
	cout<<SumOfArray(a,n);

	cout<<endl;
	return 0;
}