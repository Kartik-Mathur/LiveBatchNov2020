// FindInMatrix
#include <iostream>
using namespace std;

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
	int key,row,col;
	cin>>key;
	for(int row = 0; row < r ; row ++){
		for(int col = 0 ; col < c ; col++){
			cout<<a[row][col]<<' ';
		}
		cout<<endl;
	}
	// bool KyaKeyMilli = false;
	for(row = 0; row < r ; row ++){
		for(col = 0 ; col < c ; col++){
			if(a[row][col] == key){
				cout<<"Key found at "<<row<<","<<col<<endl;
				// KyaKeyMilli = true;
				break;
			}
		}
		if(col!=c){
			break;
		}
	}

	if(row == r){
		cout<<"Key not found"<<endl;
	}

	return 0;
}





















