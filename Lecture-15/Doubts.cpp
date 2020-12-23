// Doubts
#include <iostream>
using namespace std;

int main(){
	
	char a[10]="abc";
	swap(a[0],a[1]);
	// Recursion will do some work
	swap(a[0],a[1]);
	cout<<a<<endl;

	return 0;
}