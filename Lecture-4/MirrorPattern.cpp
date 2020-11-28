// MirrorPattern
#include <iostream>
using namespace std;

int main(){
	
	int n;
	cin>>n;
	int count_stars = 1;

	for(int row = 1 ; row < 2*n ; row++){
		if(row<=n-1){
			// Print increasing stars
			for(int i = 0 ; i < count_stars ; i++){
				cout<<"* ";
			}
			count_stars++;
			cout<<endl;
		}
		else{
			for(int i = 0 ; i < count_stars ; i++){
				cout<<"* ";
			}
			count_stars--;
			cout<<endl;
		}
	}	


	cout<<endl;
	return 0;
}