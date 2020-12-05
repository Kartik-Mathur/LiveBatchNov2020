#include <iostream>
#include <cmath>
using namespace std;

int main(){
	
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	// #endif

	int n;
	cin>>n;
	int a[100];

	for(int i = 0 ; i < n ; i++){
		cin>>a[i];
	}

	int x = pow(2,n)-1; // for example a^b, pow(a,b)

	for(int i = 0 ; i <= x ; i++){
		int no = i;
		int bitpos = 0;
		while(no!=0){
			if((no&1) == 1){
				cout<<a[bitpos]<<' ';
			}
			no=no>>1;
			bitpos++;
		}
		cout<<endl;
	}

	// cout<<endl;
	return 0;
}