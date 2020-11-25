// SquareRoot
#include <iostream>
using namespace std;

int main(){
	int n,precision;
	cin>>n>>precision;
	float i = 0;
	float inc = 1;
	int current_precision = 0;

	while(current_precision <= precision){
		while(i*i<=n){
			i = i + inc;
		}
		i = i - inc;
		current_precision ++;
		inc = inc/10;
	}
	cout<<i;

	cout<<endl;
	return 0;
}