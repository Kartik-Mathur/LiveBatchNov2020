// LargestString
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

	int n;
	cin>>n;
	cin.ignore();

	char arr[100],maxstring[100];
	int maxlength =0;
	for(int i = 0 ; i < n ; i++){

		cin.getline(arr,100);
		int l = length(arr);
		if(l>maxlength){
			maxlength = l;
			Copy(maxstring,arr);
		}

	}

	cout<<"Largest String "<<maxstring<<endl;
	cout<<"Largest String length "<<maxlength<<endl;










	cout<<endl;
	return 0;
}