// Julio Collado
// CSC133-01
// Lab01a.cpp
// This program will calculate the area of a square.
// The user is prompted to enter the number of inches on each side.

#include <iostream>
using namespace std;

int main()
{
	// Declare variables
	int inches;
	cout <<"Enter the number of inches on a side." <<endl;
	cout <<"Press the return key." <<endl;
	cin >> inches;
	cout << endl
		 <<"The area is " << inches * inches << "."<<endl;
	system ("pause");
	return 0;
} // End of main function

