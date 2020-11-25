// PrintPrimes.cpp
#include <iostream>
using namespace std;

int main(){
	int no,n;
	cin>>n;

	for(no = 2 ; no<=n ; no++){
		// This will print the number if it's prime, and ignore the number if its not prime
		int i = 2;
		while(i<=no-1){
			if(no%i == 0){
				// Not a prime number
				break;
			}
			i++;
		}

		if(i == no){
			// cout<<"Prime Number : "<<no<<endl;
			cout<<no<<' ';
		}
	}
	return 0;
}