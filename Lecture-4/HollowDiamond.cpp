// PatternStars1
#include <iostream>
using namespace std;

// Part - 2
int main(){
	int n ;
	cin>>n;

	// 1st segment 
	for(int i = 0 ; i < 2*n-1 ; i++){
		cout<<'*';
	}
	cout<<endl;

	// 2nd segment
	for(int row = 1 ; row<=n-1 ; row++){
		// Print n-row stars
		for(int i = 0 ; i < n-row ; i++){
			cout<<'*';
		}
		// print 2*row - 1 spaces
		for(int i = 0 ; i < 2*row-1 ; i++){
			cout<<' ';
		}
		// Print n-row stars
		for(int i = 0 ; i < n-row ; i++){
			cout<<'*';
		}
		cout<<endl;
	}

	// 3rd segment

	for(int row = 1 ; row<=n-2 ; row++){
		// Print row + 1 times stars
		for(int i = 0 ; i<row+1 ; i++){
			cout<<'*';
		}
		// print 2*(n-row-1) spaces

		for(int i = 0 ; i<2*(n-row-1)-1 ; i++){
			cout<<' ';
		}

		// Print row + 1 times stars
		for(int i = 0 ; i<row+1 ; i++){
			cout<<'*';
		}
		cout<<endl;
	}


	// 4th segment 
	for(int i = 0 ; i < 2*n-1 ; i++){
		cout<<'*';
	}
	cout<<endl;
	return 0;
}

// int main(){
	
// 	int n,i,row;
// 	cin>>n;

// 	for(int i = 0 ; i < 2*n-1 ; i++){
// 		cout<<'*';
// 	}
// 	cout<<endl;

// // INCREASING STARS PART
// 	for(row = 1; row < n-1 ; row++){
// 		// Print n-row times spaces
// 		for(i = 0 ; i < n - row  ; i++){
// 			cout<<'*';
// 		}

// 		// Print 2*row -1 stars
// 		for(i = 0 ; i < 2*row-1  ; i++){
// 			cout<<' ';
// 		}

// 		// Print n-row times spaces
// 		for(i = 0 ; i < n - row  ; i++){
// 			cout<<'*';
// 		}

// 		cout<<endl;

// 	}

// // DECREASING PART
// 	for(row = 0; row <= n-1 ; row++){
// 		if(row == 0){
// 			continue;
// 		}
// 		// Print row times spaces
// 		for(i = 0 ; i < row  ; i++){
// 			cout<<'*';
// 		}

// 		// Print 2*(n-row) -1 stars
// 		for(i = 0 ; i < 2*(n-row)-1  ; i++){
// 			cout<<' ';
// 		}

// 		// Print n-row times spaces
// 		for(i = 0 ; i < row  ; i++){
// 			cout<<'*';
// 		}

// 		cout<<endl;
// 	}

// 	for(int i = 0 ; i < 2*n-1 ; i++){
// 		cout<<'*';
// 	}
	


// 	cout<<endl;
// 	return 0;
// }