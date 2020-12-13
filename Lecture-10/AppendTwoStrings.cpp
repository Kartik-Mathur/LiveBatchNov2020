// AppendTwoStrings
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

void Append(char* a,char *b){
	int alen = length(a),blen = length(b);

	int i = alen;
	int j = 0;

	while(j<=blen){
		a[i++] = b[j++];
	}
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	char a[100],b[100];
	cin>>a>>b;
	cout<<a<<endl;
	cout<<b<<endl;
	Append(a,b);
	cout<<a<<endl;
	cout<<b<<endl;


	return 0;
}