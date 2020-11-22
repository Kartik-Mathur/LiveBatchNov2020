// CelAndFarehn
#include <iostream>
using namespace std;

int main(){
	
	int init,fval,step,cel;
	cin>>init>>fval>>step;

	int f = init;
	while(f<=fval){

		cel = 5*(f-32)/9;
		cout<<f<<' '<<cel<<endl;

		f = f + step;
	}

	cout<<endl;


	return 0;
}