/*Adrian Mok
CSCI 135
Professor Tong Yi
Lab2b*/

#include <iostream>
#include "funcs.h"
// using namespace std;

int main(){
	int L,U;

	std::cout << "[Test] L = 5, U = 10\n" << std::endl;
	print_interval(5,10);
	std::cout << "[Test] L = -1, U = 13\n" << std::endl;
	print_interval(-1,13);
	std::cout << "[Test] L = 4, U = 20\n" << std::endl;
	print_interval(4,20); 
	std::cout << "[Test] L = -7, U = 1\n"<< std::endl;
	print_interval(-7,1); 

	std::cout << "Please Enter L: \n";
	std::cin >> L;
	std::cout << "Please Enter U: \n";
	std::cin >> U;
	print_interval(L, U);
	return 0;
}