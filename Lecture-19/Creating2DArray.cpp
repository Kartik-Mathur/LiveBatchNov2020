// Creating2DArray
#include <iostream>
using namespace std;

int main(){
	
	int **arr;
	int rows,col;
	cin>>rows>>col;
	// Creating two d array
	arr = new int*[rows];
	for(int i = 0 ; i < rows ; i++){
		arr[i] = new int[col];
	}
	int number = 1;
	for(int i = 0 ; i < rows ; i++){
		for(int j = 0 ; j < col ; j++){
			arr[i][j] = number++;
		}
	}

	// Printing 2d array
	for(int i = 0 ; i < rows ; i++){
		for(int j = 0 ; j < col ; j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}

	// Deleting the two d aray
	// Delete all the columns array
	for(int i = 0 ; i < rows ; i++){
		delete []arr[i];
	}

	delete []arr;
	arr = NULL;

















	return 0;
}