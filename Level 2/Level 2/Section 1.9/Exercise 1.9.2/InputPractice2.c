#ifdef _WIN32
#define _CRT_SECURE_NO_DEPRECATE
#endif

/*
* Level_2 Exercise 1.9.2:
* C-program that reads the characters from the keyboard
* and writes to a file. The file to write to must be specified by the user
*
* @file InputPractice2.c
* @author Chunyu Yuan
* @version 1.0 02/01/2021
*
*/

// Preprocessor for include file
#include <stdio.h> // C tyle I/O

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
    char file_name[20];   // declare a string that keeps file name

    //remind user to input the file name
    printf("Please input the file name to save later such as \"file.txt\" :\n"); 
    printf("(The number of characters cannot beyond 20)\n\n");

    // read the input and assign to the file_name string
    gets_s(file_name,20);

    //display the user's input file name
    printf("Your input file name is %s\n",file_name);

    //remind user to input the content
    printf("Please input the text which you want to save in the %s. CTRL+A terminate inputing\n", file_name);

       

    FILE* file; //declare FILE  pointer
    file = fopen(file_name, "w"); // create a file with the inputted name and open it

    //check if the file can be openned
    if (!file) {
        perror("File opening failed"); // if cannot open, output an error
        return 0;
    }

    int c; //declare a integer
    while ((c = getchar()) != 1) // check if the input is ^A
    {
        fputc(c, file);  // write the user's input to the file
    }
    fclose(file);// close the file
    printf("Your text successfully saved into file %s\n\n", file_name); // remind user the file is saved
    


    return 0; // return 0 to end program
}