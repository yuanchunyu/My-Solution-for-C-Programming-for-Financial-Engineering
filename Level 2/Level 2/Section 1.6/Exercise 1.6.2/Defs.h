/*
* header file for Macros:
* PRINT1(a)
* PRINT2(a,b)
* MAX2(x,y)
* MAX3(x,y,z)
* 
* @file Defs.h
* @author Chunyu Yuan
* @version 2.0 02/01/2021
* @update: add MAX2(x,y) and Macro MAX3(x,y,z)
*/


#ifndef DEFS_H //checks whether the DEFS_H has been
#define DEFS_H //define DEFS_H 

#ifndef PRINT1(a) //checks whether the Macro PRINT1(a) has been
#define PRINT1(a) printf("%d\n",a) // define Macro PRINT1(a): input parameter value a then print it 

#endif //end of if statement for MACRO PRINT1(a)

#ifndef PRINT2(a,b) //checks whether the Macro PRINT2(a,b) has been
#define PRINT2(a,b) printf("%d %d\n",a,b) // define Macro PRINT2(a,b): input parameter value a and b, then print them 

#endif //end of if statement for MACRO PRINT2(a,b)

#ifndef MAX2(x,y) //checks whether the Macro MAX2(x,y) has been
#define MAX2(x,y) (x= (x >= y?x:y)) // define Macro MAX2(x,y): input value x and y, compare x and y, then output the maximum one 

#endif // end of if statement for MACRO MAX2(x,y)

#ifndef MAX3(x,y,z) //checks whether the Macro MAX3(x,y,z) has been

/* define Macro MAX3(x,y,z): input x,y,z 
* call Macro MAX2(x,y) to compare x and y 
* then use output from MAX2(x,y) to compare z and output the maximum value
*/
#define MAX3(x,y,z) (z = (MAX2(x,y) >= z? MAX2(x,y):z))

#endif // end of if statement for MACRO MAX3(x,y,z)



#endif // end of if statement for DEFS_H

