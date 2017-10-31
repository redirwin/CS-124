#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

bool readWriteNumber(char fileName[])
{
	float oldNumber, newNumber;
	
	ifstream fin(fileName);
	if (fin.fail())   // make sure no errors opening file
		return false;
	
	fin >> oldNumber;
	if (fin.fail())   // make sure no errors reading old number
		return 0.0;
	fin.close;   // close the file for reading
	
	cout << "The old number is \"" << oldNumber << "\". What is the new number? ";
	cin >> newNumber;   // store the new number from the user
	
	ofstream fout(fileName);
	fout.precision(2);          // these next three lines format the number
	fout.setf(ios::fixed);
	fout.setf(ios::showpoint);
	fout << newNumber << endl;  // save the new number to the file
	fout.close();   // close the file for writing
	
	return true;
}

int main()
{
    readWriteNumber("roundTrip.txt");
    return 0;
}