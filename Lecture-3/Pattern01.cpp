// Pattern01
#include <iostream>
using namespace std;

int main(){
	
	int n;
	cin>>n;

	for(int row = 1; row<=n ; row++){
		int x;
		if(row%2 == 0){
			// even row
			x = 0;
		}
		else{
			// odd row
			x = 1;
		}

		for(int i = 1; i<=row ; i++){
			cout<<x;
			x = 1-x;
		}
		cout<<endl;
	}


	// cout<<endl;
	return 0;
}