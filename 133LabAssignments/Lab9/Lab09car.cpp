 // Julio Collado
// CSC 133-01
// Lab09car.cpp
// 

#include<iostream>
#include<fstream>
#include<iomanip>
#include<math.h>

// Global Variables
const int CAR_MODEL = 12;
const int SALES_PERSON = 11;


using namespace std;

// declaring all function prototypes herest
int readSales(double salesReport[][SALES_PERSON], ifstream& infile);
int printSales(double salesReport[][SALES_PERSON]);
int printTotalAverage(double salesReport[][SALES_PERSON]);
int mostCarModelSold(double salesReport[][SALES_PERSON]);
int leastCarModelSold(double salesReport[][SALES_PERSON]);
int bestSalesPerson(double salesReport[][SALES_PERSON]);
int worstSalesPerson(double salesReport[][SALES_PERSON]);

// the main program function goes here
int main()
{
	ifstream infile;
	
	infile.open("E:/FALL2017/CSC133-01/133LabAssignments/Lab9/Lab09inp.dat");
	
	cout << "----------------------------------------------------------------------------------" << endl; 
	cout << "Julio Collado		CSC133-01		Lab09car.cpp		11/30/2017" << endl;
	cout << "----------------------------------------------------------------------------------" << endl;
	cout << "                                                   " << endl;
	
	cout << "\t   MCC Automobile Sales Report For The Month Of June \t" << endl;
	cout << " 	\t   Report Prepared By: Julio Collado \t" << endl << endl;
	cout << "Car		S   A	L   E   S   P   E   R   S   O   N			 " << endl;
	cout << "Model  	1	2	3	4	5	6	7	8	Total	Average" << endl;
	cout << "----------------------------------------------------------------------------------------" << endl;
	
	double salesReport[CAR_MODEL][SALES_PERSON];
	
	readSales(salesReport, infile);
	printSales(salesReport);
	printTotalAverage(salesReport);
	mostCarModelSold(salesReport);
	leastCarModelSold(salesReport);
	bestSalesPerson(salesReport);
	worstSalesPerson(salesReport);
	system("PAUSE");
	return 0;
}

// Function: readSales
// Purpose: reads in the number of sales of each salesperson.
int readSales(double salesReport[][SALES_PERSON], ifstream& infile)
{
	for(int row = 0; row < CAR_MODEL-2; row++)
	{
		for(int column = 1; column < SALES_PERSON-2; column++)
		{
			infile >> salesReport[row][column];
		}
	} 
	return 0;
}

// Function: printSales
// Purpose: This function prints the number of sales of each salesperson.
int printSales(double salesReport[][SALES_PERSON])
{
	double average;
	double sum;
	double count;
	
	for(int row = 0; row < CAR_MODEL-2; row++)
	{
		cout << row + 1 << "	";
		sum = 0;
		count = 0;
		for(int column = 1; column < SALES_PERSON - 2; column++)
		{
			cout << (int) salesReport[row][column] << "	";
			sum = sum + salesReport[row][column];
			count++;
		}
		average = sum / count;
		salesReport[row][9] = sum;
		salesReport[row][10] = average;
		cout << (int) sum << "	" << setprecision(2) << fixed << average << endl;
	}
	cout << "----------------------------------------------------------------------------------------" << endl;
	return 0;
}
// Function: printTotalAverage
// Purpose: This function prints the last two rows 
int printTotalAverage(double salesReport[][SALES_PERSON])
{
	double sum;
	double count;
	double average;
	
	cout << "Total	";
	
	for(int column = 1; column < SALES_PERSON - 1; column++)
	{	
		sum = 0;
		for(int row = 0; row < CAR_MODEL- 2; row++)
		{
			sum = sum + salesReport[row][column];
		}
		
		average = sum / (CAR_MODEL - 2);
		salesReport[11][column] = sum;
		salesReport[12][column] = average;
		cout << (int) sum << "	";
	}
	
	sum = 0;
	for (int row = 0; row < CAR_MODEL - 2; row++) 
	{
		sum = sum + salesReport[row][CAR_MODEL -2];
	}
	
	cout << sum;
	
	cout << endl;
	cout << "Average	";
	int row = 12;
	for(int column = 1; column < SALES_PERSON - 1; column++)
	{
		cout << setprecision(2) << fixed << salesReport[row][column] << "	";
	}
	cout << sum / (CAR_MODEL - 2) << endl;
	cout << "----------------------------------------------------------------------------------------" << endl;
}

// Function: mostCarModelSold
// Purpose: This function finds the car model that sold the most.
int mostCarModelSold(double salesReport[][SALES_PERSON])
{
	int column = 9;
	double largest;
	int largestRow = 0;
	int row;
	
	largest = salesReport[0][column];
	
	for(row = 0; row < CAR_MODEL-2; row++)
	{
		if(salesReport[row][column] > largest) 
		{
			largest = salesReport[row][column];
			largestRow = row;
		}
	}
	
	cout << "The Car Model that sold the most number of cars is the model " << largestRow + 1 << "." << "There were " << (int) largest << " sold." << endl;	
		
	return 0;
}

// Function: leastCarModelSold
// purpose: This function finds the car model that sold the least.
int leastCarModelSold(double salesReport[][SALES_PERSON])
{
	int column = 9;
	double lowest;
	int lowestRow = 0;
	int row;
	
	lowest = salesReport[0][column];
	
	for(row = 0; row < CAR_MODEL-2; row++)
	{
		if(salesReport[row][column] < lowest) 
		{
			lowest = salesReport[row][column];
			lowestRow = row;
		}
		
	}
	
	cout << "The Car Model that sold the least number of cars is the model " << lowestRow + 1 << "." << "There were " << (int) lowest << " sold." << endl;
	
	return 0;
}

// Function: bestSalesPerson
// purpose: This function finds the salesperson who sold the most number of cars.
int bestSalesPerson(double salesReport[][SALES_PERSON])
{
	int row = 11;
	double largest;
	int largestCol = 1;
	int column;
	
	largest = salesReport[row][1];
	
	for(column = 1; column < SALES_PERSON-2; column++)
	{
		if(salesReport[row][column] > largest)
		{
			largest = salesReport[row][column];
			largestCol = column;
		}
	}
	
	cout << "The SalesPerson who sold the most number of cars is " << largestCol << "." << "That person sold " << (int) largest << " cars. " << endl;
	
	return 0;
}

// Function: worstSalesPerson
// purpose: This function finds the salesperson who sold the least number of cars.
int worstSalesPerson(double salesReport[][SALES_PERSON])
{
	int row = 11;
	double lowest;
	int lowestCol = 1;
	int column;
	
	lowest = salesReport[row][1];
	
	for(column = 1; column < SALES_PERSON-2; column++)
	{
		if(salesReport[row][column] < lowest)
		{
			lowest = salesReport[row][column];
			lowestCol = column;
		}
	}
	
	cout << "The SalesPerson who sold the least number of cars is " << lowestCol << "." << "That person sold " << (int) lowest << " cars. " << endl;
	cout << "----------------------------------------------------------------------------------------" << endl;
	return 0;
}


