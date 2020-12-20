// toh
#include <iostream>
using namespace std;

void toh(int n,char src,char helper,char destination){
	// base case
	if(n == 0){
		return;
	}

	// recursive case
	toh(n-1,src,destination,helper);
	cout<<"Take disk "<<n<<" from "<<src<<" to "<<destination<<endl;
	toh(n-1,helper,src,destination);
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n;
	cin>>n;
	toh(n,'A','B','C');

	return 0;
}