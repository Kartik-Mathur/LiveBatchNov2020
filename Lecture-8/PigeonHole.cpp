// PigeonHole
#include <iostream>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int a[]={1,2,3,1,4};

	int n = sizeof(a)/sizeof(int);

	int csum[100] = {0};
	csum[0] = a[0]%n;
	for(int i = 1 ; i < n ; i++){
		csum[i] = (csum[i-1]+a[i]);
	}
	
	for(int i = 0 ; i < n ; i++){
		csum[i]%=n;
	}

	for(int i = 0 ; i < n ; i++){
		cout<<csum[i]<<' ';
	}	
	cout<<endl;
	// empty array will have value ->0, and we have n another values
	// inside csum array
	// [0,n-1]

	int freq[100]={0};
	freq[0] = 1;// for null subarray

	for(int i = 0 ; i < n ; i++){
		freq[csum[i]]++;
	}
	for(int i = 0 ; i < n ; i++){
		cout<<freq[i]<<' ';
	}	
	cout<<endl;
	int ans = 0;
	for(int i = 0 ; i < n ; i++){
		ans+= (freq[i]*(freq[i]-1))/2;
	}
	cout<<ans<<endl;

	cout<<endl;
	return 0;
}