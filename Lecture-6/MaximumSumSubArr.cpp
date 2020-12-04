// MaximumSumSubArr
#include <iostream>
#include <climits>
using namespace std;

int main(){
	
	int a[]={1,2,3};
	int n = sizeof(a)/sizeof(int);

	int start = -1,end = -1;
	int max_sum = INT_MIN;

	for(int i = 0 ; i < n ; i++){
		for(int j = i ; j < n ; j++){
			int current_sum = 0;
			for(int k = i ; k<=j ; k++){
				// cout<<a[k]<<' ';
				current_sum+=a[k];
			}
			// cout<<endl;
			if(current_sum>max_sum){
				start = i;
				end = j;
				max_sum = current_sum;
			}
		}
	}

	cout<<"Max sum "<<max_sum<<endl;
	cout<<"Max sum subarray is ";
	for(int i = start; i<= end ; i++){
		cout<<a[i]<<' ';
	}
	cout<<endl;
	
	return 0;
}