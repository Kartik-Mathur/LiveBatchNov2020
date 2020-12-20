#include <iostream>
using namespace std;

void BubbleSort(int *a,int n,int i){
	// base case
	if(i == n-1){
		return;
	}
	// recursive case
	for(int j = 0 ; j < n - 1 - i ; j++){
		if(a[j]>a[j+1]){
			swap(a[j],a[j+1]);
		}
	}
	// when j will become n-1-i
	BubbleSort(a,n,i+1);
}

void BubbleSort1(int *a,int n,int i,int j){
	// base case
	if(i == n-1){
		return;
	}
	// recursive case
	if(j == n-1-i){
		BubbleSort1(a,n,i+1,0);
	}
	else{
		if(a[j]>a[j+1]){
			swap(a[j],a[j+1]);
		}
		BubbleSort1(a,n,i,j+1);
	}
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int a[]={5,4,6,7,8,4,3,2,1,0};
	int n = sizeof(a)/sizeof(int);

	for(int i = 0 ; i < n ; i++){
		cout<<a[i]<<' ';
	}
	cout<<endl;
	BubbleSort1(a,n,0,0);
	for(int i = 0 ; i < n ; i++){
		cout<<a[i]<<' ';
	}
	cout<<endl;
	return 0;
}