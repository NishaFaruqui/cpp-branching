//Faruqui, Nishat
//Week5 Branching HW Program #2

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
cout.setf(ios::fixed);
cout.precision(2); //specifying 2 decimal places to be displayed
float grade;
float gpa;
cout << "Enter your grade: ";
cin >> grade;

if ((grade < 0) || (grade > 100))
    cout << "You have not entered a grade between 0 and 100. Ending program." << endl;
else if ((grade >= 96.0 && grade <= 100))
  {
    gpa = 4.00;
    cout << "You will receive a letter grade of A with a " << gpa << " GPA." << endl;
  }
else if ((grade >= 90.0 && grade < 96.0))
  {
    gpa = 3.70;
    cout << "You will receive a letter grade of A- with a " << gpa << " GPA." << endl;
  }
else if ((grade >= 87.0 && grade < 90.0))
  {
    gpa = 3.30;
    cout << "You will receive a letter grade of B+ with a " << gpa << " GPA." << endl;
  }
else if ((grade >= 84.0 && grade < 87.0))
  {
    gpa = 3.00;
    cout << "You will receive a letter grade of B with a " << gpa << " GPA." << endl;
  }
else if ((grade >= 80.0 && grade < 84.0))
  {
    gpa = 2.70;
    cout << "You will receive a letter grade of B- with a " << gpa << " GPA." << endl;
  }
else if ((grade >= 77.0 && grade < 80.0))
  {
    gpa = 2.30;
    cout << "You will receive a letter grade of C+ with a " << gpa << " GPA." << endl;
  }
else if ((grade >= 74.0 && grade < 77.0))
  {
    gpa = 2.00;
    cout << "You will receive a letter grade of C with a " << gpa << " GPA." << endl;
  }
else if ((grade >= 70.0 && grade < 74.0))
  {
    gpa = 1.70;
    cout << "You will receive a letter grade of C- with a " << gpa << " GPA." << endl;
  }
else if ((grade >= 67.0 && grade < 70.0))
  {
    gpa = 1.30;
    cout << "You will receive a letter grade of D+ with a " << gpa << " GPA." << endl;
  }
else if ((grade >= 64.0 && grade < 67.0))
  {
    gpa = 1.00;
    cout << "You will receive a letter grade of D with a " << gpa << " GPA." << endl;
  }
else if ((grade >= 60.0 && grade < 64.0))
  {
    gpa = 0.70;
    cout << "You will receive a letter grade of D- with a " << gpa << " GPA." << endl;
  }
else if ((grade >= 0.00 && grade < 60.0))
  {
    gpa = 0.00;
    cout << "You will receive a letter grade of F with a " << gpa << " GPA." << endl;
  }
  return 0;
}
