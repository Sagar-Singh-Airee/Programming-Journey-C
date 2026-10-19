/*This program increases the counter form 1 to 5 , printing update and then counts it back down to 1 
However , it uses while loops and increment and decrement operators.*/

#include <stdio.h>

int main(){

    int counter = 0;
    while (counter < 5){
        printf("The counter is at %d .\n", ++counter);
    }
    while (counter > 1){
        printf("The counter is at %d.\n", --counter);
    }
    return 0;
}