// PatternStars1
#include <iostream>
using namespace std;

int main(){
	
	int n,i,row;
	cin>>n;
// INCREASING STARS PART
	for(row = 1; row <= n ; row++){
		// Print n-row times spaces
		for(i = 0 ; i < n - row  ; i++){
			cout<<' ';
		}

		// Print 2*row -1 stars
		for(i = 0 ; i < 2*row-1  ; i++){
			cout<<'*';
		}
		cout<<endl;
	}

// DECREASING PART
	for(row = 1; row <= n-1 ; row++){
		// Print row times spaces
		for(i = 0 ; i < row  ; i++){
			cout<<' ';
		}

		// Print 2*(n-row) -1 stars
		for(i = 0 ; i < 2*(n-row)-1  ; i++){
			cout<<'*';
		}
		cout<<endl;
	}














	cout<<endl;
	return 0;
}