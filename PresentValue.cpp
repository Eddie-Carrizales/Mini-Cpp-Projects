//Author:      Eddie F. Carrizales
//Date:        11/10/2020

//Description:
// This program will calculate the present value using functions

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

double presentValue(double futureValue, double interestRate, int numberYears);
double readFutureValue();
double readAnnualInterest();
int readNumberYears();
void displayResults(double presentValue, double futureValue, double annualInterest, int year);

// function main
int main()
{
   double futureValue; // used to store futureValue to pass it
   double interest; // used to store the annual interest to pass it
   int years; // used to store the years to pass them
   double pValue; // used to store the present value to pass it

   futureValue = readFutureValue(); //call to function 
   interest = readAnnualInterest(); //call to function
   years = readNumberYears(); // call to function

   pValue = presentValue(futureValue, interest, years); // call to function

   displayResults(pValue, futureValue, interest, years); // call to function

   return 0;
}

// Present value function used to calculate the present value
double presentValue(double futureValue, double interestRate, int numberYears)
{
   double value;

   //Formula to calcualte present interest
   value = futureValue / (pow((1 + interestRate), numberYears));

   return value;
} // end of presentValue function

// function used to read the future value function
double readFutureValue()
{
   double value;

   cout << "Enter future value" << endl;
   cin >> value;

   while (value <= 0) // used to make sure the value is valid
   {
      cout << "The future value must be greater than zero" << endl;
      cout << "Enter future value" << endl;
      cin >> value;
   }

   return value;
} // end of future value function

//funciton used to read in the annual interest rate as well as convert it from percent to decimal
double readAnnualInterest()
{
   double rate;

   cout << "Enter annual interest rate" << endl;
   cin >> rate;

   while (rate <= 0) // used to make sure the value is valid
   {
      cout << "The annual interest rate must be greater than zero" << endl;
      cout << "Enter annual interest rate" << endl;
      cin >> rate;
   }

   rate = rate / 100; // convert percent to decimal

   return rate;
} // end of annual interest function

// function used to read the number of years
int readNumberYears()
{
   double years;

   cout << "Enter number of years" << endl;
   cin >> years;

   while (years <= 0) // used to make sure the value is valid
   {
      cout << "The number of years must be greater than zero" << endl;
      cout << "Enter number of years" << endl;
      cin >> years;
   }
   return years;

} // end of readNumberYears function

//Function used to diplay the data gathered and calculated
void displayResults(double presentValue, double futureValue, double annualInterest, int year)
{
   annualInterest = annualInterest * 100; // Used to convert the annual interest back to percentage

   cout << "Present value: $" << setprecision(2) << fixed << presentValue << endl;
   cout << "Future value: $" << setprecision(2) << fixed << futureValue << endl;
   cout << "Annual interest rate: " << setprecision(3) << fixed << annualInterest << "%" << endl;
   cout << "Years: " << year << endl;

} // end of void displayResults
