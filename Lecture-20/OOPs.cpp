// OOPs
#include <iostream>
using namespace std;
///////////////////////// BLUEPRINT ////////////////////////////
class Car{
public:
	char *name;
	int model;
	int price;
	int seats;
	
	// Constructor - We use constructor to create an Object, it helps to create an Object
	// 1. Default Constructor
	Car(){
		name = NULL;
		// cout<<"In Default Constructor"<<endl;
	}

	// 2. Parameterized Constructor
	Car(char *n,int m,int p,int s){
		// cout<<"Inside Parameterized Constructor"<<endl;
		name = new char[strlen(n)+1];
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

	void UpdateName(char *n){
		if(name != NULL){
			// There is some name already
			delete []name;
			name = NULL;
		}
		name = new char[strlen(n)+1];
		strcpy(name,n);
	}

};
///////////////////////// !BLUEPRINT ////////////////////////////

int main(){
	Car A; // This takes space, when object is created constructor is called
	// Constructor creates the object, and it gets called when the object is created
	// A.name = "BMW";
	// strcpy(A.name,"BMW");
	A.UpdateName("BMW");
	A.price = 100;
	A.model = 2020;
	A.seats = 4;
	// A.UpdateName("Maruti");
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