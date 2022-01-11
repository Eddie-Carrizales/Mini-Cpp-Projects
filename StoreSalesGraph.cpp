//Author:      Eddie F. Carrizales
//Date:        10/27/2020

//Description:
// This program takes in a value of sales for five different stores and displays a bar graph comparing each store's sales using asterisks as values.

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
   int store1; // Used to store the value of today's sales for store 1
   int store2; // Used to store the value of today's sales for store 2
   int store3; // Used to store the value of today's sales for store 3
   int store4; // Used to store the value of today's sales for store 4
   int store5; // Used to store the value of today's sales for store 5

   //Store 1 display
   cout << "Enter today's sales for store 1: ";
   cin >> store1;
   //Store 1 vlaue check -------------------------------------------------------------------------------
   while (store1 < 0)
   {
      cout << "You have entered an invalid number." << endl;

      cout << "Enter today's sales for store 1: ";
      cin >> store1;

   }

   //Store 2 display
   cout << "Enter today's sales for store 2: ";
   cin >> store2;
   //Store 2 vlaue check -------------------------------------------------------------------------------
   while (store2 < 0)
   {
      cout << "You have entered an invalid number." << endl;

      cout << "Enter today's sales for store 2: ";
      cin >> store2;

   }

   //Store 3 Display
   cout << "Enter today's sales for store 3: ";
   cin >> store3;

   //Store 3 vlaue check -------------------------------------------------------------------------------
   while (store3 < 0)
   {
      cout << "You have entered an invalid number." << endl;

      cout << "Enter today's sales for store 3: ";
      cin >> store3;

   }

   //Store 4 display
   cout << "Enter today's sales for store 4: ";
   cin >> store4;
   //Store 4 vlaue check -------------------------------------------------------------------------------
   while (store4 < 0)
   {
      cout << "You have entered an invalid number." << endl;

      cout << "Enter today's sales for store 4: ";
      cin >> store4;

   }

   //Store 5 display
   cout << "Enter today's sales for store 5: ";
   cin >> store5;
   //Store 5 vlaue check -------------------------------------------------------------------------------
   while (store5 < 0)
   {
      cout << "You have entered an invalid number." << endl;

      cout << "Enter today's sales for store 5: ";
      cin >> store5;

   }

   cout << endl;

   //Used to display the sales bar chart title and asterisk value
   cout << "SALES BAR CHART" << endl;
   cout << "(Each * = $100)" << endl;

   //Store 1 ------------------------------------------------------------------------------
   cout << "Store 1: ";

   //Used to display the asterisks based on the store sales
   while (store1 >= 100)
   {
      if (store1 % 100 == 0)
      {
         cout << "*";
      }

      store1 = store1 - 100;
   }
   cout << endl;

   //Store 2 -------------------------------------------------------------------------------
   cout << "Store 2: ";

   //Used to display the asterisks based on the store sales
   while (store2 >= 100)
   {
      if (store2 % 100 == 0)
      {
         cout << "*";
      }

      store2 = store2 - 100;
   }
   cout << endl;

   //Store 3 -------------------------------------------------------------------------------
   cout << "Store 3: ";

   //Used to display the asterisks based on the store sales
   while (store3 >= 100)
   {
      if (store3 % 100 == 0)
      {
         cout << "*";
      }

      store3 = store3 - 100;
   }
   cout << endl;

   //Store 4 -------------------------------------------------------------------------------
   cout << "Store 4: ";

   //Used to display the asterisks based on the store sales
   while (store4 >= 100)
   {
      if (store4 % 100 == 0)
      {
         cout << "*";
      }

      store4 = store4 - 100;
   }
   cout << endl;

   //Store 5 -------------------------------------------------------------------------------
   cout << "Store 5: ";

   //Used to display the asterisks based on the store sales
   while (store5 >= 100)
   {
      if (store5 % 100 == 0)
      {
         cout << "*";
      }

      store5 = store5 - 100;
   }
   cout << endl;


   return 0;

} // End of function main 
