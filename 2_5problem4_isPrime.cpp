#include <iostream>
using namespace std;

/*****************************************************
 * Compute whether a user-specified number is prime.
 *****************************************************/

bool isPrime(int myNum);
 
int main()
{
    int myNum;
        
    cout << "Enter a number: ";
    cin >> myNum;
    bool checkPrime = isPrime(myNum);
    
    if (checkPrime == false)
        cout << myNum << " is not prime.";
    else 
        cout << myNum << " is prime.";
  
    return 0;
}

bool isPrime(int myNum)
{
    bool isPrime = true;
    for (int i = 2; i < myNum; i++)  // start loop after 1 and end before myNum
    {
        cout << "testing: " << i << endl;
        if (myNum % i == 0)   // check for lack of remainder; if no remainder, it's not prime
        {
            cout << myNum << " is divisible by " << i << ", so ";
            isPrime = false;  // if not prime, set to false
            break;            // stop looping because we already got our answer
        }
    }
    return isPrime;
}