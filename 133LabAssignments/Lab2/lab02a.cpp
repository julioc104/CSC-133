// Julio Collado
// CSC133-01
// Lab02a.cpp
// This program will calculate the amount of wood needed to be purchased in order to create a rectangular wood frame.

#include <iostream>
#include <iomanip>
using namespace std;

int main()

{
	cout << "--------------------------------------------------------------------------------------" << endl; 
	cout << "Julio Collado		CSC133-01		Lab02a.cpp		9/26/2017" << endl;
	cout << "--------------------------------------------------------------------------------------" << endl;
	cout << "                                                   " << endl;
	
	double vertical_dimension;								// Declared variables
	double horizontal_dimension ;
	double total_amount; 
	
	cout << fixed;
	
	cout <<"Input one vertical dimension in inches: ";    // ask the user to input two dimensions in inches
	cin  >> vertical_dimension;
	cout <<"Input one horizontal dimension in inches: " ;
	cin  >> horizontal_dimension;
	cout << endl;
	
	cout << setprecision(3);
	total_amount = (vertical_dimension * 2) + (horizontal_dimension * 2);          // calculation needed 
	cout <<"The amount of wood needed in inches = " << total_amount << endl;			// display answer in both inches & feet
	cout <<"The amount of wood needed in feet = "  << (total_amount / 12) << endl;
	system ("pause");
	return 0;
									
} // End of main function 
