// Julio Collado
// CSC133-01
// Lab02b.cpp
// This program will calculate the final cost of the items purchased with a discount applied.

#include <iostream>
#include <iomanip>
using namespace std;

int main()

{
	cout << "--------------------------------------------------------------------------------------" << endl; 
	cout << "Julio Collado		CSC133-01		Lab02b.cpp		9/26/2017" << endl;
	cout << "--------------------------------------------------------------------------------------" << endl;
	cout << "                                                   " << endl;
	
	const float TAX_RATE = 0.07;							// Declare constants
	
	double costPerItem;										// Declared variables
	double itemsPurchased;
	double discountRate;
	double totalCost;
	double discountAmount;
	double costAfterDiscount;
	double taxAmount;
	double finalCost;
	
	cout << fixed << showpoint;


	cout << "Enter the cost per item: " ; 					// Ask user to input values
	cin  >> costPerItem;
	cout << "Enter number of items purchased: ";
	cin  >> itemsPurchased;
	cout << "Enter discount rate: ";
	cin  >> discountRate;
	cout << endl;
	
	totalCost = costPerItem * itemsPurchased;				// Calculation needed ( Continues in the back)
	discountAmount = totalCost * (discountRate / 100);
	costAfterDiscount = totalCost - discountAmount;
	taxAmount = costAfterDiscount * TAX_RATE;
	finalCost = costAfterDiscount - taxAmount;
	
	cout << setprecision(2);
	
	cout << "Total cost before discount and before tax = " << totalCost << endl;			// Display answers 
	cout << "Discount amount = " << discountAmount << endl;
	cout << "Cost after the discount amount is applied = " << costAfterDiscount << endl;
	cout << "Tax amount = " << taxAmount << endl;
	cout << "Final cost = " << finalCost << endl;
	system ("pause");
	return 0;
	
}
