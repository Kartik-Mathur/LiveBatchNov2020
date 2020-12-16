#include <iostream>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	char a[][4]={
		{'A','B','C','\0'},
		{'D','E','F','\0'},
		{'G','H','I','\0'}
	};


	cout<<a[0]<<endl;
	cout<<a[1]<<endl;
	cout<<a[2]<<endl;

	char arr[][7]={
		"Kartik",
		"Coding",
		"Blocks"
	};
	cout<<arr[0]<<endl;
	cout<<arr[1]<<endl;
	cout<<arr[2]<<endl;


	return 0;
}





















