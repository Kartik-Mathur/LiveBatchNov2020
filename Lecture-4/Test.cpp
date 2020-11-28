// PatternStars1
#include <iostream>
using namespace std;

int main(){
	
	int n,i,row;
	cin>>n;

	for(int i = 0 ; i < 2*n-1 ; i++){
		cout<<'*';
	}
	cout<<endl;

// INCREASING STARS PART
	for(row = 1; row < n-1 ; row++){
		// Print n-row times spaces
		for(i = 0 ; i < n - row  ; i++){
			cout<<'*';
		}

		// Print 2*row -1 stars
		for(i = 0 ; i < 2*row-1  ; i++){
			cout<<' ';
		}

		// Print n-row times spaces
		for(i = 0 ; i < n - row  ; i++){
			cout<<'*';
		}

		cout<<endl;

	}

// DECREASING PART
	for(row = 0; row <= n-1 ; row++){
		if(row == 0){
			continue;
		}
		// Print row times spaces
		for(i = 0 ; i < row  ; i++){
			cout<<'*';
		}

		// Print 2*(n-row) -1 stars
		for(i = 0 ; i < 2*(n-row)-1  ; i++){
			cout<<' ';
		}

		// Print n-row times spaces
		for(i = 0 ; i < row  ; i++){
			cout<<'*';
		}

		cout<<endl;
	}

	for(int i = 0 ; i < 2*n-1 ; i++){
		cout<<'*';
	}
	


	cout<<endl;
	return 0;
}