// PhoneKeyPad
#include <iostream>
using namespace std;

char keys[10][10]={
	"","","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"
};

void PhoneKeyPad(char *in,int i,char*out ,int j){
	// base case
	if(in[i] == '\0'){
		out[j] = '\0';
		cout<<out<<endl;
		return;
	}

	// recursive case
	int digit = in[i] - '0';
	
	for(int k = 0 ; keys[digit][k]!='\0' ; k++){
		out[j] = keys[digit][k];
		PhoneKeyPad(in,i+1,out,j+1);
	}
}

int main(){
	char in[100],out[100];
	cin>>in;
	PhoneKeyPad(in,0,out,0);

	return 0;
}

