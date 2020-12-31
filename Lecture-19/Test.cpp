#include <iostream>
using namespace std;

int* CreateArray(int n){
	int *arr = new int[n]; // Runtime memory allocation, Dynamic memory allocation
	int a = 10; // a = 10, this is only present inside CreateArray
	// When this function will return, a bucket will not exists anymore, 
	// that's why jo bucket hai hi nahi function ke bahar available,
	// why do you want to return its address?
	for(int i = 0 ; i < n ; i ++){
		arr[i] = i+1;
	}	
	// delete  []arr;
	return arr;
}

int main(){
	// Deep Diving into DMA
	int n;
	cin>>n;
	int *a1 = CreateArray(n);
	for(int i = 0 ; i < n ; i ++){
		cout<<a1[i]<<' ';
	}
	cout<<endl;

	// Taking input of an array
	// int arr1[10000]; // Compilation ke time memory mill jaegi
	// int n;
	// cin>>n; // Runtime input
	// int *arr = new int[n]; // Runtime memory allocation, Dynamic memory allocation

	// for(int i = 0 ; i < n ; i ++){
	// 	arr[i] = i*10;
	// }
	// for(int i = 0 ; i < n ; i ++){
	// 	cout<<arr[i]<<' ';
	// }
	// cout<<endl;

	// We can create primitive datatypes in this manner, char,double,int,float,bool
	int *a = new int;
	*a = 10;

	cout<<"Value of a "<<*a<<endl;
	
	float *f = new float;
	*f = 10.11;

	cout<<"Value of f "<<*f<<endl;

	// Free up the memory space
	delete a; // will free the memory space where a is pointing at
	a = NULL;
	delete f;
	f = NULL;
	cout<<endl;

	delete []a1;
	a1 = NULL;



	return 0;
}