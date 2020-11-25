// BreakAndContinue
#include <iostream>
using namespace std;

int main(){
	int i = 1;

	while(i<=10){
		if(i == 4){
			i = i + 1;
			continue;
		}
		cout<<i<<endl;
		i++;
	}

	


	// for(i = 1; i<= 10 ; i++){
	// 	cout<<i<<' ';
	// 	if(i == 6){
	// 		break;
	// 	}

	// }

	cout<<endl;
	return 0;
}