// Pallindrome
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

bool isPallindrome(char* a){
	int i = 0, j = length(a)-1;

	while(i<j){
		if(a[i]!=a[j]){
			return false;
		}
		i++;
		j--;
	}
	return true;
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	char a[100];
	cin>>a;

	if(isPallindrome(a)){
		cout<<"Yes";
	}
	else{
		cout<<"No";
	}


	cout<<endl;
	return 0;
}