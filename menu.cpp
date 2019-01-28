//Faruqui, Nishat
//Week5 Branching HW Program #1

#include <iostream>
#include <string>
using namespace std;

int main()
{
int food;

cout << "The Menu:" << endl;
cout << "1) Hamburger" << endl;
cout << "2) Chicken Sandwich" << endl;
cout << "3) Hotdog" << endl;
cout << "Select an option: ";
cin >> food; // input number is stored into the variable, food
cout << endl;

switch (food)
{
case 1: //case number corresponds to the menu item number
    cout << "You ordered a Hamburger.";
    break;
case 2:
    cout << "You ordered a Chicken Sandwich.";
    break;
case 3:
    cout << "You ordered a Hotdog.";
    break;
default:
    cout << "You did not select a valid option. Ending program."; //if input is number other than 1-3, this will display
}
cout << endl;

  return 0;
}
