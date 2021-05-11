// Description: this program validates an input file and an average
// Title: Input File Validation and Average
// Programmer: Brian Morillo
// Last Modified:3/26/2021 

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

	ifstream inputFile;
	string fileName;
	int firstNum, secondNum;

	system("color E1");
	system("title . Input File validation   by B.Morillo");

	//Banner
	cout << "\n"
		<<  "\tThis program asks the user for the name of a file that\n"
		<<  "\t               contains two numbers,                  \n"
		<<  "\t        and prints on the monitor their averge        \n"
		<<  "\t                     by B.Morillo                     \n";
	
	cout << "\nWhat file contains your data? ";
	getline(cin >> ws, fileName);

	inputFile.open(fileName);

	/*if (!inputFile) {
		system("color B1");
		cout << "\b\aFailed to open file: " << fileName << ". Exiting the program. \n\n";
		system("pause");
		return 0;
	}*/

	while (!inputFile) {
		system("color B1");
		cout << "\b\aFailed to open file: " << fileName << ". Please provide a different file name: ";
		getline(cin >> ws, fileName);
		inputFile.open(fileName);
	}

	system("color E1");

	inputFile >> firstNum;
	inputFile >> secondNum;

	cout << "The average of "<< firstNum <<" and " << secondNum << " is: " << (static_cast<double>(firstNum) + static_cast<double>(secondNum))/2 << "\n\n";
	
	system("pause");
	return 0;
}