/*
Date Fall 2023
Author Orlando Companioni

Description:
This is a modular program that will focus on input validation of integers and doubles.
The functions for this program is in the marks.c file and the prototypes are in the 
prigramsprototypes.h file.
*/
#include <stdio.h>
#include "functions.c"
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
    int value;
    double dvalue;
    printf("Enter an integer value: ");
    value = getInt();
    printf("You entered: %d\n", value);
    line('*', 50);
    //********************************************
    printf("Enter an integer value between 10 and 20 inclusive: ");
    value = getIntMM(10, 20);
    printf("You entered: %d\n", value);
    line('*', 50);
    //********************************************
    printf("Enter a double value: ");
    dvalue = getDouble();
    printf("You entered: %.2lf\n", dvalue);
    line('*', 50);
    //********************************************
    printf("Enter a double value between 10.1 and 20.9 inclusive: ");
    dvalue = getDoubleMM(10.1, 20.9);
    printf("You entered: %.2lf\n", dvalue);
    line('*', 50);
    //********************************************
    return 0;
}