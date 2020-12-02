// FindLargest
#include <iostream>
#include <climits>
using namespace std;

int main(){
	
	int a[] = {1,5,4,6,8,2};
	int n = sizeof(a)/sizeof(int);

	// int largest = a[0];
	int largest = INT_MIN; // INT_MIN = -2^31 is -inf

	for(int i = 0 ; i < n ; i++){
		if(a[i]>largest){
			largest = a[i];
		}
	}
	cout<<"Largest element is "<<largest;

	cout<<endl;
	return 0;
}