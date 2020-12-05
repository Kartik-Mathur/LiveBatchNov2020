// PassingArrays
#include <iostream>
using namespace std;

// void PrintArray(int a[9],int n){
void PrintArray(int a[],int n){
	for(int i = 0 ; i < n ; i ++){
		cout<<a[i]<<' ';
	}	
	cout<<endl;
}

// void UpdateArray(int a[9],int n){
void UpdateArray(int a[],int n){
	for(int i = 0 ; i < n ; i ++){
		a[i] = a[i]+1;
	}	
}

int main(){
	
	int a[9] = {1,7,6,5,3,2,10,11,12};
	int n = sizeof(a)/sizeof(int);

	// Arrays are by default passed by reference
	PrintArray(a,n); // Passing of array is done via name of array
	UpdateArray(a,n);
	PrintArray(a,n);
	UpdateArray(a,n);
	PrintArray(a,n);
	
	return 0;
}