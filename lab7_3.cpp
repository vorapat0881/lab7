#include<iostream>
using namespace std;

char before(char x){
	if(x <= 'Z' && x > 'A'){
		return x = x - 1;
	}
	if(x == 'A'){
	char y = 'Z';
		return y;
	}
	else{
	    char z = '0';
		return z;
	}
}

	//Write your function definition here

int main(){
	//Test Case
	cout << before('A') << "\n";
	cout << before('B') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";
	return 0;
}
