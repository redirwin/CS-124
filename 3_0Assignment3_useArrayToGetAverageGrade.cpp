#include <iostream>
#include <iomanip>

using namespace std;

// create prototypes
void getGrades(int listGrades[], int countGrades);
void averageGrades(int listGrades[], int countGrades);

/*******************************************************************************
* main()
* A driver function to create listGrades[], call getGrades(), call
* averageGrades(), pass listGrades[] to those funtions, and finally display
* the average.
*******************************************************************************/
int main()
{
  int countGrades = 10;
  int listGrades[countGrades + 1]; // leave space for average in the last index

  getGrades(listGrades, countGrades);
  averageGrades(listGrades, countGrades);

  cout << "Average Grade: " << listGrades[countGrades + 1] << "%\n";

  return 0;
}

/*******************************************************************************
* getGrades()
* Receives listGrades[] and countGrades from main(). Populates listGrades[]
* with grades entered by the user.
*******************************************************************************/
void getGrades(int listGrades[], int countGrades)
{
  for (int iGrades = 0; iGrades < countGrades; iGrades++)
  {
    cout << "Grade " << iGrades + 1 << ": ";   // ask for grade
    cin >> listGrades[iGrades];   // add grade to next free index
  }
}

/*******************************************************************************
* averageGrades()
* Receives listGrades[] array and countGrades from main(). Uses those to loop
* through and add all grades together, then calculates the average. Stores
* average to last index space of listGrades[] for reading by main().
*******************************************************************************/
void averageGrades(int listGrades[], int countGrades)
{
  int sum = 0;
  for (int iGrades = 0; iGrades < countGrades; iGrades++)
  {
    sum += listGrades[iGrades];   // adds them all up as it loops
  }
  // assign the average to the last index space
  listGrades[countGrades + 1] = sum / countGrades;
}
