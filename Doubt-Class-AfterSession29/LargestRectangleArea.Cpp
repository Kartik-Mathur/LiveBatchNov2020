#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];

	int left[n];
	int right[n];
	stack<int>s;
	s.push(0);
	left[0]=1;
	for(int i=1;i<n;i++){
		while(!s.empty() && arr[s.top()]>=arr[i])
			s.pop();
		if(s.empty())
			left[i]=i+1;
		else
			left[i]=i-s.top();
		s.push(i);
	}

	//for(int i=0;i<n;i++)
	//	cout << left[i] << " ";
	//cout << endl;
	while(!s.empty())
		s.pop();

	right[n-1]=0;
	s.push(n-1);

	for(int i=n-2;i>=0;i--){
		while(!s.empty() && arr[s.top()]>=arr[i])
			s.pop();
		if(s.empty())
			right[i]=n-1-i;
		else
			right[i]=s.top() -1 -i;
		s.push(i);
	}
    
   // for(int i=0;i<n;i++)
	//	cout << right[i] << " ";
	//cout << endl;
	int ans=INT_MIN;

	for(int i=0;i<n;i++){
		//width
		int x=left[i]+right[i];
		ans =max(ans,arr[i]*x);

	}


cout << ans << endl;


	
}


