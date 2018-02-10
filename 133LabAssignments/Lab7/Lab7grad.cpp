// Julio Collado
// CSC 133-01
// Lab7grad.cpp
// the purpose of this program is to calculate the students grade aswell as the class average.

#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

// declaring all function prototypes here
float calculateNumericGrade(int test1, int test2, int labs, int finalExam);
char finalLetterGrade(float finalGrade);
float printStudentInfo(int student, int test1, int test2, int labs, int finalExam, float finalGrade, char letterGrade);
float printAverage(float sum, int count);


// the main program function goes here
int main()
{
	ifstream infile;
	
	infile.open("E:/FALL2017/CSC133-01/133LabAssignments/Lab7/lab7inpt.dat");
	
	cout << "----------------------------------------------------------------------------------" << endl; 
	cout << "Julio Collado		CSC133-01		Lab7grad.cpp		11/10/2017" << endl;
	cout << "----------------------------------------------------------------------------------" << endl;
	cout << "                                                   " << endl;
	
	int studentNumber;
	int test1;
	int test2;
	int labs;
	int finalExam;
	
	float finalGrade;
	char letterGrade;
	int counter = 0;
	float sum = 0;

	
	cout << "Student#  Test 1   Test 2     Labs  Final Exam  Final Grade  Letter Grade" << endl;
	cout << "--------------------------------------------------------------------------" << endl;
	
	// using eof function to stop the while loop
	while (infile.eof() == 0)
	{
		infile >> studentNumber;
		infile >> test1;
		infile >> test2;
		infile >> labs;
		infile >> finalExam;
		
		finalGrade = calculateNumericGrade(test1, test2, labs, finalExam);
		letterGrade = finalLetterGrade(finalGrade);
		counter++;
		sum = sum + finalGrade;
		printStudentInfo(studentNumber, test1, test2, labs, finalExam, finalGrade, letterGrade);
	}
	printAverage(sum, counter);
	
	system("PAUSE");
	return 0;
}

// function: calculateNumericGrade
// purpose: this functions calculates the final grade of the student.
float calculateNumericGrade(int test1, int test2, int labs, int finalExam)
{
	float NumericGrade;
	
	NumericGrade = (test1 * 0.20) + (test2 * 0.20) + (labs * 0.35) + (finalExam * 0.25);
	return NumericGrade;
}

//function: finalLetterGrade
// purpose: this function determines what the letter grade should be based on the final grade.
char finalLetterGrade(float finalGrade)
{
	char grade;
	
	if(finalGrade >= 90)
		grade = 'A';
	else if(finalGrade >= 80)
		grade = 'B';
	else if(finalGrade >= 70)
		grade = 'C';
	else if(finalGrade >= 60)
		grade = 'D';
	else 
		grade = 'F';
	return grade;
}

// function: printStudentInfo
// purpose: this function prints out all of the student info including the final grade & letter grade.
float printStudentInfo(int student, int test1, int test2, int labs, int finalExam, float finalGrade, char letterGrade)
{
	cout << fixed << showpoint;
	cout << setprecision(2);
	cout << student << setw(10) << test1 << setw(10) << test2 << setw(10) << labs << setw(9);
	cout << finalExam << setw(14) << finalGrade << setw(11) << letterGrade << endl;
	
	return 0;
}

// function: printAverage
// purpose: this function calculates the average and prints it.
float printAverage(float sum, int count)
{
	float average;
	
	average = sum/count;
	cout << "--------------------------------------------------------------------------" << endl;
	cout << "Average Class Grade = " << average << endl << endl;
	
	return 0;
}
	
