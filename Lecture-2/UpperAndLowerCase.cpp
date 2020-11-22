// UpperAndLowerCase
#include <iostream>
using namespace std;

int main(){
	
	char ch = 66;
	cout<<ch<<endl;
	return 0;
	// cin>>ch;

	int x = ch;
	cout<<"Char : "<<ch<<" Ascii code : "<<x<<endl;

// 1st Way
	if(x>=65 && x<=90){
		cout<<"Upper Case"<<endl;
	}
	else if(x>=97 && x<=122){
		cout<<"Lower Case"<<endl;
	}
	else{
		cout<<"Invalid Character"<<endl;
	}
	cout<<endl;

// 2nd Way
	if(ch>='a' && ch<='z'){
		cout<<"Lower Case"<<endl;
	}
	else if(ch>='A' && ch<='Z'){
		cout<<"Upper Case"<<endl;
	}
	else{
		cout<<"Invalid "<<endl;
	}
	return 0;
}
