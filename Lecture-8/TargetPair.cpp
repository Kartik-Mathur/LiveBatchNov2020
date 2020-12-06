// TargetPair
#include <iostream>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif	

	int a[]={1,2,4,3,6,3};
	int n = sizeof(a)/sizeof(int);
	int sum = 5;

	for(int i = 0 ; i <= n-2 ; i++){
		
		int x = a[i],y=sum-x;

		for(int j = i+1; j < n ; j++){
			if(a[j] == y){
				cout<<x<<' '<<y<<endl;
			}
		}

	}

	return 0;
}