// UserDefined_Vector.cpp
#include <iostream>
using namespace std;

class Vector{
public:
	int *arr;
	int cs;
	int ms;
	// Constructor
	Vector(int s = 2){
		ms = s;
		cs = 0;
		arr = new int[ms];
	}

	void push_back(int data){
		if(cs == ms){
			int *oldarr = arr;
			int oldms = ms;
			arr = new int[2*ms];
			ms*=2;

			for(int i = 0 ; i < oldms; i++){
				arr[i] = oldarr[i];
			}
			
			delete []oldarr;
		}
		arr[cs++] = data;
	}

	void pop_back(){
		if(cs>0){
			cs--;
		}
	}

	int capacity(){
		return ms;
	}

	int size(){
		return cs;
	}

	int operator[](int i){
		return arr[i];
	}

};

int main(){
	
	Vector v;

	for(int i = 1 ; i <= 17; i++){
		v.push_back(i);
	}

	cout<<"Current size : "<<v.size()<<endl;
	cout<<"Current Capacity : "<<v.capacity()<<endl;
	v.pop_back(); // Removes the last element
	for(int i = 0 ; i < v.size() ; i++){
		cout<<v[i]<<' ';
	}


	cout<<endl;
	return 0;
}