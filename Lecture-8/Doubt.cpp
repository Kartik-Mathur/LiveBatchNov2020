// Doubts
#include <iostream>
using namespace std;

void Fun(){
	
	cout<<"Hello World"<<endl;
	
	cout<<"My name is Kartik"<<endl;
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	
	Fun();

	int a[]={1,1,1,2,3,4,4,4,5,6,6,7,7,8,8};
	int n = sizeof(a)/sizeof(int);
	
	
	for(int i = 0 ; i < n ; i++){
		if(i == 0){
			cout<<a[i]<<' ';
		}
		else{
			if(a[i] != a[i-1]){
				cout<<a[i]<<' ';
			}
		}
	}


	cout<<endl;
	return 0;
}