// Doubts.cpp
#include <iostream>
using namespace std;

void SelectionSort(int *a,int n,int i){
	if(i == n-1){
		return;
	}

	int mi = i;
	for(int j = i+1 ; j <= n-1 ; j++){
		if(a[j]<a[mi]){
			mi = j;
		}
	}
	swap(a[i],a[mi]);
	SelectionSort(a,n,i+1);	
}

int main(){
	// int a[]={3,4,1,0,9,10,-1};
	// int n = sizeof(a)/sizeof(int);

	string s;
	char a[100]="Hello";
	s = a;
	cout<<s<<endl;

	cout<<endl;
	return 0;
}