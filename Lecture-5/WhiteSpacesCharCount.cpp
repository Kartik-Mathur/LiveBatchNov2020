// WhiteSpacesCharCount
#include <iostream>
using namespace std;

int main(){
	
	int digits = 0,alpha = 0,white = 0,special = 0;	


	char ch;
	ch = cin.get();

	while(ch!='$'){

		if(ch>='0' && ch<='9'){
			digits++;
		}
		else if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
			alpha++;
		}
		else if(ch == ' '|| ch == '\t' || ch == '\n'){
			white++;
		}
		else{
			special++;
		}

		ch = cin.get();
	}


	cout<<"Digits are "<<digits<<endl;
	cout<<"Alpha are  "<<alpha<<endl;
	cout<<"WhiteSpaces are "<<white<<endl;
	cout<<"Special Characters are "<<special<<endl;

	return 0;
}