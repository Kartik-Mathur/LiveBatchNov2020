// CalculateLength
#include <iostream>
using namespace std;

int length(char *a){
	int i;
	int cnt = 0;
	for(i = 0 ; a[i] != '\0' ; i++){
		cnt++;
	}
	return cnt;
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	char a[100];
	cin>>a;
	cout<<length(a);

	return 0;
}