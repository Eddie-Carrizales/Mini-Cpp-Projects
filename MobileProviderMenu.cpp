//Author:      Eddie F. Carrizales
//Date:        10/13/2020

//Description:
// This program is a mobile service provider menu that calculates the monthly bill for a user depending on the plan and amount 
// of minutes they used or plan to use during the month

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
   char choice; //Used to store the users package choice
   int minuteUse; //Used to store the number of minute use
   double monthlyBill; //Used to store the monthly bill that is calculated for each package

   //All three are used to store the characters of the options the user will have when chosing a package
   const char packageA = 'A';
   const char packagea = 'a';
   const char packageB = 'B';
   const char packageb = 'b';
   const char packageC = 'C';
   const char packagec = 'c';

   //Used to display the menu and options to the user
   cout << "\t\t\tMobile Phone Service Provider Menu" << endl << endl;

   cout << "Package A:   For $39.99 per month 450 minutes are provided. Additional minutes are $0.45 per minute." << endl;

   cout << "Package B:   For $59.99 per month 900 minutes are provided. Additional minutes are $0.40 per minute." << endl;

   cout << "Package C:   For $69.99 per month unlimited minutes are provided." << endl;

   //Prompts the user and asks for the package choice
   cout << "Enter your package choice: ";
   cin >> choice;

   if (choice == packageA || choice == packagea) // Compares user input to package A and if true, proceeds to calculate monthly bill for package A
   {
      cout << "Enter the number of minutes: ";
      cin >> minuteUse;

      if (minuteUse >= 450) // Determines if the number of minutes is greater than 450, if so, it calculates extra cost per minute
      {
         minuteUse = minuteUse - 450;
         monthlyBill = (minuteUse * 0.45) + 39.99;
         cout << "The monthly bill is: $" << monthlyBill;
      }
      else
      {
      monthlyBill = 39.99;
      cout << "The monthly bill is: $" << monthlyBill;
      }

   }
   else if (choice == packageB || choice == packageb) // Compares user input to package B and if true, proceeds to calculate monthly bill for package B
   {
      cout << "Enter the number of minutes: ";
      cin >> minuteUse;

      if (minuteUse >= 900) // Determines if the number of minutes is greater than 900, if so, it calculates extra cost per minute
      {
         minuteUse = minuteUse - 900;
         monthlyBill = (minuteUse * 0.40) + 59.99;
         cout << "The monthly bill is: $" << monthlyBill; // Displays the monthly Bill for package A
      }
      else
      {
         monthlyBill = 59.99;
         cout << "The monthly bill is: $" << monthlyBill; // Displays the monthly Bill for package B
      }

      cout << "The monthly bill is: $" << monthlyBill;
   }
   else if (choice == packageC || choice == packagec) // Compares user input to package C and if true, proceeds to calculate monthly bill for package C
   {
      cout << "Enter the number of minutes: ";
      cin >> minuteUse;

      monthlyBill = 69.99;
      cout << "The monthly bill is: $" << monthlyBill; // Displays the monthly Bill for package C
   }
   else
      cout << "Error, you have not chosen a package"; // If the user enters another package not defined that is not A,B, or C it will display this error message.


   return 0;

} // End of function main
