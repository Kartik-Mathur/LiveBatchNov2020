#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;

	int n=s.length();
	stack<char>s1;
	bool ans =true;
	for(int i=0;i<n;i++){
		if(s[i]!=')')
			s1.push(s[i]);
		else{
			bool flag=false;
			while(s1.top()!='('){
				if(s1.top()=='+' || s1.top()=='-' || s1.top()=='*' || s1.top()=='%')
					flag=true;
				s1.pop();
			}
			if(flag==false){
              ans =false;
			}
			s1.pop();
		}
	}

	if(ans ==false)
		cout << "Has Extra Brackets" << endl;
	else
		cout << "No it doesn't" << endl;
}


