#include <iostream>
#include <iomanip>
using namespace std;

/***************************************************************
 * Display the multiplication table of of a user-specified value
 * ************************************************************/
int main()
{
    int size;
    cout << "What number would you like to go up to? ";
    cin >> size;
    
    for (int row = 1; row <= size; row++)
    {
        for (int col = 1; col <= size; col++)
        {
            cout << row * col << "\t";
        }
        
        cout << endl;
    }

}