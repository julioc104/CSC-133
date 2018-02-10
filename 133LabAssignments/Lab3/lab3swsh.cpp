// Julio Collado
// CSC133-01
// lab03swsh.cpp
// The following program is used to calculate the area of shape that the user has inputed using switch statements

#include <iostream>
#include <math.h>
using namespace std;

int main()

{
	cout << "----------------------------------------------------------------------------------" << endl; 
	cout << "Julio Collado		CSC133-01		Lab03swsh.cpp		9/28/2017" << endl;
	cout << "----------------------------------------------------------------------------------" << endl;
	cout << "                                                   " << endl;
	
	float PI = 3.14;															// Declared constants
	
	int shape;																	// Declared variables
	float length;
	float width;
	float height;
	float area;
	float base;
	float radius;
	
	cout << "1 = Square" << endl;												// shows the user what each code stands for
	cout << "2 = Rectangle" << endl;
	cout << "3 = Parallelogram" << endl;
	cout << "4 = Circle" << endl;
	cout << "5 = Triangle" << endl;
	cout << endl;
	cout << "Enter a numeric code from 1 to 5 that represents the shape:  ";	// ask the user to input code for a shape
	cin  >> shape;
	cout << endl;
	
	switch(shape)					// checks each pssible case for shape 
	{
		case 1:
			cout << "Enter the length: "; 			// ask user to input values for variables needed to calculate the area 
			cin  >> length;
			area = pow(length,2);											// formula to calculate area
			cout << "The shape you selected is a square" << endl;			// displays the shape selected and the area
			cout << "The area of the square is " << area << endl;
			break;				// once it reaches this point breakindicates the program to get out of the switch statement 
		case 2:
			cout << "Enter the length: "; 
			cin  >> length;
			cout << "Enter the width: ";
			cin  >> width;
			area = length * width;
			cout << "the shape you selected is a rectangle" << endl;
			cout << "The area of the rectangle is " << area << endl;
			break;
		case 3:
			cout << "Enter the base: ";
			cin  >> base;
			cout << "Enter the height: ";
			cin  >> height;
			area = base * height;
			cout << "The shape you selected is a parallelogram" << endl;
			cout << "The area of the parallelogram is " << area << endl;
			break;
		case 4:
			cout << "Enter the radius: ";
			cin  >> radius;
			area = PI * pow(radius,2);
			cout << "The shape you selected is a circle" << endl;
			cout << "The area of the circle is " << area << endl;
			break;
		case 5:
			cout << "Enter the base: ";
			cin  >> base;
			cout << "Enter the height: ";
			cin  >> height;
			area = (0.5) * base * height;
			cout << "The shape you selected is a triangle" << endl;
			cout << "The area of the triangle is " << area << endl;
			break;
		default:										// if none of the statements hold true it goes to the default case
			cout << "ERROR: The code you have entered  " << shape << " is invalid. " << endl;	
			cout << "Please enter the correct code" << endl;					// shows user an error message 
	}
	system ("PAUSE");
	return 0;											// end of main function
}
	
