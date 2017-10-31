#include <iostream>
using namespace std;

/*****************************************************
 * Compute how many numbers under a user-specified 
 * value are both odd and a multiple of 5.
 *****************************************************/
int main()
{
    int num;
    int count = 0;
    
    cout << "What is the number? ";
    cin >> num;
    
    for (int i = 0; i < num; i++)
    {
        if (i % 2 != 0 && i % 5 == 0) // check for !divisible by 2 (makes it odd) and divisible by 5
        count++;
    }
    
    cout << count;

}

