// CheckPermutations
#include <iostream>
using namespace std;
bool isPermutation(char *a, char *b){
	int freqa[26] = {0};
	int freqb[26] = {0};

	for(int i = 0 ; a[i] != '\0' ; i++){
		int indx = a[i] - 'a';
		freqa[indx]++;
	}
	for(int i = 0 ; b[i] != '\0' ; i++){
		int indx = b[i] - 'a';
		freqb[indx]++;
	}

	for(int i = 0 ; i < 26 ; i++){
		if(freqa[i] != freqb[i]){
			return false;
		}
	}
	return true;
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	char a[100],b[100];
	cin>>a>>b;

	if(isPermutation(a,b)){
		cout<<"Yes";
	}
	else{
		cout<<"No";
	}


	cout<<endl;
	return 0;
}