// Subsequences.cpp
#include <iostream>
using namespace std;

void Subsequences(char *in,int i,char *out,int j){
	// base case
	if(in[i] == '\0'){
		out[j] = '\0';
		cout<<out<<endl;
		return;
	}

	// recursive case
	// 1. Exclude ith character
	Subsequences(in,i+1,out,j);
	
	// 2. Include ith character
	out[j] = in[i];
	Subsequences(in,i+1,out,j+1);
}

int main(){
	
	char in[100],out[100];
	cin>>in;

	Subsequences(in,0,out,0);


	return 0;
}