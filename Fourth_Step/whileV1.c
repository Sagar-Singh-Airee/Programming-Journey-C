/*This program increases the counter form 1 to 5 , printing update and then counts it back down to 1 
However , it uses while loops and increment and decrement operators.*/

#include <stdio.h>

int main(){

    int counter = 0;   //The counter is starting form 0 

    // Here we will get to the while function cuz rn counter is at 0 and after entering while it increases by 1
    while (counter < 5){
        printf("The counter is at %d .\n", ++counter); //++counter is used for incriment first then print value
    }

    while (counter > 1){
        printf("The counter is at %d.\n", --counter);
    }
    return 0;
}