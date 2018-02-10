// Julio Collado
// CSC 133-01
// Lab6tele.cpp
// This programn calculates & compares the local minutes & long distance charges for two telephone companies.

#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

// declaring all function prototypes here
float calculateLocalA(int localMin);
float calculateLongDistanceA(int longMin );
float calculateLocalB(int& localMin);
float calculateLongDistanceB(int& longMin);
float printTotalOutputs(float companyALocal, float companyADistant, float companyATotal, float companyBLocal, 
float companyBDistant, float companyBTotal);


// the main program function goes here
int main()
{
	ifstream infile;
	
	infile.open("E:/FALL2017/CSC133-01/133LabAssignments/Lab6/lab6data.dat");
	
	cout << "----------------------------------------------------------------------------------" << endl; 
	cout << "Julio Collado		CSC133-01		Lab6tele.cpp		11/6/2017" << endl;
	cout << "----------------------------------------------------------------------------------" << endl;
	cout << "                                                   " << endl;
	
	cout << "				  Long	    Long" << endl;
	cout << "Telephone Company Local   Local   Distance  Distance Total" << endl; 
	cout << "Number	  Code	  Minutes Charges Minutes   Charges  Charges" << endl;
	cout <<"-------------------------------------------------------------" << endl;
	
	const int MONTHLY_CHARGE_A = 10.00;
	const int MONTHLY_CHARGE_B = 7.00;
	
	int phoneNumber;
	char code;
	int localMins;
	int longDistanceMins;
	
	
	float localCharges;
	float longDistanceCharges;
	float totalCharges;
	
	float companyATotalLocal = 0;
	float companyATotalDistant = 0;
	float companyBTotalLocal = 0;
	float companyBTotalDistant = 0;
	float companyATotalCharges = 0;
	float companyBTotalCharges = 0;
	
	do
	{
		
		infile >> phoneNumber;
		infile >> code;
		
		if (code == 'A')
		{
			infile >> localMins;
			localCharges = calculateLocalA(localMins);
			companyATotalLocal = localCharges + companyATotalLocal;
			
			infile >> longDistanceMins;
			longDistanceCharges = calculateLongDistanceA(longDistanceMins);
			companyATotalDistant = longDistanceCharges + companyATotalDistant;
			
			totalCharges = localCharges + longDistanceCharges + MONTHLY_CHARGE_A;
			companyATotalCharges = totalCharges + companyATotalCharges;

			cout << fixed << showpoint;
			cout << setprecision(2);
			cout << phoneNumber << setw(6) << code << setw(9) << localMins << setw(9) << localCharges << setw(9); 
			cout << longDistanceMins << setw(9)<< longDistanceCharges << setw(9) << totalCharges << endl;
		}
		
		if (code == 'B')
		{
			infile >> localMins;
			localCharges = calculateLocalB(localMins);
			companyBTotalLocal = localCharges + companyBTotalLocal;
			
			infile >> longDistanceMins;
			longDistanceCharges = calculateLongDistanceB(longDistanceMins);
			companyBTotalDistant = longDistanceCharges + companyBTotalDistant;
			
			totalCharges = localCharges + longDistanceCharges + MONTHLY_CHARGE_B;
			companyBTotalCharges = totalCharges + companyBTotalCharges;
			
			cout << fixed << showpoint;
			cout << setprecision(2);
			cout << phoneNumber << setw(6) << code << setw(9) << localMins << setw(9) << localCharges << setw(9); 
			cout << longDistanceMins << setw(9)<< longDistanceCharges << setw(9) << totalCharges << endl;
		
		}	
	}
	while (phoneNumber != 0);
	printTotalOutputs(companyATotalLocal, companyATotalDistant, companyATotalCharges, 
	companyBTotalLocal, companyBTotalDistant, companyBTotalCharges);
	
	system("PAUSE");
	return 0;
}

// function: calculateLocalA
// purpose: this function calculates the local charge for company A
float calculateLocalA(int localMin)
{
    float totalLocalCharges = 0;
         
    if (localMin> 60)
    {
        totalLocalCharges = ((localMin - 60) * 0.25 );
        return totalLocalCharges;
    }
    
    return totalLocalCharges;
}

// function : calculateLongDistanceA
// purpose: this function calculates the long distance charge for company A
float calculateLongDistanceA(int longMin)
{
	float excedingCharge;
	float normalCharge;
	float totalLongDistantCharges = 0;
	
	if (longMin > 100)
	{
		excedingCharge = ((longMin - 100) * 0.17);
		longMin = 100;
	}
	else
	{
		excedingCharge = 0;
		
	}
	
	if (longMin <= 100)
	{
		normalCharge = longMin * 0.20;
	}
	
	totalLongDistantCharges = excedingCharge + normalCharge;
	
	return totalLongDistantCharges;
}

// function: calculateLocalB
// purpose: this function calculates the local charges of company B
float calculateLocalB(int& localMin)
{
	float totalLocalCharges = 0;
	
	if (localMin > 30)
    {
        totalLocalCharges = ((localMin - 30) * 0.20 );
        return totalLocalCharges;
    }
    
    return totalLocalCharges;
} 

// function: calculateLongDistanceB
// purpose: this function calculates the long distance charges of company B
float calculateLongDistanceB(int& longMin)
{
	float excedingCharge;
	float normalCharge;
	float totalLongDistantCharges = 0;
	float longMinCopy = longMin;
	
	if (longMinCopy > 200)
	{
		excedingCharge = ((longMinCopy - 200) * 0.18);
		longMinCopy = 200;
	}
	else
	{
		excedingCharge = 0;
		
	}
	
	if (longMinCopy <= 200)
	{
		normalCharge = longMinCopy * 0.25;
		
	}
	
	totalLongDistantCharges = excedingCharge + normalCharge;
	
	return totalLongDistantCharges;
}

// function: printTotalOutputs
// purpose: this function displays the company A & B totals.
float printTotalOutputs(float companyALocal, float companyADistant, float companyATotal, float companyBLocal,
float companyBDistant, float companyBTotal)
{
	float companyABTotalLocal;
	float companyABTotalDistant;
	float companyABTotalCharges;
	
	cout << "-------------------------------------------------------------" << endl;
	cout << "Company A Totals: " << " 	 " << companyALocal << "	 	   " << companyADistant << "   " << companyATotal << endl;
	cout << "Company B Totals: " << " 	 " << companyBLocal << "	 	   " << companyBDistant << "   " << companyBTotal << endl;
	companyABTotalLocal = companyALocal + companyBLocal;
	companyABTotalDistant = companyADistant + companyBDistant;
	companyABTotalCharges = companyATotal + companyBTotal;
	cout << "-------------------------------------------------------------" << endl;
	cout << "Company A & B Totals: " << " 	 " << companyABTotalLocal << "	 	   " << companyABTotalDistant << "   " << companyABTotalCharges << endl;
	cout << "-------------------------------------------------------------" << endl;
	
	return 0;
}
