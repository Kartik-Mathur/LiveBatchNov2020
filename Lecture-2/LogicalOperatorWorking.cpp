// LogicalOperatorWorking
#include <iostream>
using namespace std;

int main(){

	int x = 0;
	int y=  10;
	
	if(y<0||++x){ 
		x = x+1; 
	}
	else{
		y = y+1; 
	}
	cout<<x<<endl; 
	cout<<y<<endl;
	return 0;

	int a = 0;
	int b = 10;
	if(a++ && a>0){
		a = a+1;
	}
	else{
		b = b + 1;
	}

	cout<<a<<endl;
	cout<<b<<endl;

	cout<<endl;
	return 0;
}