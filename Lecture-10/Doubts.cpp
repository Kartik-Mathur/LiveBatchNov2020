// Doubts.cpp
#include <iostream>
using namespace std;

void Print(int a[],int n){
	int x = sizeof(a)/sizeof(int); // sizeof(a)->8
	for(int i = 0 ; i < x ; i++){
		cout<<a[i]<<' ';
	}
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int arr[]={1,2,3,4,5};
	int n = sizeof(arr)/sizeof(int);

	Print(arr,n);

	cout<<endl;
	return 0;
}