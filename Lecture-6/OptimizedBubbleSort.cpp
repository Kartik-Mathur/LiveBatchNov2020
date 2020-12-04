// OptimizedBubbleSort
// BubbleSort
#include <iostream>
using namespace std;

int main(){
	
	// int a[]={5,4,2,3,1,0,-2,-3,-1};
	// int n = sizeof(a)/sizeof(int);

	int a[1000];
	int n;
	cin>>n;

	for(int i = 0 ; i < n ; i++){
		cin>>a[i];
	}
	
	cout<<"Before Sorting ";
	for(int i = 0 ; i < n ; i++){
		cout<<a[i]<<' ';
	}
	cout<<endl;
	// Bubble Sort
	for(int i = 0 ; i < n-1 ; i++){
		int cnt = 0;
		for(int j = 0 ; j <= n-2-i ; j++){
			if(a[j]>a[j+1]){
				cnt++;
				a[j] = (a[j]+a[j+1])-(a[j+1] = a[j]);
			}
		}
		
		if(cnt == 0){
			// this means no swapping took place
			break;
		}
	}

	cout<<"After Sorting ";
	for(int i = 0 ; i < n ; i++){
		cout<<a[i]<<' ';
	}
	cout<<endl;


	cout<<endl;
	return 0;
}