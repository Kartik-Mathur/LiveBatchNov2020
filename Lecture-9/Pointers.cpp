// Pointers
#include <iostream>
using namespace std;

int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int radius = 1;
	int *rptr = &radius;

	cout<<2*(*rptr)*3.14<<endl;
	


	
	int a = 10;
	// int *aptr = &a;
	int *aptr;
	aptr = &a;

	char ch = 'A';
	char *chptr = &ch;
	cout<<(&aptr)<<endl;
	cout<<(&aptr+1)<<endl;
	// cout<<a<<endl;
	// cout<<(&a)<<endl;
	// cout<<aptr<<endl;
	// cout<<*aptr<<endl;

	// cout<<"Doing for character bucket"<<endl;
	// cout<<ch<<endl;
	// cout<<(int*)&ch<<endl;
	// cout<<(double*)chptr<<endl;

	cout<<endl;
	return 0;
}