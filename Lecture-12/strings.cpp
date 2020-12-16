// strings.cpp
#include <iostream>
#include <cstring>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	// Initialization 
	// 1. string s = "Hello World";
	// 2. string s("Hello World");
	// 3. char a[]="Hello World";
	//    string s(a);

	string s;
	getline(cin,s);
	cout<<s.substr(3,3)<<endl;

	cout<<s<<endl;
	cout<<s.length()<<endl;
	string s1 = "Strings are an alternative of character arrays.";
	s+=s1;
	cout<<s1<<endl;
	cout<<s<<endl;
	s = "ABC";
	s1 = "DEF";

	if(s>s1){
		cout<<s<<" is greater than "<<s1<<endl;
	}
	else{
		cout<<s1<<" is greater than "<<s<<endl;
	}

	s.push_back('D');
	cout<<s<<endl;
	s.pop_back();
	s.pop_back();
	cout<<s<<endl;


	return 0;
}
