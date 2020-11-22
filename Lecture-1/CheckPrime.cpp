// CheckPrime
#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	
	// I need a loop that starts from 2 till N-1
	int i = 2;
	while(i<n){
		cout<<"Checking division of "<<n<<" by "<<i<<endl;
		if(n%i == 0){
			// That means n got divided by i
			// thus not a prime number
			cout<<"Not a Prime Number"<<endl;
			return 0; // Means exit the program, Only inside main return 0 stops the program
		}

		i = i + 1;
	}
	cout<<"Value of i outside loop "<<i<<endl;
	if(i == n){
		cout<<"Prime Number";
	}
	cout<<endl;

	return 0; // Means exit the program, Only inside main return 0 stops the program
}