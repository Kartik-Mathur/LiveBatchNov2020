// CopyString
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

void Copy(char *a,char *b){
	int blen = length(b);
	int i = 0;
	while(i<=blen){
		a[i] = b[i];
		i++;
	}
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	char a[100],b[100];
	cin>>a>>b;
	cout<<"A : "<<a<<endl;
	Copy(a,b);
	cout<<"A : "<<a<<endl;


	cout<<endl;
	return 0;
}