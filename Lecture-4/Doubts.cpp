#include <iostream>
using namespace std;

int main(){
	
	long long int no;
	cin>>no;

	long long int ans = 0;

	for( ; no!=0 ;no=no/10 ){
		ans = ans*10+no%10;
	}
	cout<<ans<<endl;

	int place = 1;
	while(ans !=0){
		int digit = ans%10;
		if(place == 1){
			if(digit==9 || (digit<=4 && digit>=1) ){
				cout<<digit;
			}
			else{
				cout<<9-digit;
			}
			place++;
		}
		else{
			int digit = ans%10;
			if(digit<=4 && digit>=0){
				cout<<digit;
			}
			else{
				cout<<9-digit;
			}
		}
		ans = ans/10;
	}
	cout<<endl;

	return 0;
}