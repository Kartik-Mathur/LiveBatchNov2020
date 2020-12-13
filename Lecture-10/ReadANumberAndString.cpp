// ReadANumberAndString
#include <iostream>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif	

	int a;
	char arr[100];

	cin>>a;
	cin.ignore(); // cin.get()
	cin.getline(arr,100);

	cout<<a<<endl;
	cout<<arr<<endl;

	return 0;
}