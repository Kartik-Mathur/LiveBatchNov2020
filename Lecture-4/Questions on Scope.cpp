// Questions on Scope
#include <iostream>
using namespace std;

int x = -100;

int main(){
	
	cout<<x<<endl;
	int x = 100;

	if(x>0){
		cout<<"1 : "<<x<<endl;
		cout<<"2 : "<<::x<<endl;
		if(::x>0){
			cout<<"3 : "<<x<<endl;
		}
		else{
			::x = ::x+ 100;
		}
	}
	if(x>0){
		int x = 400;
		cout<<"4 : "<<::x<<endl;
		cout<<"5 : "<<x<<endl;
	}


	return 0;
}