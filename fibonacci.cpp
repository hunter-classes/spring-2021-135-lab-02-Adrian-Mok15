//Adrian Mok
//CSCI 13500
//Professor Tong Yi
//Lab2d

#include <iostream>
using namespace std;

int main(){
	// int a,b,c; //
	double fib[60];
	fib[0] = 0;
	fib[1] = 1;
	for(int i = 2; i<60; i++){
		fib[i] = fib[i-1]+fib[i-2];
	}
	for(int i = 0; i<60;i++){
		cout << fib[i]<< "\n";
	}
}