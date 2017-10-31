#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

bool read(char fileName[])
{
	ifstream fin(fileName);
	if (fin.fail())
	{
		cout << "Can't open " << fileName << endl;
		return false;
	}
	
	char name[256];
	int grade;
	while (fin >> name >> grade)
	{
		cout << name << " " << grade << endl;
	}
	
	fin.close();
	return true;
}

int main()
{
    read("grades.txt");
    return 0;
}