// CountCharacter
#include <iostream>
using namespace std;

int main(){
	
	int cnt =0;

	char ch;
	// cin>>ch; // cin ignores whitespaces
	ch = cin.get(); // cin.get() doesn't ignore whitespace characters

	while(ch != '$'){
		cnt++;
		// cin>>ch;
		ch = cin.get();
	}

	cout<<"Total Characters : "<<cnt<<endl;
	return 0;
}