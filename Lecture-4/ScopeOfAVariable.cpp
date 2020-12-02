// ScopeOfAVariable
#include <iostream>
using namespace std;

int x = -1000; // Global variable

int main(){
	
	cout<<"X is : "<<x<<endl;

	int x = 10;
	
	cout<<"X is : "<<x<<endl;
	// If i want to use global bucket here, to do that we can use ??
	// To use global bucket and ignore all the local scopes we use scope resolution
	cout<<::x<<endl; // -1000
	::x = ::x + 2000;
	cout<<::x<<endl; // 1000

	if(x>0){
		int x = 500;
		cout<<"X in if "<<x<<endl;
		cout<<"X in global space "<<::x<<endl;
	}

	// if(x>0){
	// 	int y = 1;
	// 	// int x = -1;
	// 	// x = 1000
	// 	int x = 500;
	// 	x = 1000;

	// 	cout<<"X is "<<x<<endl; // 1000
	// 	cout<<"Y is "<<y<<endl; // 1
	// }
	
	// cout<<"X is "<<x<<endl; //10

	
	return 0;
}