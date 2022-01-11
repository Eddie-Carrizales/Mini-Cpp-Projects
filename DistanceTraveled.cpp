//Author:      Eddie F. Carrizales
//Date:        11/09/2020

//Description:
// This program will calculate the distance an object travels in meters on earth and moon for specified number of seconds

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;
double readSeconds();
double calculateEarthDistance(double seconds);
double calculateMoonDistance(double seconds);
void displayResults(double seconds, double earthDistance, double moonDistance);

// main function
int main()
{
   double timeInput; //Used to store the time value taken from the readseconds function
   double earth; //Used to store the distance value taken from the calculateEarthDistance function after given the timeInput
   double moon; //Used to store the distance value taken from the calculateMoonDistance function after given the timeInput

   do
   {

      timeInput = readSeconds();

      if (timeInput > 0)
      {
         calculateEarthDistance(timeInput); //Call to function
         calculateMoonDistance(timeInput); // Call to function

         earth = calculateEarthDistance(timeInput); //Assign earth the function value (distance1)
         moon = calculateMoonDistance(timeInput); //Assign moon the function value (distance2)

         displayResults(timeInput, earth, moon); //Call to function with passed values
      }
      else if (timeInput == 0)
         break;

   } while (timeInput >= 0);
} // end of function main

// Read the number of seconds
double readSeconds()
{
   double time;

   cout << "Enter the time (in seconds)" << endl;
   cin >> time;

   //While loop to check value
   while (time < 0)
   {
      cout << "The time must be zero or more" << endl;
      cout << "Enter the time (in seconds)" << endl;
      cin >> time;
   }

   return time;

} //End of function readSeconds

// Calculates the distance an object falls on earth during a specified number of seconds
double calculateEarthDistance(double seconds)
{
   double earthGravity = 9.8;
   double distance1;

   distance1 = 0.5 * earthGravity * pow(seconds, 2);

   return distance1;

} //end of function calculateEarthDistance

// Calculates the distance an object falls on the moon during a specified number of seconds
double calculateMoonDistance(double seconds)
{
   double moonGravity = 1.6;
   double distance2;

   distance2 = 0.5 * moonGravity * pow(seconds, 2);

   return distance2;

} //end of function calculateMoonDistance

//Displays the number of seconds an object has fallen as well as the distance the object has fallen on the earth and moon
void displayResults(double seconds, double earthDistance, double moonDistance)
{
   cout << "The object traveled " << setprecision(4) << fixed << earthDistance << " meters in " << setprecision(2) << seconds << " seconds on Earth" << endl;

   cout << "The object traveled " << setprecision(4) << fixed << moonDistance << " meters in " << setprecision(2) << seconds << " seconds on the Moon" << endl;

} // end of function displayResults
