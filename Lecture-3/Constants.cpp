// Constants
#include <iostream>
using namespace std;
#define PI (3.14+1) // They dont take any space
#define Print cout<<
#define SEMICOLON ;
#define F(n) for(int i = 0 ; i < n ; i++){cout<<"Hello"<<endl;}

int main(){
	
	const int area_of_house = 2000;
	// area_of_house = 2000;
	// PI = 3.14;
	Print area_of_house<<endl SEMICOLON

	cout<<(2*PI*1)<<endl;
	F(12);
	
	// F(3);
	// F(4);

	return 0;
}