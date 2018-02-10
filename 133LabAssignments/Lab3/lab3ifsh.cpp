// Julio Collado
// CSC133-01
// lab03ifsh.cpp
// The following program is used to calculate the area of shape that the user has inputed using if statements

#include <iostream>
#include <math.h>
using namespace std;

int main()

{
	cout << "----------------------------------------------------------------------------------" << endl; 
	cout << "Julio Collado		CSC133-01		Lab03ifsh.cpp		9/28/2017" << endl;
	cout << "----------------------------------------------------------------------------------" << endl;
	cout << "                                                   " << endl;
	
	float PI = 3.14;											// Declared constants
	
	int shape;													// Declared variables 
	float length;
	float width;
	float height;
	float area;
	float base;
	float radius;
	
	
	cout << "1 = Square" << endl;										// shows the user what each code stands for
	cout << "2 = Rectangle" << endl;
	cout << "3 = Parallelogram" << endl;
	cout << "4 = Circle" << endl;
	cout << "5 = Triangle" << endl;
	cout << endl;
	cout << "Enter a numeric code from 1 to 5 that represents the shape:  ";	// Asks user to input code for a shape
	cin  >> shape;
	cout << endl;

	
	if (shape == 1 )											// Checks for code that the user has inputed 
	{																
		cout << "Enter the length: "; 				// Ask user to input values needed to calculate the area of that shape
		cin  >> length;
		area = pow(length,2);                                       //Calculation needed to find the area 
		cout << "The shape you selected is a square" << endl;       // Displays what shape it is and the area
		cout << "The area of the square is " << area << endl;
	}
	else if (shape == 2 )
	{	
		cout << "Enter the length: "; 
		cin  >> length;
		cout << "Enter the width: ";
		cin  >> width;
		area = length * width;
		cout << "the shape you selected is a rectangle" << endl;
		cout << "The area of the rectangle is " << area << endl;
	}
	else if (shape == 3)
	{
		cout << "Enter the base: ";
		cin  >> base;
		cout << "Enter the height: ";
		cin  >> height;
		area = base * height;
		cout << "The shape you selected is a parallelogram" << endl;
		cout << "The area of the parallelogram is " << area << endl;	
	}
	else if (shape == 4)
	{
		cout << "Enter the radius: ";
		cin  >> radius;
		area = PI * pow(radius,2);					// pow was used to raise the number stored for radius to a power of 2
		cout << "The shape you selected is a circle" << endl;
		cout << "The area of the circle is " << area << endl;	
	}
	else if (shape == 5)
	{
		cout << "Enter the base: ";
		cin  >> base;
		cout << "Enter the height: ";
		cin  >> height;
		area = (0.5) * base * height;
		cout << "The shape you selected is a triangle" << endl;
		cout << "The area of the triangle is " << area << endl;
	}
	else 
	{
		cout << "ERROR: The code you have entered  " << shape << " is invalid. " << endl;	
		cout << "Please enter the correct code." << endl;			// if user inputs incorrect code an error message will appear
	}
	system ("PAUSE");
	return 0;							// End of main function
}
	
		
	
	
		
		
	

