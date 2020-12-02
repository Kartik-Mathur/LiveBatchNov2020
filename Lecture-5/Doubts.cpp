// Doubts
#include <iostream>
using namespace std;

int main(){
	
	int n;
	cin>>n;
	int i ;
	

	for(int no = 2; no<=n ; no++){
		// n = 9
		bool isPrime = true;
		for(i = 2 ; i < no ; i++){
			if(no%i == 0){
				isPrime = false;
				break;
			}
		}

		if(isPrime == true){
			cout<<no<<endl;
		}
	}
	// cout<<endl;
	return 0;
}