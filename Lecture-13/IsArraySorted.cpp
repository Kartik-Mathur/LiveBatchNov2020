// IsArraySorted
#include <iostream>
using namespace std;

bool IsArraySorted(int *a,int n){
	// base case
	if(n<=1){
		return true;
	}
	// recursive case
	bool KyaChotaSortedHai = IsArraySorted(a+1,n-1);// Pure assumption

	if(KyaChotaSortedHai && a[0]<a[1]){
		// Bada bhi sorted hoga
		return true;
	}
	else{
		// bada sorted nahi hoga
		return false;
	}
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif	

	int a[]={1,4,5,8,9,10};
	int n = sizeof(a)/sizeof(int);

	if(IsArraySorted(a,n)){
		cout<<"Sorted";
	}
	else{
		cout<<"Not Sorted";
	}


	cout<<endl;
	return 0;
}