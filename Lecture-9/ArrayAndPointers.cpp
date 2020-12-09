// ArrayAndPointers
#include <iostream>
using namespace std;

void Print(int *arr,int n){
	for(int i = 0 ; i < n ; i++){
		cout<<arr[i]<<' '<<*(arr+i)<<endl;
	}	
}

void BubbleSort(int *a,int n){
	// Bubble Sort
	for(int i = 0 ; i < n-1 ; i++){
		for(int j = 0 ; j <= n-2-i ; j++){
			if(*(a+j)>*(a+j+1)){
				*(a+j) = (*(a+j)+*(a+j+1))-(*(a+j+1) = *(a+j));
			}
		}

	}	
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif	

	int a[] = {8,9,0,1,2,3,4,7,6,5};
	int n = sizeof(a)/sizeof(int);
	// a denotes address of 0th index, that means we can store it
	// in a pointer of int
	// a[i] === *(a+i)
	BubbleSort(a,n);
	Print(a,n);


	return 0;
}