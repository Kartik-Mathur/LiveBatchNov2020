#include <bits/stdc++.h>
using namespace std;

void printNumbers(int n,int k,int num){
	//base case 
	if(n==0){
		cout << num << endl;
		return;
	}

	//get last digit
	int x=num%10;
	if(x+k<=9){
		printNumbers(n-1,k,num*10+x+k);
	}

	if(x-k>=0 && k!=0){
			printNumbers(n-1,k,num*10+x-k);
	}

}




int main(){
	int n;
	cin>>n;

	int k;
	cin>>k;
   
   //try all digit as first digit
	for(int i=1;i<=9;i++)
	printNumbers(n-1,k,i);





}