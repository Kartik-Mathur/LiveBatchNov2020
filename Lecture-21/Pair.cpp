// Pair
#include <iostream>
using namespace std;

class Pair{
public:
	int a,b;
	Pair(int a,int b){
		this->a = a;
		this->b = b;
	}

	bool operator<(const Pair &X) const{ // x<y
		// a , b -> will belong to x
		// X.a , X.b -> will belong to y
		if(a<X.a and b < X.b){
			return true;
		}
		else{
			return false;
		}
	}

	void operator[](const Pair &X){ // x[y]
		// a,b will belong to x, and (X.a,X.b)-> means y
		a = X.a;
		b = X.b;
	}
};

int main(){
	
	Pair x(20,40);
	Pair y(15,30);

	if(x<y){ // x ne operator ko call kara, comparison is done with y. Thus y will go in argument
		// For this thing to be true
		// x.a < y.a && x.b < y.b
		cout<<"X is less than y";
	}
	else{
		cout<<"Y is less than x";
	}
	cout<<x.a<<endl;
	cout<<x.b<<endl;

	// x ko y ki values mill jaay like this
	// x[y]; --> Lets assume we want to copy values of y into x
	x[y];  // This will not call copy constructor
	// Pair z(y); or Pair z = y; --> This calls copy constructor
	cout<<x.a<<endl;
	cout<<x.b<<endl;







	cout<<endl;
	return 0;
}