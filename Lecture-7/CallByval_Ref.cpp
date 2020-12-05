// CallByval&Ref
#include <iostream>
using namespace std;

void Update(int &x){
	x = x+1;
	cout<<"a inside Update "<<x<<endl;
}

int main(){
	
	int a = 1;
	cout<<a<<endl;	

	Update(a);
	cout<<"a inside main ";
	cout<<a<<endl;	

	return 0;
}