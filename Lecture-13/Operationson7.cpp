// Operationson7.cpp
#include <iostream>
using namespace std;

bool Check7(int *a,int n){
	// base case
	if(n == 0){
		return false;
	}

	// recursive case 
	if(a[0] == 7){
		return true;
	}
	return Check7(a+1,n-1);
	// bool KyaBaakiArrayMeiMila = Check7(a+1,n-1);
	// if(KyaBaakiArrayMeiMila == true){
	// 	return true;
	// }
	// else{
	// 	return false;
	// }
}

int First7(int *a,int n,int i){
	// base case 
	if(i == n){
		return -1;
	}
	// recursive case
	if(a[i] == 7){
		return i;
	}
	return First7(a,n,i+1);
	// int indx = First7(a,n,i+1);
	// if(indx == -1){
	// 	return -1;
	// }
	// else{
	// 	return indx;
	// }

}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif	

	int a[]={1,4,5,17,6,17,8};
	int n = sizeof(a)/sizeof(int);

	if(Check7(a,n)){
		cout<<"Yes"<<endl;
	}
	else{
		cout<<"No"<<endl;
	}

	cout<<First7(a,n,0)<<endl;

	return 0;
}