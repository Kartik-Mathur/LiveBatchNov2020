#include <iostream>
using namespace std;

int SumArray(int *a,int n){
	// base case
	if(n == 0){
		return 0;
	}

	// recursive case
	int ChotaArraySum = SumArray(a+1,n-1);

	int BadaArraySum = a[0]+ChotaArraySum;
	return BadaArraySum;
}

int Sum2(int *a,int n,int i){
	// base case
	if(i == n){
		return 0;
	}

	// recursive case
	int ChotaArraySum = Sum2(a,n,i+1);
	int BadaArraySum = ChotaArraySum + a[i];
	return BadaArraySum;
}

int sum3(int *a,int n){
	// base case
	if(n == 0){
		return 0;
	}
	
	// recursive case
	return sum3(a,n-1)+a[n-1];
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int a[]={1,2,3,4,6,324,4,2,342,36,345,2};
	int n = sizeof(a)/sizeof(int);
	cout<<SumArray(a,n)<<endl;
	cout<<Sum2(a,n,0)<<endl;
	cout<<sum3(a,n)<<endl;

	return 0;
}