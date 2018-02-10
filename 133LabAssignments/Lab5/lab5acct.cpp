// Julio Collado
// CSC133-01
// lab5acct.cpp
//The purpose of this program is to print the transactions of a checking account.


#include <iostream>
#include <iomanip>
#include <fstream>


using namespace std;

int main()

{
	ifstream infile;
	ofstream outfile;
	
	infile.open("E:/FALL2017/CSC133-01/133LabAssignments/Lab5/lab5chek.dat");
	outfile.open("E:/FALL2017/CSC133-01/133LabAssignments/Lab5/lab5acct.rpt");
	
	
	outfile << "----------------------------------------------------------------------------------" << endl; 
	outfile << "Julio Collado		CSC133-01		Lab5acct.cpp		10/26/2017" << endl;
	outfile << "----------------------------------------------------------------------------------" << endl;
	outfile << "                                                   " << endl;
	
	double number;
	int count = 0;
	float sum;
	
	
	if(infile)
	{
		outfile << "\n * THE MCC BANK STATEMENT * \n";
		outfile << "----------------------------------------------" << endl;
		infile  >> number;
		outfile << "Opening Balance		= " << number << "		" << endl;
		outfile << "----------------------------------------------" << endl;
		outfile << "				  New Balance " << endl;
		
		outfile << setiosflags(ios::fixed) << setiosflags(ios::showpoint) << setprecision(2);
		sum = number;
		
		do
		{
			infile >> number;
			
			if (number > 0)
			{
				sum = sum + number;
				count ++;
				outfile << "Deposit			= " << setw(6) << number <<"     " << sum << endl;
			}
			else if (number < 0) 
			{
				sum = sum + number;
				count ++;
				number = (-1) * number;
				outfile << "Withdrawal		= " << setw(6) << number <<"     " << sum << endl;
			}
		}
		while (number != 0);
		
		outfile << "----------------------------------------------" << endl;
		outfile << "Closing Balance		= " << sum << "		" << endl;
		outfile << "----------------------------------------------" << endl;
		outfile << "There are " << count << " transactions in this statement." <<endl;	
	}
	else
	{
		cout << "An error has occured while opening the input data file " << endl;
		//infile.close;
		//outfile.close;
	}
	system("PAUSE");
	return 0;
}
	
	
