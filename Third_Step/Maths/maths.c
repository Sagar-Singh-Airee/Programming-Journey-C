//First understanding the special case in division
/*This is the sample program that demostrate the math operators, and the different type of divisions.*/

#include<stdio.h>
int main(){
    //First lets take some floating point values
    float a=3.4;
    float b=5.5;
    float total_float_value;
    //Now lets take the integers 
    int x=6;
    int y=4;
    int total_int_value;

    //Now lets take one int and one float
    int p=5;
    float q=2.5;
    float combo_division;

    //Taking another constant for checking what we will get after converting both float value into integer
    int total_int_value2;
    
    //First taking the case of 2 floating point values in a division
    total_float_value = a/b;
    printf("The division of two floating point %.2f and %.2f is --> %.2f . \n ", a, b, total_float_value ); 

    //Now taking the case of 2 integers
    total_int_value = x/y; //It actually truncates the fractional part toward zero.
    printf("The division of two integers %d and %d is --> %d \n", x, y, total_int_value); 

    //Now taking the case where we use 1 integer and 1 float
    combo_division = p/q;
    printf("The answer of int and float division is --> %f. \n", combo_division);

    //Now taking the case where we want to get answer in integer form..
    total_int_value2= a/b;
    printf("%.1f divided by %.1f equals %d\n", a, b, total_int_value2); // It also truncates the fractional part toward zero

    //Now calculating the reminder
    total_int_value = x%y; // To calcute the reminder we use % operation
    printf("%d modulus (i.e. remainder of) %d equals %d", x, y,total_int_value);

    return 0 ;




}