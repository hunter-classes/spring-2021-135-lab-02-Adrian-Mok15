//Adrian Mok
//CSCI 13500
//Professor Tong Yi
//Lab2a
//
//
//
//
#include <iostream>
using namespace std;

int main()
{
	int n = -1;
	while(n<0||n>100){
		cout<< "Please enter a number: ";
		cin>>n;
	}
	cout<< n*n <<"\n";
}