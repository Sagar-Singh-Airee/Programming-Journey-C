/*This program increases the counter from 1 to 5 printing updates then count it back to 1.*/

#include <stdio.h>
int main(){
    int ctr = 0; // Lets start with assigning the 0th number to a variable
    ctr = ctr + 1;//This will increase the value of ctr by 1
    printf("The counter is at %d\n", ctr);


    ctr = ctr + 1;//This will increase the value of ctr by 2
    printf("The counter is at %d\n", ctr);


    ctr = ctr + 1;//This will increase the value of ctr by 3 1
    printf("The counter is at %d\n", ctr);


    ctr = ctr + 1;//This will increase the value of ctr by 4
    printf("The counter is at %d\n", ctr);


    ctr = ctr + 1;//This will increase the value of ctr by 5
    printf("The counter is at %d\n", ctr);


    ctr = ctr - 1;//This will decrease the value of ctr by 4
    printf("The counter is at %d\n", ctr);


    ctr = ctr - 1;//This will decrease the value of ctr by 3
    printf("The counter is at %d\n", ctr);


    ctr = ctr - 1;//This will decrease the value of ctr by 2
    printf("The counter is at %d\n", ctr);


    ctr = ctr - 1;//This will decrease the value of ctr by 1
    printf("The counter is at %d\n", ctr);

    return 0;

}