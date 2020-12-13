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

void Rotate(char *a,int n){
	// a = "Hello"
	int alen = length(a);

	// cout<<a<<endl;
	// cout<<"Shift all character n pos ahead"<<endl;
	for(int i = alen-1; i>=0 ; i--){
		a[i+n] = a[i];
	}
	// cout<<a<<endl;

	int i = 0, j =alen;
	for(int k = 0 ; k < n ; k++){
		a[i] = a[j];
		i++; j++;
	}
	// cout<<a<<endl;

	a[alen] = '\0';
	// cout<<a<<endl;
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n;
	cin>>n;
	char arr[100];
	cin>>arr;
	Rotate(arr,n);
	cout<<arr;
	cout<<endl;
	return 0;
}