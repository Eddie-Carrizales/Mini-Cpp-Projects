//Author:      Eddie F. Carrizales
//Date:        10/27/2020

//Description:
// This program is a compilation of small programs that utilize loops. 

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
 //a) prints out the even integers between 2 and 100 (inclusive at both ends)

   int x = 2; // Used to store a variable to count from
   int counterA = 0; //Counter used to end line after 10 digits

   //While loop to display the integers
   while (x <= 100)
   {
      if (counterA%10 == 0)
      {
         cout << endl;
      }
      cout << setw(5) << x;
      x = x + 2;
      counterA++;
   }
   cout << endl << endl;
   cout << "Number of numbers = " << counterA << "." << endl << endl;

//b) prints out the integers that are multiples of 3 from 99 down to 3 (inclusive at both ends).

   int y; // Used to store a variable to count from
   int counterB = 0; //Counter used to end line after 10 digits

   //For loop to display the integers
   for (y = 99; y >= 3; y = y-3)
   {
      if (counterB % 10 == 0)
      {
         cout << endl;
      }
      counterB++;

      if (y % 3 == 0)
      {
         cout << setw(5) << y;
      }

   }
   cout << endl << endl;
   cout << "Number of numbers = " << counterB << "." << endl << endl;

 //c) prints out the integers between 2 and 1,048,576 (2^20) that are integer powers of 2 inclusive at both ends
   
   int z = 2; // Used to store a variable to count from
   int counterC = 0; //Counter used to end line after 10 digits

   //For loop used to display the integers
   for (z = 2; z <= 1048576; z = z * 2)
   {
      if (counterC % 8 == 0)
      {
         cout << endl;
      }
      counterC++;

      cout << setw(10) << z;
   }
   cout << endl << endl;
   cout << "Number of numbers = " << counterC << "." << endl << endl;

//d) print out the integers between 1,048,576 down to 2 that are integer powers of 2 inclusive at both ends

   int q = 1048576; // Used to store a variable to count from 
   int counterD = 0; //Counter used to end line after 10 digits

   //Do while loop to display the integers
   do
   {
      
      if (counterD % 8 == 0)
      {
         cout << endl;
      }

      counterD++;

      cout << setw(10) << q;
      q = q / 2;

   } while (q >= 2 );

   cout << endl << endl;
   cout << "Number of numbers = " << counterD << "." << endl << endl;

//e) Something creative and new involing loops (This program will tell you your horoscope sign based on your birthday)

   int month; //Variable used to store the month of user
   int day; //Variable used to store the day of the user
   int year; //Variable used to store the year of the user

   //Displays to the user the purpose of the program
   cout << "This program determines your horoscope based on your birthday." << endl;
   
   cout << "Please enter the month of your birthday: " << endl;
   cin >> month;

   // While loop to make sure the entered month is logical
   while (month > 12 || month <= 0)
   {
      cout << "You have entered an invalid month." << endl;
      cout << "Please enter the month of your birthday: " << endl;
      cin >> month;
   }

   cout << "Please enter the day of your birthday: " << endl;
   cin >> day;

   //While loop used to make sure the day entered is logical
   while (day > 31 || day <= 0)
   {
      cout << "You have entered an invalid day." << endl;
      cout << "Please enter the day of your birthday: " << endl;
      cin >> day;
   }

   cout << "Please enter the year of your birthday: " << endl;
   cin >> year;

   // While loop used to make sure the year entered is logical
   while (year < 1903 || year > 2020)
   {
      cout << "You have entered an invalid year." << endl;
      cout << "How are you alive?" << endl << endl;
      cout << "Please enter the year of your birthday: " << endl;
      cin >> year;

   }
   cout << "Your date of birth is: " << month << "/" << day << "/" << year << endl << endl;

   //If else statements to select the horoscope depending on the month and day
   if ((month == 1 && day >= 20) || (month == 2 && day <= 18))
   {
      cout << "You are creative, loyal, friendly, and inventive, congratulations, you are Aquarius!" << endl;;
   }
   else if ((month == 2 && day >= 19) || (month == 3 && day <= 20))
   {
      cout << "You are artistic, compassionate, intuitive, and imaginative, congratulations, you are Pisces!" << endl;;
   }
   else if ((month == 3 && day >= 21) || (month == 4 && day <= 19))
   {
      cout << "You are adventurous, positive, versatile, and lively, congratulations you are Aries!" << endl;;
   }
   else if ((month == 4 && day >= 20) || (month == 5 && day <= 20))
   {
      cout << "You are practical, trustworthy, generous, and dedicated, congratulations, you are Taurus!" << endl;;
   }
   else if ((month == 5 && day >= 21) || (month == 6 && day <= 20))
   {
      cout << "You are witty, intelligent, energetic, and eloquent, congratulations, you are Gemini!" << endl;;
   }
   else if ((month == 6 && day >= 21) || (month == 7 && day <= 22))
   {
      cout << "You are genuine, loving, protective, and caring, congratulations, you are Cancer!" << endl;;
   }
   else if ((month == 7 && day >= 23) || (month == 8 && day <= 22))
   {
      cout << "You are exuberant, joyous, warm, and open-minded, congratulations, you are Leo!" << endl;;
   }
   else if ((month == 8 && day >= 23) || (month == 9 && day <= 22))
   {
      cout << "You are kind, hardworking, analytical, and reliable, congratulations, you are Virgo!" << endl;;
   }
   else if ((month == 9 && day >= 23) || (month == 10 && day <= 22))
   {
      cout << "You are charming, balanced, tactful, and diplomatic, congratulations, you are Libra!" << endl;;
   }
   else if ((month == 10 && day >= 23) || (month == 11 && day <= 21))
   {
      cout << "You are brave, faithful, ambitious, and focused, congratulations, you are Scorpio!" << endl;;
   }
   else if ((month == 11 && day >= 22) || (month == 12 && day <= 21))
   {
      cout << "You are smart, honest, independent, and cheerful, congratulations, you are Sagittarius!" << endl;;
   }
   else if ((month == 12 && day >= 22) || (month == 1 && day <= 19))
   {
      cout << "You are disciplined, calm, patient, and funny, congratulations, you are Capricorn!";
   }
   
   cout << "Thanks for playing!" << endl;
   return 0;

} // end of funciton main
