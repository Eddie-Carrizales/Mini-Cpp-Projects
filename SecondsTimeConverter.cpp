//Author:      Eddie F. Carrizales
//Date:        10/13/2020

//Description:
// This program converts seconds to minutes, hours, and days depending on how many seconds the users inputs.

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
   
   double secondsInput; // variable used to store the seconds inputted by the user

   cout << "Enter the number of seconds:\t"; // used to prompt user for the seconds 
   cin >> secondsInput;
   
   if (secondsInput < 60) // If seconds inputted by user are less than 60 this will will be true and they will be displayed as seconds back to user
   {
      cout << secondsInput << " seconds is ";
      cout << fixed << setprecision(2) << secondsInput << " seconds.";
   }
   else if (secondsInput < 3600) //If seconds inputted by user are less than 3600 then this will be true and they will be divided by 60 to display minutes to user
   {
      cout << secondsInput << " seconds is ";
      secondsInput = secondsInput / 60.00;
      cout << fixed << setprecision(2) << secondsInput << " minutes.";
   }
   else if (secondsInput < 86400) // If seconds inputted by user are less than 86400 then this will be true and they will be divided by 60 twice to display hours to the user
   {
      cout << secondsInput << " seconds is ";
      secondsInput = (secondsInput / 60.00) / 60.00;
      cout << fixed << setprecision(2) << secondsInput << " hours.";
   }
   else if (secondsInput >= 86400) // If seconds inputted by user are greater than 86400 then this will be true and they will be divided by 60 twice and then by 24 to display days to user
   {
      cout << secondsInput << " seconds is ";
      secondsInput = ((secondsInput / 60) / 60) / 24;
      cout << fixed << setprecision(2) << secondsInput << " days.";
   }


   return 0;

} // End of function main
