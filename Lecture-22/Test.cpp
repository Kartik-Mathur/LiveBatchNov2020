#include <iostream>
#include <vector>
using namespace std;

class node{
public:
	int data;
	node* next; // self referential class

	node(int d):data(d),next(NULL){}
};

int main(){
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	
	node n1(1);
	node n2(2);

	n1.next = &n2;
	// (*n1.next).data == n1.next->data
	cout<<n1.data<<"-->"<<n1.next->data;


	cout<<endl;
	return 0;
}