// BinarySearch.cpp
#include <iostream>
using namespace std;
// Normal iterative way
void BinarySearch(int *a,int n,int key){
	int s = 0 , e = n-1;bool KyaKeyMilli = false;
	while(s<=e){ //if s>e, will you enter the loop?, for this break statement
		// will never run
		int mid = (s+e)/2;
		if(a[mid] == key){
			cout<<"Key found at index "<<mid<<endl;
			KyaKeyMilli = true;
			break;// this statement will only run if s<=e? (Yes)
		}
		else if(key>a[mid]){
			s = mid + 1;
		}
		else{
			e = mid - 1;
		}
	}
	// if s>e, this means key is not found
	if(s>e){
		cout<<"Key not found"<<endl;
	}
	// if(KyaKeyMilli == false){
	// 	cout<<"Key not found"<<endl;
	// }	
}



// Recursive way
int BSRecursive(int *a,int s,int e,int key){
	// base case
	if(s>e){
		return -1;
	}
	// recursive case
	int mid = (s+e)/2;
	if(a[mid] == key){
		return mid;
	}
	else if(key>a[mid]){
		return BSRecursive(a,mid+1,e,key);
	}
	else{// key<a[mid]
		return BSRecursive(a,s,mid-1,key);
	}
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int a[]={1,4,5,8,9};
	int n = sizeof(a)/sizeof(int);
	int key = 10;
	
	int ans = BSRecursive(a,0,n-1,key);
	if(ans == -1){
		cout<<"Key not found"<<endl;
	}
	else{
		cout<<"Key found at "<<ans<<endl;
	}	



	return 0;
}