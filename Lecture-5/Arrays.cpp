// Arrays
#include <iostream>
using namespace std;

int main(){
	// Initialization of arrays
	// int a[50] = {10,20,30,40,50}; // 1st way of initialization
	// int a[] = {10,20,30,40,50,60,70,80,90,100}; // 2nd way of initialization, 
	// we can skip the size only and only while initialization
	
	int a[100] = {100}; // We need to mention size here
	// cout<<"Enter the value of n(max:1000)";
	int n;
	// cin>>n;

	// for(int i = 0 ; i < n ; i++){
	// 	a[i] = i*10;
	// }
	// int a[5];

	// a[0] = 10;
	// a[1] = 20;
	// a[2] = 30;
	// a[3] = 40;
	// a[4] = 50;

	for(int i = 0 ; i < 100 ; i++){
		cout<<a[i]<<' ';
	}

	cout<<endl;


	
	return 0;
}