// ReverseANumber
#include <iostream>
using namespace std;

int main(){
	
	int no;
	cin>>no;

	int ans = 0;

	// while(no){
	// 	ans = ans*10+no%10;
	// 	no=no/10;
	// }
	for( ; no!=0 ;no=no/10 ){
		ans = ans*10+no%10;
	}
	cout<<ans<<endl;
	cout<<(ans*2)<<endl;

	cout<<endl;
	return 0;
}