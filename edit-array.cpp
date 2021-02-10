//Adrian Mok
//CSCI 13500
//Professor Tong Yi
//Lab2c

#include <iostream>
using namespace std;
int main(){
	int a,b;
	int num[10];
	for(int i = 0;i<10;i++){ //sets all the numbers in the array to 1
		num[i]=1;
		cout<< num[i] << " ";	 // prints all the numbers in on line
	}
	cout << "\n";
	
	do{
		cout << "Enter index: ";//input index
		cin >> a;
		cout << "Enter Value: ";//input numbers
		cin >> b;
		if(a>=0 && a<10){ //only redefine number in the index if valid index is given, otherwise do not print or redefine and exit.
			num[a]=b;
			for(int i = 0;i<10;i++){
			cout<< num[i] << " ";
			}
		}
		cout << endl;
	}while(a>=0 && a<10);

	cout << "Index out of range. Exit\n";//Index out of range

	
}