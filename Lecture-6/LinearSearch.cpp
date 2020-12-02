// LinearSearch
#include <iostream>
using namespace std;

int main(){
	
	int a[] = {1,4,2,5,7,6};
	int n = sizeof(a)/sizeof(int);

	
	for(int i = 0 ; i < n ; i++){
		cout<<a[i]<<' ';
	}
	cout<<endl;
	
	int key;
	cout<<"Enter key : ";
	cin>>key;
	int i;

	for(i = 0 ; i < n ; i++){
		if(a[i] == key){
			cout<<"Key found at "<<i<<endl;
			break;
		}
	}

	if(i == n){
		cout<<"Key is not found"<<endl;
	}

	// bool isKeyPresent = false;

	// for(i = 0 ; i < n ; i++){
	// 	if(a[i] == key){
	// 		cout<<"Key found at "<<i<<endl;
	// 		isKeyPresent = true;
	// 		break;
	// 	}
	// }

	// if(isKeyPresent == false){
	// 	cout<<"Key is not found"<<endl;
	// }



	return 0;
}