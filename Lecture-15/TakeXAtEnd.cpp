// TakeXAtEnd
#include <iostream>
using namespace std;

string XKoPeecheLeJaao(string s){
	// base case
	if(s.length() == 0){
		string x="";
		return x;
	}
	// recursive case
	// string a = s.substr(0,1);
	string a;
	a.push_back(s[0]);
	string ChotiString = XKoPeecheLeJaao(s.substr(1)); // Pure Assumption ki aisa ho jaega
	if(a == "x"){
		string BadiString = ChotiString+a;
		return BadiString;
	}
	else{
		string BadiString = a+ChotiString;
		return BadiString;
	}
}

int main(){
	string s;
	cin>>s;

	string ans = XKoPeecheLeJaao(s);
	cout<<ans;

	cout<<endl;
	return 0;
}