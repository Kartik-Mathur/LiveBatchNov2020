#include <iostream>
using namespace std;

int main(){
	
	int n;
	cin>>n;

	int row = 1,space,i,no;
	while(row<=n){
		// Print spaces n-row times
		space = 1;
		while(space<=n-row){
			cout<<' ';
			space = space + 1;
		}

		// print increasing numbers row times, start: row
		i = 1,no = row;
		while(i<=row){
			cout<<no;
			no = no+1;
			i = i+1;
		}
		// print decreasing numbers row-1 times, start:2*row-2
		no = 2*row-2;
		i = 1;
		while(i<=row-1){
			cout<<no;
			no = no-1;
			i = i+1;
		}

		row = row + 1;
		cout<<endl;
	}

	return 0;
}