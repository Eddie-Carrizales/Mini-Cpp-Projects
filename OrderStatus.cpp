//Author:      Eddie F. Carrizales
//Date:        11/18/2020

//Description:
// This program will display the status of a spool order for a company when the user enters the number of spools ordered,
// the number of spools currently in stock and any special or normal shipping and handling charges.

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

void readOrder(int& orderedSpools, int& stockSpools, double& shipHand_amount); // readOrder function used to take the input from the user and pass them to main
void displayOrder(int spoolsOrdered, int spoolsStock, double shippingHandling); // displayOrder function used to calculate and display the order

int main()
{
   int ordered_Spools; // Used to store the number of ordered spools entered by the user
   int stock_Spools; // Used to store the number of spools in stock
   double shipHandAmount; // Used to store the shipping and handling amount

   readOrder(ordered_Spools, stock_Spools, shipHandAmount); // call to function readOrder (it is a pass by reference)

   displayOrder(ordered_Spools,stock_Spools, shipHandAmount); // call to displayOrder to pass the values

   return 0;

} // end of function main

void readOrder(int & orderedSpools, int & stockSpools, double & shipHand_amount)
{
   char shipHand; // Used to store the character y or Y meaning yes

   //Displays and promts spools to be ordered to the user
   cout << "Spools to be ordered" << endl;
   cin >> orderedSpools;

   //loop to check for valid order inputs
   while (orderedSpools < 1)
   {
      cout << "Spools order must be 1 or more" << endl;
      cout << "Spools to be ordered" << endl;
      cin >> orderedSpools;
   }

   //Displays and prompts the user for spool stock
   cout << "Spools in stock" << endl;
   cin >> stockSpools;

   //loop to check for valid stock inputs
   while (stockSpools < 0)
   {
      cout << "Spools in stock must be 0 or more" << endl;
      cout << "Spools in stock" << endl;
      cin >> stockSpools;
   }

   //Asks the user whether they will use special shipping or not
   cout << "Special shipping and handling (y or n)" << endl;
   cin >> shipHand;

   //Statement to direct the previous input from the user and charge normal or special shipping charge
   if (shipHand == 'y' || shipHand == 'Y')
   {
      cout << "Shipping and handling amount" << endl;
      cin >> shipHand_amount;

      while (shipHand_amount < 0) // loop to check for valid shipping inputs
      {
         cout << "The spool shipping and handling charge must be 0.0 or more" << endl;
         cout << "Shipping and handling amount" << endl;
         cin >> shipHand_amount;
      }
   }
   else
      shipHand_amount = 12.99; // normal shipping and handling fee

} // end of function readOrder


void displayOrder(int spoolsOrdered, int spoolsStock, double shippingHandling)
{

   //Calculations
   double spoolsReady; // Used to store the value of the spools that are ready
   int spoolsBackOrder; // Used to store the value fo the backordered spools
   double subtotalReady; // Used to store the value of the subtotal (without shipping and handling)
   double shipping_Handling; // Used to store the shipping and handling charges
   double totalCharges; // Used to store the total charges (with shipping included)

   spoolsReady = spoolsStock;

   spoolsBackOrder = (spoolsOrdered - spoolsStock);

   //Condition to check if the backOrder is negative and thus prevent incoherent inputs by reseting and redirecting values
   if (spoolsBackOrder < 0)
   {
      spoolsBackOrder = 0;
      spoolsReady = spoolsOrdered;
   }

   subtotalReady = (spoolsReady * 104);

   shipping_Handling = (shippingHandling * spoolsReady);

   totalCharges = (subtotalReady + shipping_Handling);

   // end of calculations

   //Used to display the spools ready, the back order, the subtotal, shipping, and total charges to the user
   cout << "Spools ready to ship: " << spoolsReady << endl;
   cout << "Spools on back-order: " << spoolsBackOrder << endl;
   cout << "Subtotal ready to ship:" << setw(2) << "$" << setw(10) << fixed << setprecision(2) << subtotalReady << endl;
   cout << "Shipping and handling:"  << setw(3) << "$" << setw(10) << fixed << setprecision(2) << shipping_Handling << endl;
   cout << "Total shipping charges:" << setw(2) << "$" << setw(10) << fixed << setprecision(2) << totalCharges << endl;

} // end of function displayOrder
