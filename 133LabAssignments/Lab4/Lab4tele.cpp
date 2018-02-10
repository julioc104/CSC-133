// Julio Collado
// CSC133-01
// lab4tele.cpp
// the purpose of this program is to read the letter codes of a telephone number ad that the user has inputed 
// and coverts them into their corresponding number patterns.

#include <iostream>
using namespace std;

int main()

{
	cout << "----------------------------------------------------------------------------------" << endl; 
	cout << "Julio Collado		CSC133-01		Lab4tele.cpp		10/13/2017" << endl;
	cout << "----------------------------------------------------------------------------------" << endl;
	cout << "                                                   " << endl;
	
	
		char start;
		char telephone[10];					// states that telephone is an array of 10
		char repeat;
		int counter;						
		
		
		cout << "Do you wish to convert a telephone letter pattern? (Y/N) : " ;
		cin  >> start; 
		cout << endl;
		
		if (start == 'Y' || start =='y' )
		{
			do
			{
				cout << "What is the telephone number? : " ;
				cin  >> telephone;
				cout << endl;
				counter = 0;					// keeps a counter of how many numbers are being converted
				
				for (int i = 0; i < 11; i++)
				{
					switch ( telephone[i] )					// Tests each case to match it up with the correct number
					{
						case 'A': case 'a' : case 'B' : case 'b' : case 'C' : case 'c' :
							telephone[i] = '2';
							counter ++;
							break;
						case 'D' : case 'd' : case 'E' : case 'e' : case 'F' : case 'f' :
							telephone[i] = '3';
							counter ++;
							break;
						case 'G' : case 'g' : case 'H' : case 'h' : case 'I' : case 'i' :
							telephone[i] = '4';
							counter ++;
							break;
						case 'J' : case 'j' : case 'K' : case 'k' : case 'L' : case 'l' :
							telephone[i] = '5';
							counter ++;
							break;
						case 'M' : case 'm' : case 'N' : case 'n' : case 'O' : case 'o' :
							telephone[i] = '6';
							counter ++;
							break;
						case 'P' : case 'p' : case 'Q' : case 'q' : case 'R' : case 'r' : case 'S' : case 's' :
							telephone[i] = '7';
							counter ++;
							break;
						case 'T' : case 't' : case 'U' : case 'u' : case 'V' : case 'v' :
							telephone[i] = '8';
							counter ++;
							break;
						case 'W' : case 'w' : case 'X' : case 'x' : case 'Y' : case 'y' : case 'Z' : case 'z' :
							telephone[i] = '9';
							counter ++;
							break;
						default:
							telephone[i] = telephone[i];						// if it is not a letter it displays the same thing				
					}
				}
				
				cout << "The telephone conversion of your input is " << telephone << endl << endl;
				cout << "#################################################################################" << endl << endl;
				cout << "Would you like to enter another telephone number? (Y/N) : " ;				
				cin  >> repeat;	
				cout << endl;
				
				if (repeat == 'N' || repeat == 'n' )	 			// If user says no display ok goodbye							
				{
					cout << "Ok Goodbye " << endl;
				}
			}
			while (repeat == 'Y' || repeat == 'y');					
		}
		else if (start == 'N' || start == 'n')					// if user does not want to start the program terminate it.
		{
			cout << "Ok Goodbye " << endl;
		}
		else 
		{
			cout << "Invalid response. Please input a valid response (Y/N) " << endl; 
		}
	system ("PAUSE");
	return 0;	
}
	
