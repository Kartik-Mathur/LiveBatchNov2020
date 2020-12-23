// RatInMaze
#include <iostream>
using namespace std;
int sol[100][100]={0};

bool RatInMaze(char maze[][10],int i,int j,int n,int m){
	// base case
	if(i == n-1 and j == m-1){
		sol[i][j] = 1;
		// Print the solution 
		for(int k = 0 ; k < n; k++){
			for(int l = 0 ; l < m ; l++){
				cout<<sol[k][l]<<' ';
			}
			cout<<endl;
		}
		cout<<endl;
		return true;
	}

	// recursive case
	// i,j->Assume part of solution
	sol[i][j] = 1;
	// 1. Check Right se Raasta Milla
	if(j+1 < m and maze[i][j+1] != 'X'){
		bool KyaRightSeBaatBani = RatInMaze(maze,i,j+1,n,m);
		if(KyaRightSeBaatBani){
			return true;
		}
	}

	// 2. Check Neeche se Raasta Milla
	if(i+1<n and maze[i+1][j] != 'X'){
		bool KyaNeecheSeBaatBani = RatInMaze(maze,i+1,j,n,m);
		if(KyaNeecheSeBaatBani){
			return true;
		}
	}

	sol[i][j] = 0;
	return false;
}

int main(){
	
	char maze[][10]={
		"0000",
		"00XX",
		"0000",
		"XX00"
	};

	int n=4,m=4;
	RatInMaze(maze,0,0,n,m);

	return 0;
}