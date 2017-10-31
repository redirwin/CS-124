#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

bool grades(char fileName[])
{
	ofstream fout(fileName);
	if (fout.fail())
		return false;
	
	fout << "Jack " << "83\n";
	fout << "John " << "97\n";
	fout << "Jill " << "56\n";
	fout << "Jake " << "82\n";
	fout << "Jane " << "99\n";
	
	fout.close();
	return true;
}

int main()
{
    grades("grades.txt");
    return 0;
}