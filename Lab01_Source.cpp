/*
Hayden Moritz
COSC2030
Lab01
*/

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

//Main program
int main()
{
	//Declare variables
	string filename;
	int count = 0;
	double currentNum = 0;
	int n = 0;
	double firstNum, secondNum, lastNum;

	//Get user input for filename:
	cout << "Please enter the name of the file to open: " << endl;
	cin >> filename;

	//Open file
	ifstream myfile(filename, ios::in);
	myfile.open(filename);

	//Return error if file opens incorrectly
	if (!myfile.is_open()) {
		cerr << "Error opening input file '" << filename << "'" << endl;
		system("pause");
		exit(1);
	}
	else {
		//Have the program go through the file until it ends, counting each number and adding it to a count, and tracking the placement of the first, second, second to last, and last numbers
		while (!myfile.eof()) {
			myfile >> currentNum;
			count = count + 1;
			//If a space, do not count as a number
			if (currentNum != NULL) {
				n = n + 1;
			}
			if (n == 1) {
				firstNum = currentNum;
			} 
			if(n == 2) {
				secondNum = currentNum;
			}
		}
	}

	if (n == n) {
		lastNum = currentNum;
	}

	//Display data
	cout << "The total number of numbers in " << filename << " is: " << count << endl;
	cout << "The first number in the file is: " << firstNum << endl;
	cout << "The second number in the file is: " << secondNum << endl;
	//cout << "The second to last number in the file is: " << secondLastNum << endl;
	//NOTE: I could not figure out the logic to capture the second to last number.
	cout << "The last number in the file is: " << lastNum << endl;

	//Close file & end program
	myfile.close();
	system("pause");
	return 0;
	}