// BitwiseOperators
#include <iostream>
using namespace std;

int main(){
	
	cout<<"5&7 : "<<(5&7)<<endl;
	cout<<"5&2 : "<<(5&2)<<endl;
	cout<<"5|2 : "<<(5|2)<<endl;
	cout<<"8|5 : "<<(8|5)<<endl;
	cout<<"5^7 : "<<(5^7)<<endl;
	cout<<"5^10 : "<<(5^10)<<endl;
	
	int a = -2;
	cout<<a<<endl;
	a = a>>1;
	cout<<a<<endl;
	// a = a>>1;
	// cout<<a<<endl;
	// a = a>>1;
	// cout<<a<<endl;
	// a = a<<1;
	// cout<<a<<endl;

	int no = 7;
	while(no){
		cout<<no<<endl;
		no = no>>1;
	}
	
	return 0;
}