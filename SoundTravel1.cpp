//Author:      Eddie F. Carrizales
//Date:        10/17/2020

//Description:
// This program calculates the number of seconds it will take for sound to travel through a medium.

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
   unsigned int input; //Used to store the choice input from the user
   double distance; //Used to store the distance input form the user (in feet)
   double timeTravel; //Used to store the time traveled through the medium after calculations

   //Used to display the menu and take in the input from the user
   cout << "Select the medium that sound is traveling through:" << endl;
   cout << "1 Air" << endl;
   cout << "2 Water" << endl;
   cout << "3 Steel" << endl;
   cin >> input;

   switch (input) //Used to go into a choice after user enters the medium
   {
   case 1 : 
      cout << "Enter distance (in feet)" << endl;
      cin >> distance;

      if (distance <= 0 ) //statement to make sure distance is positive and to then calculate and display result
      {
         cout << "The distance must be greater than zero" << endl;
      }
      else
      {
         cout << "Air: " << fixed << setprecision(4) << distance << " ft" << endl;
         timeTravel = distance/1100;
         cout << "Traveled for " << fixed << setprecision(4) << timeTravel << " seconds" << endl;
      }
      break;

   case 2: 
      cout << "Enter distance (in feet)" << endl;
      cin >> distance;

      if (distance <= 0) //statement to make sure distance is positive and to then calculate and display result
      {
         cout << "The distance must be greater than zero" << endl;
      }
      else
      {
         cout << "Water: " << fixed << setprecision(4) << distance << " ft" << endl;
         timeTravel = distance / 4900;
         cout << "Traveled for " << fixed << setprecision(4) << timeTravel << " seconds" << endl;
      }
      break;

   case 3: 
      cout << "Enter distance (in feet)" << endl;
      cin >> distance;

      if (distance <= 0) //statement to make sure distance is positive and to then calculate and display result
      {
         cout << "The distance must be greater than zero" << endl;
      }
      else
      {
         cout << "Steel: " << fixed << setprecision(4) << distance << " ft" << endl;
         timeTravel = distance / 16400;
         cout << "Traveled for " << fixed << setprecision(4) << timeTravel << " seconds" << endl;
      }
      break;

   default: cout << "The menu value is invalid. Please run the program again." << endl;

   }

   return (0);

}  //End of function main
