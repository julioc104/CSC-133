// Julio Collado
// CSC133-01
// lab5isbn.cpp
//The purpose of this lab is to write a program that tests an ISBN to see if it is valid.


#include <iostream>
using namespace std;

int main()

{
	cout << "----------------------------------------------------------------------------------" << endl; 
	cout << "Julio Collado		CSC133-01		Lab5isbn.cpp		10/13/2017" << endl;
	cout << "----------------------------------------------------------------------------------" << endl;
	cout << "                                                   " << endl;
	
	char isbn[10];
	int weightedSum;
	int multiplier;
	char repeat;
	
	do
	{
		cout << "please input a 10 digit ISBN:  " ;
		cin  >> isbn;
		cout << endl;
		weightedSum = 0;
		multiplier = 10;
		
		if ( isbn[0] == '-')										// checks to see if the number entered is negative
		{
			cout << "ERROR: please input a positive integer. " << endl << endl;
			
		}
		else
		{
			for (int n = 0; n < 10; n++ )
			{
				weightedSum = weightedSum + (((int)isbn[n] - 48) * multiplier);		// used (int) to cast char as an integer
				multiplier--;								// subtracted by 48 because 48 is the value for 0 in the ascii table
			}
	
			if (weightedSum % 11 == 0 )
			{
				cout << "The ISBN is Valid"  << endl << endl;
			}
			else 
			{
				cout << "The ISBN is Invalid" << endl << endl;
			}
		}
		
		
		cout << "Would you like to enter another ISBN? (Y/N) :  ";
		cin  >> repeat;
		cout << endl;
		cout << "###############################################################################################" << endl << endl;
				
		if (repeat == 'N' || repeat == 'n')
		{
			cout << "Program terminated. " << endl;
		}
	
	}
	while (repeat == 'Y' || repeat == 'y');
	
	system("PAUSE");
	return 0;
}

