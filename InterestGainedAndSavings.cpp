//Author:      Eddie F. Carrizales
//Date:        09/29/2020

//Description:
// This program asks for the principal, the interest rate, and the number of time the interest is compounded in a savings account
// and calculates/displays the previous inputs plus the interest gained and the total amount in savings.


#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
   double savingsAmount; // balance in savings after 1 year assuming there are no other deposts
   double savingsPrincipal; // used to store the balance from savings account from the user
   double interestRate; // used to store the interest rate entered by the user
   int compoundedInterest; //The number of times the interest is compounded during a year
   double interest; // used to store the interest gained in the account after 1 year

   //Used to both display and request information from the user
   cout << "Enter the principal of your savings account: ";
   cin >> savingsPrincipal;

   cout << "Enter the interest rate of your savings account: ";
   cin >> interestRate;

   cout << "Enter the number of times the interest is compounded: ";
   cin >> compoundedInterest;

   cout << endl;

   //used to calculate the amount of savings after one year
   savingsAmount = savingsPrincipal * pow((1 + (interestRate / 100) / compoundedInterest), compoundedInterest);

   //used to calculate the interest 
   interest = savingsAmount - savingsPrincipal;

   //Display information of the interest rate, times compounded, principal, interest, and amount in savings, to the user
   cout << "Interest Rate:" << setw(15) << fixed << setprecision(2) << interestRate << "%" << endl;
   cout << "Times Compounded:" << setw(13) << compoundedInterest << endl;
   cout << "Principal:" << setw(13) << "$ " << fixed << setprecision(2) << savingsPrincipal << endl;
   cout << "Interest:" << setw(16) << "$   "  << fixed << setprecision(2) << interest << endl;
   cout << "Amount in Savings:" << setw(5) <<  "$ "  << fixed << setprecision(2) << savingsAmount << endl;

   return 0;

}  //End of function main()
