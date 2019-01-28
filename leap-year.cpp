//Faruqui, Nishat
//Week5 Branching HW Program #3

#include <iostream>
#include <string>
using namespace std;

int main()
{
int year;
cout << "Enter a year: ";
cin >> year;

//creating 3 Boolean variables to determine if input is divisible by 4, 100, and 400
bool isDivBy4 = ((year % 4) == 0); //no remainder means number is evenly divisible
bool isDivBy100 = ((year % 100) == 0);
bool isDivBy400 = ((year % 400) == 0);

//Output will display if year is divisible by 4, 100, and 400, respectively
cout << "Is the year evenly divisible by 4? ";
if ((isDivBy4 == 0))
  cout << "No." << endl;
else
  cout << "Yes." << endl;

cout << "Is the year evenly divisible by 100? ";
if ((isDivBy100 == 0))
  cout << "No." << endl;
else
  cout << "Yes." << endl;

cout << "Is the year evenly divisible by 400? ";
if ((isDivBy400 == 0))
  cout << "No." << endl;
else
  cout << "Yes." << endl;

//Output will display if input is a leap year based on following conditions
if ((isDivBy4 && !isDivBy100) || (isDivBy400))
  cout << year << " is a leap year." << endl;
else
  cout << year << " is not a leap year." << endl;

  return 0;
}
