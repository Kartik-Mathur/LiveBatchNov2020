#include <iostream>
using namespace std;

bool KyaQueenRakhSkteHai(int board[][50],int i,int j,int n){
	// Check row and column
	for(int k = 0 ; k < n ; k++){
		if(board[k][j] == 1||board[i][k] == 1){
			return false;
		} 
	}
	
	// Check upper right diagnol
	int r = i, c = j;
	while(r>=0 and c<n){
		if(board[r][c] == 1){
			return false;
		}
		r--;
		c++;
	}
	
	// Check upper left diagnol
	while(i>=0 and j>=0){
		if(board[i][j] == 1){
			return false;
		}
		i--;
		j--;
	}

	return true;
}

bool Nqueen(int board[][50],int i,int n){
	// base case
	if(i == n){
		// Print the board
		for(int k = 0 ; k < n ; k++){
			for(int l = 0 ; l < n ; l++){
				if(board[k][l] == 1){
					cout<<"Q ";
				}
				else{
					cout<<"- ";
				}
			}
			cout<<endl;
		}
		cout<<endl;
		return false;
	}

	// recursive case
	for(int j = 0 ; j < n ; j++){
		if(KyaQueenRakhSkteHai(board,i,j,n)){
			board[i][j] = 1;
			bool KyaBaakiBaatBani = Nqueen(board,i+1,n);
			if(KyaBaakiBaatBani == true){
				return true;
			}

			board[i][j] = 0;
		}
	}

	return false;
}

int main(){
	
	int board[50][50]={0};
	int n;
	cin>>n;

	Nqueen(board,0,n);

	cout<<endl;
	return 0;
}