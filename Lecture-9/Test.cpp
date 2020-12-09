#include <iostream>
using namespace std;

int main(){
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int a = 10;
	float f = 10.15;
	char ch = 'A';

	// int a = 10; // initilization
	// int a;
	// a = 10; // assignment

	cout<<"Value of a "<<a<<endl;
	cout<<"Address of a "<<&a<<endl;
	cout<<sizeof(&a)<<endl;
	cout<<"Value of f "<<f<<endl;
	cout<<"Address of f "<<&f<<endl;
	cout<<"Value of ch "<<ch<<endl;
	cout<<"Address of ch "<<&ch<<endl;
	return 0;
}



















