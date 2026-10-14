/*This program asks the user for their birth year and calculates 
how old they will be in the current year. (it also checks to make 
sure a future year has not been entered.) It then tells the user if 
they were born in a leap year.*/

#include <stdio.h>
int main(){
    int birthYear;     //assigning memory for this variable which we will be asking form user
    int currentYear = 2026 ;// Taking the current year to calculate age.
    int age;   
    float leapYear;
    printf("Please enter your birth year :--> ");
    scanf(" %d", &birthYear); //This will take the vale of birthYear form user.
    //Now checking the value entered by the user is not exceeding the current year
    if (birthYear < currentYear){
        age = currentYear-birthYear;
        leapYear = birthYear % 4 ;  //This is to check weather the birth year is a leap year 
        //Now if the birth year is leap or not we will proceed accordingly
        if (leapYear == 0 ){
            printf("Lucky!, You where born in leap year\n");
            printf("Right now you are %d years old \n", age);}
        else{
            printf("Sorry , you where not born in a leap year\n");
            printf("Your age right now is %d \n", age);
        }

    }
    //Than we will be using else if he is filling in wrong info.
    else{
        printf("either your are not born right now my friend or you are retard!!");
    }
    
    return 0; 

}