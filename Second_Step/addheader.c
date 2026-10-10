/* This is the smaple rogram that lets 3 kids and their school supply need, 
as well as cost to buy the supplies!*/

#include <stdio.h>
#include <string.h>
#include "header.h"  //This is the syntex  way  to use header file so that we can catogorize the diffrence between built-in header and header made by you!

int main(){
    printf("\n %s have %d kids .\n", FAMILY , KIDS); //Used this constants form header file
    int age;
    char childname[15] = "Thomas"; //We could have used strcpy() here also but it is just to practice...
    age = 11;
    printf("%s is the oldest and his age is %d\n", childname, age);
    age = 6;
    strcpy(childname, "Pikachuu"); //strcpy() is only used cuz of string.h which is a built-in header file in C
    printf("%s is the middle one and his age is %d\n", childname, age);
    age = 3;
    strcpy(childname, "Raichuu");
    printf("%s is the youngest one and his age is %d\n", childname, age);   

    return 0 ;
}