// MergeSortedArrays
#include <iostream>
using namespace std;

int main(){
	
	int a[7]={6,6,7};
	int b[4]={1,2,6,7};
	int m = 3,n = 4;

	int i = m-1, j = n-1, k = m+n-1;

	while(i>=0 && j>=0){
		if(a[i]<b[j]){
			a[k] = b[j];
			k--;
			j--;
		}
		else{
			a[k--] = a[i--];
		}
	}

	while(j>=0){
		a[k--] = b[j--];
	}

	for(int i = 0 ; i < m+n ; i++){
		cout<<a[i]<<' ';
	}

	cout<<endl;
	return 0;
}