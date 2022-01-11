//Author:      Eddie F. Carrizales
//Date:        11/22/2020

//Description:
// This program is a quiz grading program. It compares student answers from a txt file with the correct answers from 
// another text file and deterimnes if the student passed the quiz or not as well as displays other information about
// the students results.

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>

using namespace std;

int read(char arrAnswers[], string file_Name); // Function to read in the txt files 
void calculate_Display(char arrStudenAnswers[], const double STUDEN_ANSWERS, char arrCorrecAnswers[], const double CORREC_ANSWERS); //  function to calculate and display quiz results


int main()
{
   string student_fileName; // Used to store the file name of student quiz entered by the user
   string answers_fileName; // Used to store the file name of the correct answers entered by the user

   const int NUM_CHARSTUDENTS = 30; // Used to store the number of elements
   const int NUM_CHARSCORRECT = 30; // Used to store the number of elements

   int numcharsStudent; // used to store the number of elements/characters to pass them
   int numcharsCorrect; // Used to store the number of elements/characters to pass them


   char arrStudentAnswers[NUM_CHARSTUDENTS]; // array that will be used to store the answer choices from the student txt 
   char arrCorrectAnswers[NUM_CHARSCORRECT]; // array that will be used to store the correct answers from the txt

   //Prompts the user to enter the name of the students answers file
   cout << "Enter student answers file name" << endl;
   cin >> student_fileName;

   numcharsStudent = read(arrStudentAnswers, student_fileName); // call to function read

   if (numcharsStudent == -1) // Used to end main if the file was not found
   {
      return 0;
   }

   //Prompts the user to enter the name of the correct answers file
   cout << "Enter correct answer file name" << endl;
   cin >> answers_fileName;

   numcharsCorrect = read(arrCorrectAnswers, answers_fileName); // call to function read

   if (numcharsCorrect == -1) // Used to end main if the file was not found
   {
      return 0;
   }
   else if (numcharsStudent != numcharsCorrect) // used to determine if the student answeres and correct answers have the same number of entries
   {
      cout << "The student answers file has " << numcharsStudent << " entries and the correct answers file has " << numcharsCorrect << " entries" << endl;
      cout << "Grading cannot be done if they are not the same" << endl;

      return 0;
   }
   else if (numcharsStudent == 0 && numcharsCorrect == 0) // Used to determine if there are any characters inside both text files
   {
      cout << "The number of student answers and correct answers are both 0" << endl;
      cout << "No grade can be calculated" << endl;
      
      return 0;
   }

   calculate_Display(arrStudentAnswers, numcharsStudent, arrCorrectAnswers, numcharsCorrect); // call to function calculate_Display

   return 0;

} // end of function main()


/****************************************************************************
* Function: read(char arrAnswers[],const int NUMCHARS_ANSWERS, string file_Name)
* Descr: This function is used to read in the txt files and put the character 
* contents in an array. Then the function will return the number elements in the
* array or quit the program if the txt files do not open.
* Input: input files with student's answeres and correct quiz answers.
* Return: Returns and integer that is either the number of elements read in from
* the file or a -1 meaning the txt file could not be opened to quit the program.
****************************************************************************/

int read(char arrAnswers[], string file_Name)
{
   ifstream infile; // Used to be able to open an input file 
   int values = 0; // Will later be used as a counter for the value that will be returned
   char letter; // Used to store a character and pass it to the array
   int i = 0; // Used as a value counter for the array


   infile.open(file_Name); // Used to open the infile that the user entered previously

   if (infile.fail()) // Used to determine if the file failed to open
   {
      cout << "File " << "\"" << file_Name << "\"" << " could not be opened" << endl;
      return -1;

      //main should quit here or after returning the -1 (you can make an if statement in main to quit if -1)
   }
   else // Used to begin reading from the file and return a value depending on the number of elements
   {

      while (infile >> letter)
      {
         arrAnswers[i] = letter;
         i++;
         values++;
      }
      
      if (values >= 30)
      {
         //Used to close the file 
         infile.close();

         return 30;
      }
      else if (values < 30)
      {
         //Used to close the file
         infile.close();

         return values;
      }

   }

} // end of function read()


/****************************************************************************
* Function: calculate_Display(char arrStudenAnswers[], const double STUDEN_ANSWERS,
* char arrCorrecAnswers[], const double CORREC_ANSWERS)
* Descr: Function used to calculate and display the list of questions that the student
* missed, the total number of questions missed by the student, the percentage of 
* questions answered correctly, and whether the student passed or failed the quiz.
* Input: The input is two arrarys, the student answers and correct answers, and two
* const ints with the number of elements in each array.
* Return: This function will not return anything as it is a void, but it will display
* the results.
****************************************************************************/
void calculate_Display(char arrStudenAnswers[], const double STUDEN_ANSWERS, char arrCorrecAnswers[], const double CORREC_ANSWERS)
{
   double missedCounter = 0; // Used to count the number of missed questions
   double num_answeredCorrectly; // Used to store the number of correct questions
   double percent; // Used to store the percentage calculated

   //Used to list the questions missed by the student
   for (int i = 0; i < STUDEN_ANSWERS; i++)
   {
      if (arrStudenAnswers[i] != arrCorrecAnswers[i])
      {
         cout << "Question " << i+1 << " has incorrect answer '" << arrStudenAnswers[i] << "', the correct answer is '" << arrCorrecAnswers[i] << "'" << endl;
         missedCounter++;
      }
   }

   //Used to display the total number of questions missed by the student
   cout << missedCounter << " questions were missed out of " << CORREC_ANSWERS << endl;

   //Used to calculate the percentage of questions answered correctly
   num_answeredCorrectly = CORREC_ANSWERS - missedCounter;
   percent = (num_answeredCorrectly * 100) / CORREC_ANSWERS;

   cout << "The student grade is " << setprecision(1) << fixed << percent << "%" <<  endl;

   //Used to determine if the student passed or failed, if percentage is greater than 70% indicate student passed, otherwise state student failed
   if (percent >= 70.0)
   {
      cout << "The student passed" << endl;
   }
   else if (percent < 70.0)
   {
      cout << "The student failed" << endl;
   }

} // end of function calculate_Display

