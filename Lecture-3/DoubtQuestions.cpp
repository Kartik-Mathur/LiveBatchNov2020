// DoubtQuestions
#include <iostream>
using namespace std;

int main(){
	
	int n;
	cin>>n;

	for(int row = 1 ; row <= n ; row++){

		// Print row->row times
		for(int i = 0 ; i<row ;i++){
			cout<<row<<' ';
		}
		int no = row+1;
		for(int i = 0  ; i<n-row ; i++){
			cout<<no<<' ';
			no++;
		}
		cout<<endl;
	}


	// cout<<endl;
	return 0;
}