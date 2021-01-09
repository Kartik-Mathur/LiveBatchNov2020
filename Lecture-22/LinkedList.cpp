#include <iostream>
#include <vector>
using namespace std;

class node{
public:
	int data;
	node* next; // self referential class

	node(int d):data(d),next(NULL){}
};

int length(node* head){
	int cnt = 0;
	while(head){
		cnt++;
		head = head -> next;
	}
	return cnt;
}

void InsertAtFront(node* &head,node* &tail,int data){
	node* n = new node(data);
	if(head == NULL){
		// We are inserting the first node
		head = tail = n;
	}
	else{
		// We have linkedList
		n->next = head;
		head = n;
	}
}

void InsertAtEnd(node* &head,node* &tail,int data){
	node* n = new node(data);
	if(head == NULL){
		// We are inserting the first node
		head = tail = n;
	}
	else{
		// We have linkedList
		tail -> next = n;
		tail = n;
	}
}

void InsertAtMid(node* &head,node* &tail,int data,int pos){
	if(pos == 0){
		InsertAtFront(head,tail,data);
	}
	else{
		node* temp = head;
		node* n = new node(data);
		for(int i = 1 ; i<= pos-1 ; i++){
			temp = temp->next;
		}
		n->next = temp->next;
		temp->next = n;
	}
}

void PrintLL(node* head){
	while(head){
		cout<<head->data<<"-->";
		head = head->next;
	}
	cout<<"NULL"<<endl;
}


int main(){
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	node* head=NULL,*tail=NULL;
	// InsertAtFront(head,tail,1);
	// InsertAtFront(head,tail,2);
	// InsertAtFront(head,tail,3);
	InsertAtEnd(head,tail,1);
	InsertAtEnd(head,tail,2);
	InsertAtEnd(head,tail,3);
	InsertAtEnd(head,tail,4);
	PrintLL(head);
	InsertAtMid(head,tail,5,2);
	PrintLL(head);
	InsertAtMid(head,tail,6,0);
	PrintLL(head);
	cout<<length(head)<<endl;
	PrintLL(head);
	return 0;
}