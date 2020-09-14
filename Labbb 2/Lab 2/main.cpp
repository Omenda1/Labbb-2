/* Sharon Omenda
C++ Fall 2020
Due 09/14/2020
Lab 2 Exploring Output.
This lab is designed to get you familiar output to the command prompt using C++.
*/

#include <iostream>
#include <string>

using namespace std;
const string M =  "Monday     "  ; //Days of the week
const string TU = "Tuesday    "  ;
const string W =  "Wednesday  "  ;
const string TH = "Thursday   "  ;
const string F =  "Friday     "  ;

const string CA =  "      08:00         Calculus I";      //Class abbreaviation and times
const string C =   "      13:30         C++";
const string EN =  "      09:00         Engineering Problems";
const string PH =  "      14:00         Classical Physics";
const string PHL = "      14:00         Physics Lab";
const string HO =  "      10:00         Honors SL";



const string Stars1 = "   *    *    *    *"; //checkboard pattern
const string Stars2 = "*    *     *    * ";

int main()
{
	cout << M << CA << endl; //Week schedule output
	cout << M << C << endl;
	cout << TU << CA << endl;
	cout << TU << C << endl;
	cout << W << CA << endl;
	cout << W << PH << endl;
	cout << TH << PHL << endl;
	cout << F << CA << endl;
	cout << F << HO << endl;

	// Checkerboard Output
	cout << Stars1 << endl;
	cout << Stars2 << endl;
	cout << Stars1 << endl;
	cout << Stars2 << endl;
	cout << Stars1 << endl;
	cout << Stars2 << endl;
	cout << Stars1 << endl;
	cout << Stars2 << endl; 

	return 0;
}