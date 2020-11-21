// Largestof3numbers
#include <iostream>
#include <climits> // Header file to include INT_MIN
using namespace std;

int main(){
	
	int largest = INT_MIN; // INT_MIN -> -2^31

	int n,no;
	cin>>n;	

	int i = 1; // init
	while(i<=n){ // condn
		cin>>no;
		if(no>largest){
			largest = no;
		}

		i = i + 1; // updn
	}
	cout<<"Largest Number is "<<largest<<endl;
	// int a,b,c;
	// cin>>a>>b>>c;

	// if(a>=b && a>=c){
	// 	cout<<"A is largest "<<a<<endl;
	// }
	// else if(b>=a && b>=c){
	// 	cout<<"B is largest "<<b<<endl;
	// }
	// else{
	// 	cout<<"C is largest "<<c<<endl;
	// }



	return 0;
}