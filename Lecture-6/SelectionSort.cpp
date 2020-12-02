#include <iostream>
using namespace std;

int main(){
	
	int a[]={5,4,2,3,1,0,-2,-3,-1};
	int n = sizeof(a)/sizeof(int);

	// int a[1000];
	// int n;
	// cin>>n;

	// for(int i = 0 ; i < n ; i++){
	// 	cin>>a[i];
	// }
	
	cout<<"Before Sorting ";
	for(int i = 0 ; i < n ; i++){
		cout<<a[i]<<' ';
	}
	cout<<endl;
	// Selection Sort
	for(int i = 0 ; i < n-1 ; i++){
		int mi = i;
		for(int j = i+1 ; j <= n-1 ; j++){
			if(a[j]<a[mi]){
				mi = j;
			}
		}
		// swap a[i],a[mi]
		swap(a[i],a[mi]);
	}

	cout<<"After Sorting ";
	for(int i = 0 ; i < n ; i++){
		cout<<a[i]<<' ';
	}
	cout<<endl;


	cout<<endl;
	return 0;
}