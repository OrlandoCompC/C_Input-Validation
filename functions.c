/*
AP Workshop 1 p1/p2
Date Fall 2023
Author Orlando Companioni

Description:
This file contains the functions that will be used in the main.c file as well as the functions that will be used on utils.c
This is a modular program


Here I used continue which is something we learned in python and you mentioned it once in class but didnt go too deep into it
nevertheless i know how to use it from my python class.
I also used geek for geeks to see if it worked the same way as in python, it basically skips the rest of the code in the loop and 
goes back to the top of the loop
https://www.geeksforgeeks.org/continue-in-c/

the type conversion of (int)value I also already knew from python and I just searched how it worked in c
https://www.geeksforgeeks.org/type-conversion-c/
basically it just explicitly converts the value to an integer
I use this to check if my double is the same as the integer value.
if they are the same then i know that my value is not really an double.

I have also learned a lot of this from hacker Rank I tend to practice there, but nevertheless most of these things 
are not new, they are the same concepts and the same way that I learned in python.
*/

#include "programsprototypes.h"
#include <stdio.h>


char prnGrade(int mark){ // This function gets a mark and returns a letter grade
    char LetterGrade[3];

    if (mark >= 90&& mark <=100){
        printf("(A+)");
    }
    else if (mark >= 80 && mark <=89){
        printf("(A)");
    }
    else if (mark >=75 && mark <=79){
        printf("(B+)");
    }
    else if (mark >=75 && mark <=79){
        printf("(B+)");
    }
    else if (mark >= 70 && mark <=74){
        printf("(B)");
    }
    else if (mark >= 65 && mark <=69){
        printf("(C+)");
    }
    else if (mark >= 60 && mark <=64){
        printf("(C)");
    }
    else if (mark >= 55 && mark <=59){
        printf("(D+)");
    }
    else if (mark >= 50 && mark <=54){
        printf("(D)");
    }
    else if (mark < 50){
        printf("(F)");
    }
}


int getNoOfStudents(void){
    int numStu,flag=1, returnCode,intCheck; //after is the characters that comes after the number
    char after;
    printf("\nPlease Enter the number of students: ");
    while(flag==1){
        returnCode=scanf("%d%c", &numStu,&after);
        if (returnCode_Check(returnCode,after)==0){
            flag=0;
        }
    }
    return numStu;
}

int getAverage(int NumberOfStudents){//This function gets the average of the students
    int sum=0,mark,counter=0,flag=1,returnCode,intCheck;
    char after;
    printf("Please enter the marks for %d students\n", NumberOfStudents);
    while(counter < NumberOfStudents){
        printf("Enter mark for student %d>: ", counter+1);
        returnCode=scanf("%d%c",&mark,&after);
        if(returnCode==0){ //didnt use the check function because i wanted to print a different message
            printf("ERROR:Only Integers are accepted Please try again!!\n");
            clearBuff();
        }
        else if(after!='\n'){
            printf("ERROR:Please Only Enter Integers\n");
            clearBuff();
        }
        else{
            if (mark >= 0 && mark <= 100){
            counter++;
            sum += mark;
            }
            else if (mark<0){
                printf("Invalid Mark, values should be greater than or equal 0.\n");
            }   
            else if( mark>100){
                printf("Invalid Mark, values should be less than or equal 100.\n");
            }
        }
    }
 return sum/NumberOfStudents;
}

void printReport(int NumberOfStudents, int average){//This function prints the report

    printf("Number of Students: %d\n", NumberOfStudents);
    printf("Average mark: %d ", average);
    prnGrade(average);
}

void clearBuff(void) {// This function clears the buffer
	while (getchar() != '\n')
		;
}

int returnCode_Check(int returnCode,char after){//This function checks the return code and the after character
    if (returnCode==0){
            printf("Only Integers are accepted Please try again: ");
            clearBuff();
            return 1;
        }
    else if (after != '\n'){
            printf("Please Only Enter Integers: ");
            clearBuff();
            return 1;
        }
    else{
            return 0;
        }
}

///////////////////////////////////////////////////////////////////////////////////////////
//Here end the functions that were used on main.c

//Here start the main functions that were used on utils.c

void line(char fill,int length) {//This just draws a line of a certain length with a certain character
    int i;
    for (i = 0; i < length; i++) {
        putchar(fill);
    }
}

int getInt(void){ // This function gets an integer from the user and checks if its valid
    int returnCode,num,flag=1;
    char after;

    while(flag==1){
    returnCode=scanf("%d%c", &num,&after); 
    if (returnCode_Check(returnCode,after)==0){// I already have a function that checks the return code and the after character
        flag=0;
    }
    else{
        continue;
        }
    }
    return num;
}

// This function gets an integer from the user and checks if its valid and if its between the min and max
int getIntMM(int min, int max){ 
    int returnCode,num=0,flag=1;
    char after;

    while(flag==1){
        returnCode=scanf("%d%c", &num,&after);
        if (returnCode_Check(returnCode,after)==0){
            if (num>=min && num<=max){
                flag=0;
            }
            else{
                printf("Invalid value, %d < value < %d: ", min, max);
                continue;
            }
        }
        else{
            continue; //we learned continue in python, it send it back to the top of the loop
        }

    }
    return num;
}

double getDouble(void){//checking if the input by the user is a double
  double value;
  int integerPart,flag=1,returnCode;
  char after;

  while (flag==1) {
    returnCode=scanf("%lf%c", &value,&after);
    if (returnCode == 2 && after=='\n') {//check the variable after buffer rifght away
        integerPart = (int)value; //if the value is an integer the integer part will be the same as the value
        if (value != integerPart) {
        flag=0;
        }
      }
    else {
      clearBuff();
    }
    printf("Please Enter Double: ");
}
return value;
}


double getDoubleMM(double min, double max){//This function will get a double and make sure its in the range
    double num;
    int flag=1;

    num=getDouble();//utilizing the function that took me hours to its full protential :)
    while(flag==1){
        if (num>=min && num<=max){
            flag=0;
        }
        else{
            printf("Invalid value, %lf < value < %lf: ", min, max);
            num=getDouble();
        }
    }
    return num;
}
