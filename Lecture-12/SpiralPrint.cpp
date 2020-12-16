// SpiralPrint
#include <iostream>
using namespace std;

// void SpiralPrint(int a[][100],int r,int c){
void SpiralPrint(int a[100][100],int r,int c){
	int sr = 0, er = r-1, sc = 0, ec = c-1;

	while(sr<=er and sc<=ec){
		// 1. Print sr from sc till ec, sr++
		for(int col = sc ; col <= ec ; col++){
			cout<<a[sr][col]<<' ';
		}
		sr++;
		// 2. Print ec from sr till er, ec--
		for(int row = sr; row <=er ; row++){
			cout<<a[row][ec]<<' ';
		}
		ec--;
		// 3. Print er from ec till sc, er--
		if(sr<er){
			for(int col = ec ; col>=sc ; col--){
				cout<<a[er][col]<<' ';
			}
			er--;
		}
		// 4. Print sc from er toll sr, sc++
		if(sc<ec){
			for(int row = er ; row >= sr ; row--){
				cout<<a[row][sc]<<' ';
			}
			sc++;
		}
	}
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif


	int a[100][100];
	int r,c,number =1;
	cin>>r>>c;
	for(int row = 0; row < r ; row ++){
		for(int col = 0 ; col < c ; col++){
			// cin>>a[row][col];
			a[row][col] = number;
			number++;
		}
	}
	for(int row = 0; row < r ; row ++){
		for(int col = 0 ; col < c ; col++){
			cout<<a[row][col]<<' ';
		}
		cout<<endl;
	}
	cout<<endl;
	
	SpiralPrint(a,r,c);

	return 0;
}


