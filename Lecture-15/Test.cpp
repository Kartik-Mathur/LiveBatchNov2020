#include <iostream>
using namespace std;


int main(){
	char a[]="abc";
	int i = 0;
	cout<<"Character at i "<<a[i]<<endl;
	for(int j = i ; a[j]!='\0' ; j++){
		cout<<"Swapping "<<a[i]<<" with "<<a[j]<<endl;
		swap(a[i],a[j]);
		// swap karke kuch kaam kia
		// swap(a[i],a[j]);
	}
	cout<<a<<endl;
	cout<<endl;
	return 0;
}