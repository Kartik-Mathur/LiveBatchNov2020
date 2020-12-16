#include <iostream>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	// int a[3][3]={
	// 	{1,2,3},
	// 	{4,5,6},
	// 	{7,8}
	// };
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


	return 0;
}





















