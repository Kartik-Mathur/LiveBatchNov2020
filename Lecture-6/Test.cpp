#include <iostream>
using namespace std;

int main(){
	
	int a[100]={0};

	cout<<"Enter N ";
	int n;
	cin>>n;

	for(int i = 0 ; i < n ; i++){
		cin>>a[i];
	}
	cout<<"In correct order : ";
	for(int i = 0 ; i < n ; i++){
		cout<<a[i]<<' ';
	}
	cout<<endl;

	cout<<"In Reverse Order : ";
	for(int i = n-1 ; i>=0; --i){
		cout<<a[i]<<' ';
	}
	cout<<endl;
	return 0;
}