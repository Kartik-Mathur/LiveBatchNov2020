#include <iostream>
using namespace std;


int main(){
	string s;
	cin>>s;

	cout<<s<<endl;
	cout<<s.length()<<endl;
	cout<<s.substr(1)<<endl;
	cout<<s.substr(1).length()<<endl;
	cout<<s.substr(2)<<endl;
	cout<<s.substr(2).length()<<endl;
	return 0;
}