//Author:      Eddie F. Carrizales
//Date:        10/24/2020

//Description:
// This program will output the characters that map to the ASCII codes 32 through 126 depending on what the user enters as lower and upper values. 

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
   unsigned int lowerValue; // Variable used to store the lower value inputted by the user
   unsigned int upperValue; // Variable used to store the upper value inputteed by the user
   unsigned int counter = 0;

   //Used to request and take in the lower and upper values from the user
   cout << "Enter lower and upper values" << endl;
   cin >> lowerValue;
   cin >> upperValue;

   //Used to make sure that the lower and upper values inputted by the user where valid and ask for the values again if the input was invalid
   while ((lowerValue < 32 || upperValue > 126) || (lowerValue > upperValue))
   {
      cout << "Values must be in range 32 to 126 inclusive" << endl;
      cout << "Enter lower and upper values" << endl;
      cin >> lowerValue;
      cin >> upperValue;
   }

   //Used to display what the characters will be between for the ASCII values 
   cout << "Characters for ASCII values between " << lowerValue << " and " << upperValue << endl;
   cout << "----+----+----+----+";
  
   //While loop to display the ASCII characters as well as count and skip lines depending on what the user entered
   while (lowerValue <= upperValue)
   {
      //Used to count and end the lines
      if (counter % 20 == 0) 
      {
         cout << endl;
      }

      //Used to convert the value to a character and add for the value and counter
      char lower = static_cast<char>(lowerValue);
      cout << lower;
      lowerValue++;
      counter++;

   }
   cout << endl;
   cout << "----+----+----+----+" << endl;
   
   return 0;

}  //End of function main
