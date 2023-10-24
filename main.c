/*
Author Orlando Companioni
Description:
The students marks are entered for a number of students in a class then the class average is calculated and displayed.
as well as the Letter grade for the average.
The functions for this program is in the marks.c file and the prototypes are in the 
programsprototypes.h file.
*/
#include <stdio.h>
#include "functions.c"
#define _CRT_SECURE_NO_WARNINGS


int main(void){
int num;
int average;
printf("============================Class test marks report program============================\n");
num = getNoOfStudents();//This function will return the number of students
average = getAverage(num);//This function will return the average of the students
printReport(num, average);//This function will print the report
return 0;
}

