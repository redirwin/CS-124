#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

bool number(char fileName[])
{
	ofstream fout(fileName);
	if(fout.fail())
		return false;
	
	for (int i = 1; i <= 10; I++)
	{
		fout << i << endl;
	}
	
	fout.close();
	return true;
}

int main()
{
	numbers("numberFile.txt");
	return 0;
}