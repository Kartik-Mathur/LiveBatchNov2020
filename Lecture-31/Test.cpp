#include <iostream>
using namespace std;

bool isSafeToPut(int board[][10], int row, int col, int n) {
// check row
	for (int i = 0 ; i <= row ; i ++) {
		if (board[i][col] == 1) {
			return false;
		}
	}

// check column
	for (int i = 0 ; i <= col ; i++) {
		if (board[row][i] == 1) { // this means queen is present in that column
			return false;
		}
	}

	int i = row, j = col;
	// Iterate over the left upper diagonal
	while (i >= 0 and j >= 0) {
		if (board[i][j] == 1) {
			// queen is present on the left diagonal
			return false;
		}
		i--;
		j--;
	}

	// Iterate over the right upper diagonal
	while (row >= 0 and col < n) {
		if (board[row][col] == 1) {
			// queen is present on the right diagonal
			return false;
		}
		row--;
		col++;
	}
	return true;
}

bool NQueen(int board[][10], int row, int n) {
	// base case
	if (row == n) {
		// that means we have placed all the queens
		for (int i = 0 ; i < n ; i++) {
			for (int j = 0 ;  j < n ; j++) {
				// cout << board[i][j] << " ";
				if (board[i][j] == 1) {
					// means queen is there
					cout << "Q ";
				}
				else {
					cout << "_ ";
				}
			}
			cout << endl;
		}
		cout << endl;
		return false;
	}

	// recursive case
	for (int col = 0 ; col < n ; col++) {
		if (isSafeToPut(board, row, col, n) == true) {
			// I can place the queen
			board[row][col] = 1;
			// now ask the recursion to solve the rest of the board
			bool KyaBaakiSolveHua = NQueen(board, row + 1, n);
			if (KyaBaakiSolveHua == true) {
				return true;
			}
			// Remove the queen that we placed earlier
			board[row][col] = 0;
		}
	}
	// Not possible to solve the board
	return false;
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int board[10][10] = {0};

	int n;
	cin >> n;


	if (NQueen(board, 0, n) == true) {
		cout << "All Queens are placed" << endl;
	}
	else {
		cout << "Not possible to place the queen" << endl;
	}


	return 0;
}









