#include <iostream>
using namespace std;

void displayTimesTable()
{
	for (int row = 1; row < 6; row++)
	{
		for (int col = 1; col < 6; col++)
		{
			cout << row * col << "\t";
		}
		cout << endl;
	}
}

int main()
{
    displayTimesTable();
    return 0;
}