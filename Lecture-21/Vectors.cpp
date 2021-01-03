// Vectors
#include <iostream>
#include <vector> // Header file to use vectors
#include <algorithm>
using namespace std;

bool compare(int a,int b){
	return a<b;
}

int main(){
	// vector<datatype> v; -> syntax
	// vector<int> v;
	// vector<int> v(size); -> Alternative
	// vector<int> v(20); 
	int a[] = {7,6,8,5,4,0,-1,-2};
	int n = sizeof(a)/sizeof(int);
	vector<int> v(a,a+n);

	sort(v.begin(),v.end(),compare);
	// sort(v.rbegin(),v.rend()); //--> sort in descending order

	// v.push_back(1);
	// v.push_back(2);
	// v.push_back(3);
	// v.push_back(4);
	// v.push_back(5);
	// v.push_back(6);
	// v.push_back(7);
	// v.push_back(8);
	// v.push_back(9);
	
	// int n = 10;
	// for(int i = 0 ; i < n ; i ++){
	// 	v[i] = i+1;
	// }

	// cout<<"Current size : "<<v.size()<<endl;
	// cout<<"Current Capacity : "<<v.capacity()<<endl;
	// v.pop_back(); // Removes the last element
	for(int i = 0 ; i < v.size() ; i++){
		cout<<v[i]<<' ';
	}

	cout<<endl;
	return 0;
}