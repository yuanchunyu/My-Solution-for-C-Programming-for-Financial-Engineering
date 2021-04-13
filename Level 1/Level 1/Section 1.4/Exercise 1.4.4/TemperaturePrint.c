/*
* Level_1 Exercise 1.4.4: program to  print two columns on the screen with the temperature in
* degrees Fahrenheit and the equivalent temperature in degrees Celsius.
*
* @file TemperaturePrint.c
* @author Chunyu Yuan
* @version 1.0 11/30/2020
*
*/

// Preprocessor for include file
#include <stdio.h> // C tyle I/O

/*
* Function to print two columns on the screen with the temperature in
* degrees Fahrenheit and the equivalent temperature in degrees Celsius.
* 
*
* @function temperature_print
* @param float start_temp // start temperature in degree Fahrenheit
* @param float end_temp //end temperature in degree Fahrenheit
* @param float step // step size
* @return none
*/
void temperature_print(float start_temp, float end_temp, float step);


/*
* Controls operation of the program
* Return type of main() expects an int
*
* @function main()
* @param none
* @return 0
*/
int main()

{
	// calls the function
	// start temperature is 0 degree Fahrenheit
	// end temperature is 300 degree Fahrenheit
	// step size is 20 
	temperature_print(0, 300, 20); 

	return 0;

}


void temperature_print(float start_temp, float end_temp, float step)
{
	printf("%10s %10s\n", "Fahrenheit", "Celsius"); //header text

	// while loop 
	while (start_temp <= end_temp)
	{
		float fah_to_cel = (5.0 / 9.0) * (start_temp - 32.0); // transfer Fahrenheit to  Celsius

		printf("%10.1f %10.1f\n", start_temp, fah_to_cel); //print result


		start_temp += step; //update to next generation degree using step size


	}

}
