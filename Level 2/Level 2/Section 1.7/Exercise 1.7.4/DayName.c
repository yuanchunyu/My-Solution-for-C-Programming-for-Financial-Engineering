/*
* Level_2 Exercise 1.7.4:
* C-program that that has a function DayName()which can print the day of a given
* day-number. For example:
* 1 gives: Day 1 is a Sunday
* 7 gives: Day 7 is a Saturday.
*
* @file DayName.c
* @author Chunyu Yuan
* @version 1.0 02/01/2021
*
*/

// Preprocessor for include file
#include <stdio.h> // C tyle I/O

/*
* 
* a function DayName()which can print the day of a given
* day-number
*
* @function  DayName(int num_day)
* @param day value, Integer type
* @return none
*/
void DayName(int num_day)
{
	// string array hold the day_name
	char* day[] = { "Sunday", "Monday","Tuesday", "Wednesday", "Thursday","Friday","Saturday" };

	if (num_day >= 1 && num_day <= 7) // check if given number in the range of 1-7
	{
		// print the result of index num_day -1 in the dayname array
		printf("%d gives: Day %d is a %s\n\n", num_day, num_day, day[num_day - 1]);
	}
	else
	{
		//given number is out of the range of 1-7, print error message
		printf("Your input num_day is wrong!\n");
	}
}


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
	int num_day; // declare the number num_day

	printf("Please input the day-number(1 - 7):\n"); //reminder user to input the day-number 
	scanf_s("%d", &num_day); // promote the user to input the value of num_day

	DayName(num_day); // call the function DayName() to get the result


	return 0;// return 0 to end program

}

