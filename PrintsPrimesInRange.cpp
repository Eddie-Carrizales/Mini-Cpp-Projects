//Author:      Eddie F. Carrizales
//Date:        11/12/2020

//Description: This program prints the prime numbers requested by the user both to the console and to an output file

#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>

using namespace std;

bool isPrime(int num);
int input();

int main()
{
   ofstream outputFile;

   int count = 0; // Used as a counter for the loops to determine how many numebers to print
   int currentNum = 2; // Used to begin counting from this number as 1 and 0 are not prime
   int primeNumbers; // used in loop to determine how many numbers to print

   primeNumbers = input(); //Call to function

   while (count < primeNumbers) // Loop to count the number of prime numbers that will be printed 
   {
      
      int isPrimeNumber;
      isPrimeNumber = isPrime(currentNum); // Call to function

      if (isPrimeNumber == 1) // statement to print out only the prime numbers
      {
         cout << setw(5);
         cout << currentNum;

         count++;

         if (count % 10 == 0) // statement to end the line after 10 numbers
         {
            cout << endl;

         }
      }

      currentNum++;

   }
   
//****************************************************************************************************************
//Used to create an output file called "PrimeOut" with the same numbers printed on the console of the program

   outputFile.open("PrimeOut.txt"); // Used to create the output file

   if (outputFile) // Used to check if the output file opened correctly
   {

      int count = 0; // Used as a counter for the loops to determine how many numebers to print
      int currentNum = 2; // Used to begin counting from this number as 1 and 0 are not prime

      while (count < primeNumbers) // Loop to count the number of prime numbers that will be printed 
      {

         int isPrimeNumber;
         isPrimeNumber = isPrime(currentNum); // call to function

         if (isPrimeNumber == 1) // statement to print out only the prime numbers 
         {
            outputFile << setw(5);
            outputFile << currentNum;

            count++;

            if (count % 10 == 0) // statement to end the line after 10 numbers
            {
               outputFile << endl;

            }
         }

         currentNum++;

      }


      outputFile.close(); // Used to close the ouput file
   }
   else
   {
      cout << "File could not be opened" << endl;
   }

//****************************************************************************************************************

   return 0;

} // End of function main()



/****************************************************************************
* Function: Input
* Descr: This functions requests the integer from the user and makes sure that
* the integer is a valid integer by using a while loop to validate it.
* Input: N/A
* Return: The function returns the integer that was requested from the user
****************************************************************************/
int input()
{
   int input;

   //Requests the integer from the user
   cout << "Please enter an integer between 1 and 100" << endl;
   cin >> input;

   //loop to make sure that the input is valid
   while (input < 1 || input > 100)
   {
      cout << "You have entered an invalid number." << endl;
      cout << "Please enter an integer between 1 and 100" << endl;
      cin >> input;
   }

   return input;

} //End of function input()


/****************************************************************************
* Function: isPrime
* Descr: This function determines if a number is prime.
* Input: the input will be the integer that the user entered into the previous
* number. 
* Return: It will return a boolean (true or false) stating whether the number 
* was prime or not. 
****************************************************************************/
bool isPrime(int num)
{
   int i = 2;
   bool prime = true;

   if (num == 1 || num == 0) // Used to check if the number is 1 or 0 as they are not prime numbers
   {
      prime = false;
   }
   else
   {
      while (i <= num / 2) //loop to determine if a number will be prime
      {
         if (num % i == 0)
         {
            prime = false;
            break;
         }
         ++i;
      }
   }
   return prime;

} //End of function isPrime()
