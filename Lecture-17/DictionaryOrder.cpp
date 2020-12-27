#include <iostream>
#include <algorithm>
using namespace std;
string s1;
void DictionaryLarge(string in,string out){
	// base case
	if(in.length() == 0){
		if(out>s1){
			cout<<out<<endl;
		}
		return;
	}

	// recursive case
	for(int i = 0 ; i < in.length() ; i++){
		string ChotiString = in.substr(0,i)+in.substr(i+1); // Sorted Choti String
		DictionaryLarge(ChotiString,out+in[i]);
	}
}

int main(){
	string s;
	cin>>s;
	// s = "abcde";
	// cout<<"String is : "<<s<<endl;
	s1 = s;
	// cout<<s+s1<<endl;
	sort(s.begin(),s.end());
	DictionaryLarge(s,"");
	// int i;
	// cin>>i;

	// cout<<"Extracter character : "<<s[i]<<endl;
	// cout<<"Choti String : "<<s.substr(0,i)+s.substr(i+1)<<endl;

	return 0;
}