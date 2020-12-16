#include <iostream>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int a[100][100]={
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12}
	};

	int r=3,c=4,number =1;

	for(int col = 0 ; col < c ; col++){
		if(col%2 == 0){
			// even column
			for(int row = 0 ; row < r ; row++){
				cout<<a[row][col]<<' ';
			}
		}
		else{
			// odd column
			for(int row = r-1 ; row>=0 ; row--){
				cout<<a[row][col]<<' ';
			}
		}
	}



	return 0;
}


