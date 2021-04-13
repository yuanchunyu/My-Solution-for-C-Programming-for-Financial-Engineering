/*
* Header file for defining Macro PRINT1(a) and PRINT2(a,b)
*
*
* @file Defs.h
* @author Chunyu Yuan
* @version 1.0 02/01/2021
*
*/
#ifndef DEFS_H //checks whether the DEFS_H has been
#define DEFS_H //define DEFS_H 

#ifndef PRINT1(a) //checks whether the Macro PRINT1(a) has been
#define PRINT1(a) printf("%d\n",a) // define Macro PRINT1(a): input parameter value a then print it 

#endif //end of if statement for MACRO PRINT1(a)

#ifndef PRINT2(a,b) //checks whether the Macro PRINT2(a,b) has been
#define PRINT2(a,b) printf("%d %d\n",a,b) // define Macro PRINT2(a,b): input parameter value a and b, then print them 

#endif //end of if statement for MACRO PRINT2(a,b)




#endif ////end of if statement for DEFS_H
