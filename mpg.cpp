/**********************************************************************
Name: Jaykob Owens
Class: CSC160
Due Date: 5-28
files:mbp.cpp
Description: this progarm will wallo the user to enter the number of miles
             Driven, gallons of gas used and wil calculat the mpg.
**********************************************************************/
//pre-processor directives
#include <iostream>

using namespace std;

//any globa variables or conststants decleared here
//name

//any function prototypes goes here
//name

//the program follows
int main()
{
	//declaration of local varibles(identifiers)
	int miles;
	double gas, mpg;
	
	cout << "Please enter the number of miles driven: ";
	cin >> miles;
	cout << "Please enter the number of gallons of gas used: ";
	cin >> gas;
	mpg = miles/gas;
	cout << "you drove " << miles << " miles and used " << gas
	     << "gallons of gas. you got " << mpg << endl;
	
	return 0;
}
