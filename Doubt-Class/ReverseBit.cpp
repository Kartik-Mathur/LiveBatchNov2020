#include <iostream>
#include <cmath>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	
	unsigned int no;
	cin>>no;

	int exp1 = 31;
	unsigned int ans = 0;
	
	while(no){
		if((no&1) == 1){
			// ans += pow(2,exp1);
			ans += (1<<exp1);
		}
		no = (no>>1);
		exp1--;
	}

	cout<<ans;
	cout<<endl;
	return 0;
}