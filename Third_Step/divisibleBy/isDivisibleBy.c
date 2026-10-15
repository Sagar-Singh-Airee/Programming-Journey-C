/* This program asks for a number from 1 to 100 and tells then 
whether or not their choice is equally divisible by 2 through 9. */


//In this program we will learn more about conditional instead of just using if and else...
#include <stdio.h>

int main(){
    //Let's first asign the memeory for the integer then ask the user...
    int numValue;
    printf("Please choose a number form 1 to 100\n");
    scanf(" %d", &numValue);

    //For divisiblilty of 2
    printf("%d, is %s by 2\n", numValue, (numValue%2 == 0 )? ("divisible!") : ("not divisible!"));

    //For the divisiblity of 3 
    printf("%d, is %s by 3\n", numValue, (numValue%3 == 0)? ("divisible!") : ("not divisible!"));

    //Now for 4 and soo on.....

    printf("%d, is %s by 4\n", numValue, (numValue%4 == 0)? ("divisible!") : ("not divisible!"));

    printf("%d, is %s by 5\n", numValue, (numValue%5 == 0)? ("divisible!") : ("not divisible!"));

    printf("%d, is %s by 6\n", numValue, (numValue%6 == 0)? ("divisible!") : ("not divisible!"));

    printf("%d, is %s by 7\n", numValue, (numValue%7 == 0)? ("divisible!") : ("not divisible!"));

    printf("%d, is %s by 8\n", numValue, (numValue%8 == 0)? ("divisible!") : ("not divisible!"));

    printf("%d, is %s by 9\n", numValue, (numValue%9 == 0)? ("divisible!") : ("not divisible!"));




}