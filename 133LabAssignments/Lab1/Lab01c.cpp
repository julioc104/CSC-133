// Julio Collado
// CSC133-01 
// Practice Lab01c.cpp
// This program displays the values stored in the variable when they are not initialized.

#include<iostream>
using namespace std;

int main()
{
	//Declare Variables
	char	response;
	short	hours_wkd;
	int		sales;
	long	city_pop;
	double	sales_amt;
	float	tax_rate;
	//Display the contents of the variables
	cout << "Variable        " << "Value" <<endl;
	cout << "________________" << "_________________ " <<endl;
	cout << "response is     " << response<<endl;
	cout << "hours_wkd is    " << hours_wkd<<endl;
	cout << "sales is        " << sales<<endl;
	cout << "city_pop is     " << city_pop<<endl;
	cout << "sales_amt is    " << sales_amt<<endl;
	cout << "tax_rate is     " << tax_rate<<endl;
	cout <<endl;
	system ("pause");
	return 0;
} // End of main function 

