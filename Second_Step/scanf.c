/*This is a sample program that asks user for some basic data and prints it on the screen
in order to show what was entered.*/

#include<stdio.h>
int main(){
    //Lets first make variable for what all things we want
    char firstInitial;
    char lastInitial;
    int age;
    int favourite_number;
    //Before taking the input form the user the user should know what he has to provide so for that we first print the things needed.
    printf("Please enter your First Inital letter of your name:\n");
    scanf(" %c", &firstInitial); // scanf() stops the program for the user to fill the input and checks it..
    //now for the last initials
    printf("Please enter your Last inital letter of your name: \n");
    scanf(" %c", &lastInitial);
    //Now for the age
    printf("Please enter your age. : \n");
    scanf(" %d", &age);
    //Now for favourite number
    printf("Please enter your favourate number: \n");
    scanf(" %d", &favourite_number);

    //Now lets print all teh inputs one by one on the screen

    printf("%c%c is right now %d old young \t and his favourate number is %d",firstInitial, lastInitial, age, favourite_number);
    return 0 ;
}