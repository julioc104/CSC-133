 // Julio Collado
// CSC 133-01
// Lab8letr.cpp
// This program should count how many letters occur in a word. 

#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

// declaring all function prototypes herest
string getWord();
int checkEachLetter(string word, char alphabet[], int countArray[]);
int linearSearch(char alphabet[], char character);
int displayOutputs(string word, char alphabet[], int countArray[]);
int cleanupArray(int countArray[]);


// the main program function goes here
int main()
{
	
	cout << "----------------------------------------------------------------------------------" << endl; 
	cout << "Julio Collado		CSC133-01		Lab8letr.cpp		11/26/2017" << endl;
	cout << "----------------------------------------------------------------------------------" << endl;
	cout << "                                                   " << endl;
	
	cout << "		L E T T E R   C O U N T S 				" << endl << endl;
	cout << "*************************************************************" << endl;
	
	char alphabet[52] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',
	'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	int countArray[52] = {};
	string word;
	
	do
	{	
		
		word = getWord();
		
		if (word != "EndIt") 				// For some reason the space was giving me problems, put it together instead.
		{	
			checkEachLetter(word, alphabet, countArray);
			displayOutputs(word, alphabet, countArray);		
			cleanupArray(countArray);
		}
	} while (word != "EndIt");

	system("PAUSE");
	return 0;
}

// This function prompts the user to input a word and saves it.
string getWord()
{	
	string word;

	cout << "Enter the word to be letter counter:	" ;
	cin  >> word;
	cout << "-------------------------------------------------------------";
	cout << endl;
	
	return word;
}

// This function runs through each iteration of the word and counts the number of letters being used.
int checkEachLetter(string word, char alphabet[], int countArray[])
{
	int index;
	
	for(int i = 0; i < word.size(); i++)
	{	
		index = linearSearch(alphabet, word[i]);
		countArray[index]++;
	}
	
	
	return 0;
}

// This function does a linear search in the alphabet array to look for the Letters being used.
int linearSearch(char alphabet[], char character)
{
	for(int j = 0; j < 52; j++)
	{
		if(alphabet[j] == character)
		return j;
	}
	return -1;
}

// This function prints out the word used aswell as the number of occurrences of each letter.
int displayOutputs(string word, char alphabet[], int countArray[])
{
		for(int i = 0; i < 52 ; i++)
		{
			if (countArray[i] > 0)
			{
				cout << "There are " << countArray[i] << " " << alphabet[i] << "'s" << endl;
			}
		}
	
	cout << "-------------------------------------------------------------" << endl;
	cout << "There is a total of " << word.size() <<" " <<  "characters in the word " << word << endl << endl;
	cout << "*************************************************************" << endl;
	
	return 0;
}

// This function resets the countArray back to 0
int cleanupArray(int countArray[])
{
	for(int i = 0; i < 52; i++)
	{
		countArray[i] = 0;
	}
	
	return 0;
}

