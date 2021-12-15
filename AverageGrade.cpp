//Author:      Eddie F. Carrizales
//Date:        11/12/2020

//Description: This program calcualtes the average grade of the top 4 grades when 5 grades are given.


#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void getScore(int & scoreInput);
void calcAverage(int score1, int score2, int score3, int score4, int score5);
int findLowest(int one, int two, int three, int four, int five);

int main()
{
   int num1, num2, num3, num4, num5; //Used to store the test scores to pass them down

   getScore(num1); // call to function to get test score 1
   getScore(num2); // call to function to get test score 2
   getScore(num3); // call to function to get test score 3
   getScore(num4); // call to function to get test score 4
   getScore(num5); // call to function to get test score 5

   calcAverage(num1, num2, num3, num4, num5); //calls the function calcAverage and passes the five test scores
   return 0;

} // End of main funciton


/****************************************************************************
* Function: getScore
* Descr: This function gets the test scores from the user.
* Input: scoreInput
* Return: The function returns each test score back to main
****************************************************************************/
void getScore(int & scoreInput)
{
   //Request the user for a test score
   cout << "Enter a test score" << endl;
   cin >> scoreInput;

   //loop to make sure the test grade entered is valid
   while (scoreInput < 0 || scoreInput > 100)
   {
      cout << "The test score entered is invalid." << endl;
      cout << "Enter another test score" << endl;
      cin >> scoreInput;

   }

} // end of getScore function


/****************************************************************************
* Function: calcAverage
* Descr: This function takes all of the scores but only finds the average from
* the top 4 scores. This Function also display the results to the user in a
* nice format.
* Input: score1, score2, score3, score4, score5
* Return: This will not return anything to any function
****************************************************************************/
void calcAverage(int score1, int score2, int score3, int score4, int score5)
{
   int lowest;
   double average;
   lowest = findLowest(score1, score2, score3, score4, score5);
   
   if (lowest == score1)
   {
      average = (score2 + score3 + score4 + score5) / 4;
   }
   else if (lowest == score2)
   {
      average = (score1 + score3 + score4 + score5) / 4;
   }
   else if (lowest == score3)
   {
      average = (score2 + score1 + score4 + score5) / 4;
   }
   else if (lowest == score4)
   {
      average = (score2 + score3 + score1 + score5) / 4;
   }
   else if (lowest == score5)
   {
      average = (score2 + score3 + score4 + score1) / 4;
   }

   cout << "Your scores were recorded succesfully, the lowest of the five scores was dropped and the average displayed" << endl;
   cout << "is the average of your top four scores." << endl;
   cout << "Your average is: " << setprecision(2) << fixed << average << endl;

} // End of calcAverage function



/****************************************************************************
* Function: findLowest
* Descr: This function finds the lowest grade from the five inputted grades.
* Input: int one, int two, int three, int four, int five
* Return: This funciton is called by calcAverage and will return the smallest
* grade to calcAverage.
****************************************************************************/
int findLowest(int one, int two, int three, int four, int five)
{
   int smallest; // Used to store the smalles grade

   //statements to check which of the grades is the smallest
   if (one < two && one < three && one < four && one < five)
   {
      smallest = one;
   }
   else if (two < one && two < three && two < four && two < five)
   {
      smallest = two;
   }
   else if (three < one && three < two && three < four && three < 5)
   {
      smallest = three;
   }
   else if (four < one && four < two && four < three && four < five)
   {
      smallest = four;
   }
   else
   {
      smallest = five;
   }

   return smallest;

} // end of findLowest function
