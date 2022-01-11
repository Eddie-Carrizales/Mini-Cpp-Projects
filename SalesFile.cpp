//Author:      Eddie F. Carrizales
//Date:        11/02/2020

//Description:
// This program will read sales information from a file and write out a bar char for each of the stores from the files. 

#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
#include <string>

using namespace std;

int main()
{
  
   unsigned int storeNum; // Used to store the store number value
   long long int salesValue; //Used to store the store's sales value
   ifstream inputFile; // Used to be able to take in an input file
   ofstream outputFile; // Used to be able to create an output file
   string fileName; // Used to store the file name and take an input file

   //prompts user for input file name
   cout << "Enter input file name" << endl;
   cin >> fileName;

   // Used to open the input and output files
   inputFile.open(fileName);
   outputFile.open("saleschart.txt");

   if (inputFile) // Used to check if inputfile opened succesfully
   {
      if (outputFile) // Used to check if output file opened succesfully
      {
         //Displays information on the output file
         outputFile << "SALES BAR CHART" << endl;
         outputFile << "(Each * equals 5,000 dollars)" << endl;

         //While loop to take information from the input file
         while (inputFile >> storeNum >> salesValue)
         {
            //Used to check if the store number is valid
            if (storeNum < 1 || storeNum > 99)
            {
               cout << "The store number " << storeNum << " is not valid" << endl;
            }
            else if (salesValue < 0)
            {
               cout << "The sales value for store " << storeNum << " is negative" << endl;
            }
            else
            {
               //Used to display the store number and bar chart depending on the slales value
               outputFile << "Store" << setw(3) << storeNum << ": ";

               while (salesValue >= 5000)
               {
                  if (salesValue >= 0)
                  {
                     outputFile << "*";
                  }

                  salesValue = salesValue - 5000;
               }
               outputFile << endl;
            }

            
         }
         outputFile.close(); //Used to close the output file
      }
      else
      {
         cout << "File could not be opened" << endl;
      }

      inputFile.close(); //Used to close the input file
   }
   else
   {
      cout << "File \"" << fileName << "\" could not be opened" << endl;
   }

   return 0;
} //End of function main
