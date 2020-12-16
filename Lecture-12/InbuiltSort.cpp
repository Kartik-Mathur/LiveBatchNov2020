// InbuiltSort
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

bool compare(int a,int b){
	return a>b;
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int a[]={6,5,7,8,9,10,1,0,-1,-2};
	int n = sizeof(a)/sizeof(int);

	for(int i = 0 ; i < n ; i++){
		cout<<a[i]<<' ';
	}
	cout<<endl;

	sort(a,a+n,compare);
	
	for(int i = 0 ; i < n ; i++){
		cout<<a[i]<<' ';
	}
	cout<<endl;

	return 0;
}