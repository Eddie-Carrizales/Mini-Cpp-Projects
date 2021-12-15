//Author:      Eddie F. Carrizales
//Date:        10/25/2020

//Description:
// This program will convert a set of temperatures from Fahrenheit to Celsius to Kelvin, and display a table that contains each 
// increment between a starting and ending temperature.

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
   double startingTemp; //Variable used to store the starting tempertature inputted by the user
   double endingTemp; //Variable used to store the ending temperature inputted by the user
   double increment; //Variable used to store the increment of temperature inputted by the user
   double fahrenheit; //Variable used to store the startingTemperature to make it clear when using the formulas
   double celsius; //Variable used to store the value of celsius
   double kelvin; //Variable used to store the value of kelvin

   //Used to request input from the user
   cin >> startingTemp >> endingTemp >> increment;

   //Used to make sure the starting temperature, ending temperature, and increment are valid 
   while ((startingTemp > endingTemp) || increment <= 0.0)
   {
      cout << "Starting temperature must be <= ending temperature and increment must be > 0.0" << endl;
      cin >> startingTemp >> endingTemp >> increment;
   }

   //Used to display the name of the temperetature that will be outputted
   cout << setw(18) << "Fahrenheit" << setw(18) << "Celsius" << setw(18) << "Kelvin" << endl;

   //Used to display the list of temperatures from the starting to the ending temp by the increment
   while (startingTemp <= endingTemp)
   {
      
      fahrenheit = startingTemp;
      celsius = (fahrenheit - 32) / 1.8;
      kelvin = celsius + 273.15;

      cout << fixed << setprecision(4) << setw(18) << fahrenheit << setw(18) << celsius << setw(18) << kelvin << endl;

      startingTemp = startingTemp + increment;

   }

   return 0;

} // end of function main
