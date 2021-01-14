#include <bits/stdc++.h>
using namespace std;


int main(){
	int n;
	cin>>n;

	int prime[n+1];
	//1:prime,
	//0:not prime
	for(int i=1;i<=n;i++)
		prime[i]=1;

	for(int i=2;i*i<=n;i++){
		if(prime[i]==1){
			//if current number is prime
			//then make its multiple as non-prime
			for(int j=i*i;j<=n;j+=i)
				prime[j]=0;
		}
	}
    
    //if prime[i]==1 then it is prime
	for(int i=2;i<=n;i++){
		if(prime[i]==1)
			cout << i << " ";
	}
	
	}


