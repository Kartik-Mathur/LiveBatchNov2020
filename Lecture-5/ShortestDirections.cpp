// Directions
#include <iostream>
#include <cmath>
using namespace std;

int main(){
	
	int x = 0,y = 0;

	char ch;

	ch = cin.get();

	while(ch!='\n'){

		if(ch == 'N'){
			y++;
		}
		else if(ch == 'S'){
			y--;
		}	
		else if(ch == 'E'){
			x++;
		}
		else{
			x--;
		}

		ch = cin.get();
	}

	// Identify the co-ordinate
	if(x>=0 && y>=0){
		// 1st Quad
		// xtimes E and y times N
		for(int i = 0 ; i < x ; i++){
			cout<<'E';
		}
		for(int i = 0 ; i < y ; i++){
			cout<<'N';
		}
	}
	else if(x<=0 && y>=0){
		// 2nd quad
		// y times N and |x| times W
		for(int i = 0 ; i < y ; i++){
			cout<<'N';
		}

		// x = |x|
		for(int i = 0 ; i < abs(x) ; i++){
			cout<<'W';
		}

	}
	else if(x<=0 && y<=0){
		// 3rd quad
		// |y| times S and |x| times W
		for(int i = 0 ; i < abs(y) ; i++){
			cout<<'S';
		}

		for(int i = 0 ; i < abs(x) ; i++){
			cout<<'W';
		}
	}
	else{
		// x times E and |y| times S
		for(int i = 0 ; i < x ; i++){
			cout<<'E';
		}

		for(int i = 0 ; i < abs(y) ; i++){
			cout<<'S';
		}
	}








	cout<<endl;
	return 0;
}