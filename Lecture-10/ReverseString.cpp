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

void Reverse(char* a){
	int i = 0, j = length(a)-1;

	while(i<j){
		swap(a[i],a[j]);
		i++;
		j--;
	}
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	char a[100];
	// cin>>a;
	cin.getline(a,100);
	cout<<a<<endl;
	Reverse(a);
	cout<<a;

	cout<<endl;
	return 0;
}