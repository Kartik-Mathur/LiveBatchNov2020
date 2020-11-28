// CountSetBits
#include <iostream>
using namespace std;

int main(){
	
	int n;
	cin>>n;

	int set_count = 0;

	while(n!=0){
		if((n&1) == 1){
			set_count ++;
		}
		n = n>>1;
	}
	cout<<"Set bit count "<<set_count;
	cout<<endl;
	return 0;
}