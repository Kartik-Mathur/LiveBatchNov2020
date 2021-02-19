// CheckPrime
#include <iostream>
using namespace std;

int main(){
	int x;
	cin>>x;
	
	// I need a loop that starts from 2 till N-1
	int i = 2;
	while(i<x){
		cout<<"Checking division of "<<x<<" by "<<i<<endl;
		if(x%i == 0){
			// That means x got divided by i
			// thus not a prime number
			cout<<"Not a Prime Number"<<endl;
			return 0; // Means exit the program, Only inside main return 0 stops the program
		}

		i = i + 1;
	}
	cout<<"Value of i outside loop "<<i<<endl;
	if(i == x){
		cout<<"Prime Number";
	}
	cout<<endl;

	return 0; // Means exit the ongoing program, Only inside the main return 0 stops the program
}