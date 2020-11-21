// SimpleInterest
#include <iostream>
using namespace std;

int main(){
	
	int p,r,t;
	cin>>p>>r>>t; // Read P,R,T

	float si = (p*r*t)/100.0; // Calculate SI

	cout<<"Simple Interest is : "<<si;


	cout<<endl;
	return 0;
}