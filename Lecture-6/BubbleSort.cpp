// BubbleSort
#include <iostream>
using namespace std;

int main(){
	
	int a[]={5,4,2,3,1,0,-2,-3,-1};
	int n = sizeof(a)/sizeof(int);

	cout<<"Before Sorting ";
	for(int i = 0 ; i < n ; i++){
		cout<<a[i]<<' ';
	}
	cout<<endl;


	// Bubble Sort
	for(int i = 0 ; i < n-1 ; i++){
		for(int j = 0 ; j <= n-2-i ; j++){
			if(a[j]>a[j+1]){
				// swap a[j] and a[j+1]
				// int temp = a[j];
				// a[j] = a[j+1];
				// a[j+1] = temp;
				a[j] = (a[j]+a[j+1])-(a[j+1] = a[j]);
			}
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