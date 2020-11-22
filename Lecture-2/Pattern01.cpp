// Pattern01
#include <iostream>
using namespace std;

int main(){
	

	int n;
	cin>>n;

	int row,x,i;

	for(row = 1; row<=n; row++){
		// In every row we need to work for row times
		// if row is odd x->1
		// else x->0
		if(row%2!=0){
			x = 1;
		}
		else{
			x = 0;
		}

		for(i = 1; i<=row ; i++){
			cout<<x;
			x = 1 - x;
		}
		// i = 1;
		// while(i<=row){
		// 	cout<<x;
		// 	x = 1-x;
		// 	i++;	
		// }
		cout<<endl; // cout<<'\n'
	}


	
	return 0;
}