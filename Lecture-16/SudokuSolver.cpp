// SudokuSolver
#include <iostream>
#include <cmath>
using namespace std;

bool KyaNumberRakhSkteHai(int mat[][9],int i,int j,int number ,int n){
	// Check row and column
	for(int k = 0 ; k < n ; k++){
		if(mat[k][j] == number || mat[i][k] == number){
			return false;
		}
	}

	// Check Smallerbox
	n = sqrt(n); // n -> 9, now it will become n-> 3
	int starti = (i/n)*n;
	int startj = (j/n)*n;
	for(int i = starti ; i < starti + n ; i++){
		for(int j = startj ; j < startj + n ; j++){
			if(mat[i][j] == number){
				return false;
			}
		}
	}
	return true;
}

bool SudokuSolver(int mat[][9],int i,int j,int n){
	// Base case
	if(i == n){
		//Print the sudoku
		for(int k = 0 ; k < n ; k++){
			for(int l = 0; l < n ; l++){
				cout<<mat[k][l]<<' ';
			}
			cout<<endl;
		}
		cout<<endl;
		return true;
	}

	if(j == n){
		return SudokuSolver(mat,i+1,0,n);
	}

	if(mat[i][j] != 0){
		return SudokuSolver(mat,i,j+1,n);
	}

	// Recursive case
	for(int number = 1; number <= n; number++){
		if(KyaNumberRakhSkteHai(mat,i,j,number,n) == true){
			mat[i][j] = number; // If we can place number, we will place it
			bool KyaBaakiSolveHua = SudokuSolver(mat,i,j+1,n);
			if(KyaBaakiSolveHua){
				return true;
			}
			mat[i][j] = 0;
		}
	} 
	return false;
}

int main(){
	
	int mat[9][9] =
		{{5,3,0,0,7,0,0,0,0},
		{6,0,0,1,9,5,0,0,0},
		{0,9,8,0,0,0,0,6,0},
		{8,0,0,0,6,0,0,0,3},
		{4,0,0,8,0,3,0,0,1},
		{7,0,0,0,2,0,0,0,6},
		{0,6,0,0,0,0,2,8,0},
		{0,0,0,4,1,9,0,0,5},
		{0,0,0,0,8,0,0,7,9}};

	SudokuSolver(mat,0,0,9);
	
	return 0;
}