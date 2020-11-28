// PatternABC
#include <iostream>
using namespace std;

int main(){

	int n,row,i;
	char ch;
	cin>>n;

	for(row = 1 ; row <= n ; ++row){
		// Print Increasing characters n-row+1 times and start : 'A'
		ch = 'A';
		for(i = 1 ; i <= n-row+1 ; i++){
			cout<<ch;
			ch++;
		}
		// ch = 'F'
		// ch = ch - 1; // ch->'E'
		// Decreasing characters n-row+1 times and start : ch = ch-1;
		ch = ch-1;
		for(i = 1 ; i <= n-row+1 ; i++){
			cout<<ch;
			ch--;
		}
		cout<<endl;
	}
	
	// char ch = 'A';

	// for(int i = 0 ; i < 10 ; i++){
	// 	cout<<ch<<' ';
	// 	ch = ch + 1;
	// }

	// cout<<endl<<"Outside of loop "<<ch;

	// cout<<endl;
	return 0;
}