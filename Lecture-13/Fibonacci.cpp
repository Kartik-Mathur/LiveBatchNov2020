// Fibonacci
#include <iostream>
using namespace std;

int Fibo(int n){
	// base case
	if(n == 0 || n == 1){
		return n;
	}
	// recursive case - Pure assumption
	return Fibo(n-1)+Fibo(n-2);
	// int ChotiProb1 = Fibo(n-1);
	// int ChotiProb2 = Fibo(n-2);

	// int BadaAns = ChotiProb1 + ChotiProb2;
	// return BadaAns;
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif	

	int n;
	cin>>n;

	cout<<Fibo(n);


	cout<<endl;
	return 0;
}