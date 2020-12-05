// Functions
#include <iostream>
using namespace std;
// void HelloWorld(arguments or parameters) -> Declaration
void HelloWorld(){
	// Definition
	cout<<"Hello World"<<endl;
	return;
}

void IsEven(int n){
	if(n%2 == 0){
		cout<<"Even"<<endl;
	}
	else{
		cout<<"Odd"<<endl;
	}
	return;
}

void PrintTable(int init,int fval,int step){
	int f = init,cel;
	while(f<=fval){

		cel = 5*(f-32)/9;
		cout<<f<<' '<<cel<<endl;

		f = f + step;
	}
	cout<<endl;		
	return;
}

void isPrime(int no){
	int i = 2;
	while(i<=no-1){
		if(no%i == 0){
			// Not a prime number
			cout<<"Not Prime"<<endl;
			break;
		}
		i++;
	}

	if(i == no){
		cout<<"Prime Number"<<endl;
	}	
	return;
}


int main(){
	
	HelloWorld(); // Calling or Invoking

	int n = 6;
	IsEven(n); // Invoking or Calling

	int init,fval,step,cel;
	// cin>>init>>fval>>step;
	init = 0;fval = 100; step = 20;
	PrintTable(init,fval,step);
	// init = 0; fval = 20; step = 4;
	// PrintTable(init,fval,step); // Fun(name1,name2);


	cout<<"Enter N";
	int N;
	cin>>N;
	isPrime(N);
	


	return 0;
}