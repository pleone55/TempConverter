/****************************************************************************
 * *Author: Paul Leone
 * *Date: 1/16/2019
 * *Description: This program converts Celsius temperatures to Fehrenheit
 * *		 temperatures.
 * **************************************************************************/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{

	float celsius;		//represents temperature in Celsius degrees
	float fahrenheit;	//represents temperature in Fahrenheit degree

	//Ask for the temperature in Celsius degrees
	cout << "Please enter a Celsius temperature.\n";
	cin >> celsius;

	//Calculate using the Fahrenheit formula
	fahrenheit = (9.0 / 5) * celsius + 32;

	//Display the equivalent Fahrenheit temperature
	cout << "The equivalent Fahrenheit temperature is: \n";
	cout << fahrenheit << endl;

	return 0;
}
