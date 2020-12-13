#include <iostream>
using namespace std;

void ReadString(char *arr1,char delimiter = '\n'){
	int i = 0 ;
	char ch = cin.get();
	while(ch!=delimiter){
		arr1[i++] = ch;
		ch = cin.get();
	}
	arr1[i] = '\0';	
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif	

	char arr1[100];

	ReadString(arr1,'$');
	// cin.getline(array_name,characters_you_want_to_ip,delimiter)
	// by default delimiter is newline-> '\n'
	// cin.getline(arr1,100); // cin.getline(arr,n); n:total characters you want to input
	// including null
	cout<<arr1<<endl;
	// for(int i = 0 ; arr1[i] != '\0' ; i++){
	// 	cout<<arr1[i]<<" ";
	// }
	// cout<<endl;	
	return 0;
}