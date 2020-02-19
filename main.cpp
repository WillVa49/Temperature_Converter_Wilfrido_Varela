#include <iostream>
#include "Input_Validation_Extended.h"
using namespace std;

int main() 
{
  double celcius, fahrenheit, temp;
  char decision = '\0';
  do
  {
   cout << "Please enter F or C: " << endl;
   cin >> decision;



   if (decision == 'F')
   {
    cout << "\nYou have decided to convert Celcius to Fahrenheit" << endl;
    //Calculate conversion 
    cout << "\nPlease enter your temperature: " << endl;
    cin >> celcius;
    temp = (celcius * 9.0/5.0) + 32.0;

    cout << "\nBy entering " << celcius << " degrees celsius, your converted temperature from Celcius to Fahrenheit is " << temp << endl;

   }
   
   else if (decision == 'C')
   {
    cout << "\nYou have decided to convert Fahrenheit to Celcius" << endl;
    //Calculate conversion
    cout << "\nPlease enter the temperature: " << endl;
    cin >> fahrenheit;
    temp = (fahrenheit - 32.0) * 5.0/9.0;
    cout << "\nBy entering " << fahrenheit << " degrees fahrenheit, your converted temperature from Fahrenheit to Celcius is " << temp << endl;
   }
   else 
   {
    cout << "\nError, did not provided F or C decision" << endl;
   }
  }while(decision != 'F' && decision != 'C');
  return 0;
}