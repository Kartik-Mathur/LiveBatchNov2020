// SpiralPrint
#include <iostream>
using namespace std;

void Transpose(int a[100][100],int r,int c){
	for(int row = 0 ; row < r ; row++){
		for(int col = 0 ; col < c ; col++){
			if(row>col){
				swap(a[row][col],a[col][row]);
			}
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
	Transpose(a,r,c);
	
	swap(r,c);

	for(int row = 0; row < r ; row ++){
		for(int col = 0 ; col < c ; col++){
			cout<<a[row][col]<<' ';
		}
		cout<<endl;
	}

	return 0;
}

