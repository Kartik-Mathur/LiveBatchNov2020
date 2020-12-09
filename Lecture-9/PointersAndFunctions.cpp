// PointersAndFunctions
#include <iostream>
using namespace std;

void Update(int *z){
	*z = *z + 2;	
}


int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int x = 10;
	int *y = &x;

	cout<<x<<endl;
	Update(y);
	cout<<x<<endl;
	

	return 0;
}