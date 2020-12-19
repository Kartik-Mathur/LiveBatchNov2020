#include <iostream>
using namespace std;

int fact(int n){
	// 1. base case
	if(n == 0){
		return 1;
	}
	// 2. recursive case
	// fact(n) = n*fact(n-1)
	int ChotiProblem = fact(n-1); // Pure assumption that i will correct ans

	// 3. Find the solution to your bigger problem
	int BadaAns = n*ChotiProblem; // n factorial
	return BadaAns;
}

int fact1(int n){
	// 1. base case
	if(n == 0){
		return 1;
	}
	
	return n*fact1(n-1);
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif	
	int n;
	cin>>n;

	cout<<fact1(n);

	cout<<endl;
	return 0;
}