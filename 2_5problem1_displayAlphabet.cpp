#include <iostream>
using namespace std;

void displayAlphabet()
{
	for (int count = 65; count <= 90; count++)
	{
		char letter = count;
		cout << letter << endl;
	}
}

int main()
{
    displayAlphabet();
    return 0;
}