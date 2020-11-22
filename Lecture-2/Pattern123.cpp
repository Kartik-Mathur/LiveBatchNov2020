// Pattern123.cpp
#include <iostream>
using namespace std;

int main(){
	
	int n;
	cin>>n;

	int row = 1,i,no=1;

	while(row<=n){

		// loop that run row times
		i = 1;
		while(i<=row){
			cout<<no;
			no = no + 1;
			i = i + 1;
		}


		row = row + 1;
		cout<<endl;
	}



	return 0;
}