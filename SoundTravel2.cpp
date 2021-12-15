//Author:      Eddie F. Carrizales
//Date:        10/18/2020

//Description:
// This program will read in the number of seconds from the user and then calculate how far sound can travel (in meters) in a specified medium in that many seconds.

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
   unsigned int menuInput; //Variable used to store the user menu choice
   double time; // Variable used to store the time the user entered

   //Display the menu to the user
   cout << "Select the medium that sound is traveling through:" << endl;
   cout << "1 Carbon Dioxide" << endl;
   cout << "2 Air" << endl;
   cout << "3 Helium" << endl;
   cout << "4 Hydrogen" << endl;

   //Used to read the user choice from the menu
   cin >> menuInput;

   //Used to decide whether user choice/input was valid
   if (menuInput == 0 || menuInput > 4)
   {
      cout << "The menu value is invalid. Please run the program again." << endl;
   }
   else // Used to enter into one of the 4 menu choices depending on the number chosen by the user
   {
      if (menuInput == 1) // Used to enter choice number one (Carbon Dioxide)
      {
         cout << "Enter time (in seconds)" << endl;
         cin >> time;

         if (time < 0 || time > 30) // Used to make sure that time entered is positive and under 30 seconds
         {
            cout << "The time must be between 0.000 and 30.000 (inclusive)" << endl;
         }
         else
         {
            cout << "Carbon Dioxide: " << fixed << setprecision(3) << time << " seconds" << endl;

            time = time * 258.0; // used to calculate the traveled distance using time entered

            cout << "Traveled " << fixed << setprecision(4) << time << " meters" << endl;
         }
      }
      else if (menuInput == 2) // Used to enter choice number two (Air)
      {
         cout << "Enter time (in seconds)" << endl;
         cin >> time;

         if (time < 0 || time > 30) // Used to make sure that time entered is positive and under 30 seconds
         {
            cout << "The time must be between 0.000 and 30.000 (inclusive)" << endl;
         }
         else
         {
            cout << "Air: " << fixed << setprecision(3) << time << " seconds" << endl;

            time = time * 331.5; // used to calculate the traveled distance using time entered

            cout << "Traveled " << fixed << setprecision(4) << time << " meters" << endl;
         }
      }
      else if (menuInput == 3) // Used to enter choice number three (Helium)
      {
         cout << "Enter time (in seconds)" << endl;
         cin >> time;

         if (time < 0 || time > 30) // Used to make sure that time entered is positive and under 30 seconds
         {
            cout << "The time must be between 0.000 and 30.000 (inclusive)" << endl;
         }
         else
         {
            cout << "Helium: " << fixed << setprecision(3) << time << " seconds" << endl;

            time = time * 972.0; // used to calculate the traveled distance using time entered

            cout << "Traveled " << fixed << setprecision(4) << time << " meters" << endl;
         }
      }
      else if (menuInput == 4) // Used to enter choice number four (Hydrogen)
      {
         cout << "Enter time (in seconds)" << endl;
         cin >> time;

         if (time < 0 || time > 30) // Used to make sure that time entered is positive and under 30 seconds
         {
            cout << "The time must be between 0.000 and 30.000 (inclusive)" << endl;
         }
         else
         {
            cout << "Hydrogen: " << fixed << setprecision(3) << time << " seconds" << endl;

            time = time * 1270.0; // used to calculate the traveled distance using time entered

            cout << "Traveled " << fixed << setprecision(4) << time << " meters" << endl;
         }
      }


   }

   return 0;

}  //End of function main
