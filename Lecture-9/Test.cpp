#include <iostream>
using namespace std;

int main(){
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	// int a[]= {1,2,3,4};
	// int *y = a;
	// for(int i = 0 ; i < 4 ; i++){
	// 	cout<<y[i]<<endl; // y[i] == *(y+i)
	// }
	int a = 10;
	float f = 10.15;
	char ch = 'A';
	bool x = 1024*2*2*2;
	cout<<x<<endl;
	// int a = 10; // initilization
	// int a;
	a = 10; // assignment

	cout<<"Value of a "<<a<<endl;
	cout<<"Address of a "<<&a<<endl;
	cout<<sizeof(&a)<<endl;
	cout<<"Value of f "<<f<<endl;
	cout<<"Address of f "<<&f<<endl;
	cout<<"Value of ch "<<ch<<endl;
	cout<<"Address of ch "<<&ch<<endl;
	return 0;
}



















