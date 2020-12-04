// BostonNumber
#include <iostream>
#include <cmath>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

		
	int n;
	cin>>n;
	int N = n,sum = 0;
	int sum_digits = 0;

	while(n){
		sum_digits += n%10;
		n/=10;
	}

	while((N%2) == 0){
		sum+=2;
		N/=2;
	}

	for(int i = 3; i <= sqrt(N);i+=2){
		while((N%i) == 0){
			int temp = i;
			while(temp){
				sum+=temp%10;
				temp/=10;
			}

			N/=i;
		}
	}

	if(N>2){
		while(N){
			sum+=N%10;
			N/=10;
		}
	}

	if(sum_digits == sum){
		cout<<1<<endl;
	}
	else{
		cout<<0<<endl;
	}

	return 0;
}