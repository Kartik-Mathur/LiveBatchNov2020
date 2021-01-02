// OOPs
#include <iostream>
using namespace std;
///////////////////////// BLUEPRINT ////////////////////////////
class Car{
public:
	char name[100];
	int model;
	int price;
	int seats;
	
	// Constructor - We use constructor to create an Object, it helps to create an Object
	// 1. Default Constructor
	Car(){
		// cout<<"In Default Constructor"<<endl;
	}

	// 2. Parameterized Constructor
	Car(char *n,int m,int p,int s){
		// cout<<"Inside Parameterized Constructor"<<endl;
		strcpy(name,n);
		model = m;
		price = p;
		seats = s;
	}

	// Print all the details
	void Print(){
		cout<<"Name : "<<name<<endl;
		cout<<"Price: $"<<price<<endl;
		cout<<"Model: "<<model<<endl;
		cout<<"Seats: "<<seats<<endl<<endl;
	}

};
///////////////////////// !BLUEPRINT ////////////////////////////

int main(){
	Car A; // This takes space, when object is created constructor is called
	// Constructor creates the object, and it gets called when the object is created
	// A.name = "BMW";
	strcpy(A.name,"BMW");
	A.price = 100;
	A.model = 2020;
	A.seats = 4;
	A.Print();
	// cout<<A.name<<endl;
	// cout<<A.price<<endl;
	// cout<<A.model<<endl;
	// cout<<A.seats<<endl;
	// char x[100]="Audi";
	Car B("Audi",2019,150,2);
	
	B.Print();
	
	return 0;
}