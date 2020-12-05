#include <iostream>
#include <cmath>
using namespace std;

int main(){
	
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	// #endif

	int n;
	cin>>n;
	int a[100001];
	int ans = 0;
	for(int i = 0 ; i < n ; i++){
		cin>>a[i];
		ans = ans^a[i];
	}

	// ans = 5^3
	int temp = ans,bitpos = 0;
	while(temp!=0){
		if((temp&1) == 1){
			break;
		}
		bitpos++;
		temp=temp>>1;
	}

	int val = pow(2,bitpos);

	// cout<<val<<endl;


	int no1 = 0;
	for(int i = 0 ; i < n ; i++){
		if((a[i]&val) == 0){
			no1 = no1^a[i];
		}
	}

	int no2 = ans^no1;
	if(no1>no2){
		swap(no1,no2);
	}
	cout<<no1<<" "<<no2<<endl;




	return 0;
}