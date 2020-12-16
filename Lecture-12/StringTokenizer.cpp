// StringTokenizer
#include <iostream>
#include <cstring>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	char a[100]="123.@@@@@$$##..4567.5.6.5.443''@#'12324.@#.$$32";

	// strtok(character_array,delimiters_list);
	char *ptr = strtok(a,".'$@#");
	cout<<ptr<<endl;
	// ptr = strtok(NULL,".'$@#");
	// cout<<ptr<<endl;
	// ptr = strtok(a,".'$@#");
	// cout<<ptr<<endl;
	
	while(ptr != NULL){
		cout<<ptr<<endl;
		ptr = strtok(NULL,".'@#$");
	}



	return 0;
}

