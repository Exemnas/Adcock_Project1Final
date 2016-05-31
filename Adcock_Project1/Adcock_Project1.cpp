// Project 1 for Fundamentals of Programming

#include <iostream> // header
#include <fstream>
#include <iomanip>
#include <string>

using namespace std; // namespace


//Declarations
int number;
int counter;
char userSelection;
int caseB();


int main() //main program
{
	//Title
	cout << "Steven Adcock" << endl;
	cout << "11/17/11" << endl;
	cout << "Mr. Loay Alnaji" << endl;
	cout << "Project 1: Final Programming" << endl;
	cout << endl;
	cout << "!Please maximize your screen for full fun!" << endl;
	cout << endl;
	do //Repitiion
{
	cout << "Hey There! Please make a selection." << endl;
	cout << "A - Wanna see what happens when you drop a rock from an airplane?" << endl;
	cout << "B - Wanna do math equations?" << endl;
	cout << "Q - Exit." << endl; //Exit Point
	cin >> userSelection; //User's Input / string from the menu above.

	switch (userSelection) //Switch function for userSelection Output for the Menu above.
	{ 
	case 'A':
			cout << "Enter a number between 1 and 35." << endl;
	cin >> number;	
		cout << "          ___           " << endl;
		cout << " _______ /|_|  ________ " << endl;
		cout << "(-------[  *  ]--------)" << endl;
		cout << "          ___/          " << endl;
	for (counter = number; counter >= 1; counter--)
		cout << endl << "           " << counter << endl;
		cout << "         _( )_        " << endl;
		cout << endl;
		cout << "     _(         )_    " << endl;
		cout << endl;
		cout << "    (    BOOM!    )   " << endl;
		cout << "      |  |  || ||     " << endl;
		cout << "      |  |  || ||     " << endl;
		cout << "      |  |  || ||     " << endl;
		cout << "      |  |  || ||     " << endl;
		cout << "     /|  |  || ||\    " << endl;
		cout << "( ( (_____________) ) )" << endl;
		break;
	case 'a':
			cout << "Enter a number between 1 and 35." << endl;
	cin >> number;
	    cout << "          ___           " << endl;
		cout << " _______ /|_|  ________ " << endl;
		cout << "(-------[  *  ]--------)" << endl;
		cout << "          ___/          " << endl;
	for (counter = number; counter >= 1; counter--)
		cout << endl << "           " << counter << endl;
		cout << "         _( )_        " << endl;
		cout << endl;
		cout << "     _(         )_    " << endl;
		cout << endl;
		cout << "    (    BOOM!    )   " << endl;
		cout << "      |  |  || ||     " << endl;
		cout << "      |  |  || ||     " << endl;
		cout << "      |  |  || ||     " << endl;
		cout << "      |  |  || ||     " << endl;
		cout << "     /|  |  || ||\    " << endl;
		cout << "( ( (_____________) ) )" << endl;

		break;
	case 'B':
		caseB(); // user-defined Function
		break;
	case 'b':
		caseB(); // user-Defined Function
		break;
	case 'Q':
		cout << "See Ya!" << endl;
		system("pause");
		return 0;
		break;
	case 'q':
		cout << "See Ya!" << endl;
		system("pause");
		return 0;
		break;

	default:
		cout << "Invalid Input" << endl;
			break;

	}
}
while (userSelection != 'Q');

	
	system("pause");
	return 0;
}


ifstream inFile;
ofstream outFile;
int numOne, numTwo, sum;
char userSelectionTwo;



int caseB()//User-Defined Function
{
	do
	{
		inFile.open("numbers.txt");
			inFile >> numOne >> numTwo;
		cout << endl;
		cout << numOne << " " << numTwo << endl << endl;
		cout << "What would you like to do with these numbers?" << endl;
		cout << endl;
		cout << "A - Add?" << endl;
		cout << endl;
		cout << "B - Subtract?" << endl;
		cout << endl;
		cout << "C - Divide?" << endl;
		cout << endl;
		cout << "D - Multiply?" << endl;
		cout << endl;
		cout << "Q - Quit?" << endl;
		cout << endl;
		cin >> userSelectionTwo;
		cout << endl;
		switch (userSelectionTwo)
		{
			case 'A':
				sum = numOne + numTwo;
				cout << "Answer = " << sum << endl;
				cout << endl;
				break;
			case 'a':
				sum = numOne + numTwo;
				cout << "Answer = " << sum << endl;
				cout << endl;
				break;
			case 'B':
				cout << "Answer = " << numOne - numTwo << endl;
				cout << endl;
				break;
			case 'b':
				cout << "Answer = " << numOne - numTwo << endl;
				cout << endl;
				break;
			case 'C':
				cout << "Answer = " << numOne/numTwo << endl;
				cout << endl;
				break;
			case 'c':
				cout << "Answer = " << numOne/numTwo << endl;
				cout << endl;
				break;
			case 'D':
				cout << "Answer = " << numOne * numTwo << endl;
				cout << endl;
				break;
			case 'd':
				cout << "Answer = " << numOne * numTwo << endl;
				cout << endl;
				break;
			case 'Q':
				return 0;
				break;
			case 'q':
				return 0;
				break;

		}
	}
	while (userSelectionTwo != 'Q' | 'q');
	inFile.close();
	return 0;
}