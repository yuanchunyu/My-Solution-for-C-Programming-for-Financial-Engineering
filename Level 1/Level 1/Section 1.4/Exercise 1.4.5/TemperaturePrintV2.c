/*
* Level_1 Exercise 1.4.5: program to print two columns on the screen with the temperature in
* degrees Celsius in the left column and degrees Fahrenheit in the right column. Using for construction
*
* @file TemperaturePrintV2.c
* @author Chunyu Yuan
* @version 1.0 11/30/2020
*
*/

// Preprocessor for include file
#include <stdio.h> // C tyle I/O


/*
* Function to  print two columns on the screen with the temperature in
* degrees Celsius in the left column and degrees Fahrenheit in the right column.
*
*
* @function temperature_print
* @param float start_temp // start temperature in degree Celsius
* @param float end_temp //end temperature in degree Celsius
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
	// start temperature is 0 degree Celsius
	// end temperature is 19 degree Celsius
	// step size is 1
	temperature_print(0, 19, 1); 

	return 0;

}



void temperature_print(float start_temp, float end_temp, float step)
{
	printf("%10s %10s\n", "Celsius", "Fahrenheit");  // print header text

	for (;start_temp <= end_temp;start_temp += step)
	{
		float cel_to_fah = start_temp * (9.0 / 5.0) + 32.0; // transfer Celsius to Fahrenheit

		// print result, Celsius in the left column, Fahrenheit in the right column
		printf("%10.1f %10.1f\n", start_temp, cel_to_fah); 
	}


}