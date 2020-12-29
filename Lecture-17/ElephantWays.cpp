// ElephantWays
#include <iostream>
using namespace std;

int ElephantWays(int i,int j){
	// base case
	if(i == 0 and j == 0){
		return 1;
	}
	// recursive case
	int ans = 0;
	// Pichli sabhi rows ka sum
	for(int k = 0 ; k < i ; k++){
		ans += ElephantWays(k,j);
	}

	// Pichle sabhi columns ka sum
	for(int k = 0 ; k < j ; k++){
		ans += ElephantWays(i,k);
	}
	return ans;
}

int main(){
	
	int i,j;
	cin>>i>>j;

	cout<<ElephantWays(i,j);


	cout<<endl;
	return 0;
}