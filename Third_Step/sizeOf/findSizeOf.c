/*This is a program to understand the use of sizeOf...*/

// We use sizeof() to find the number of memory location it takes to store values of anu data type

#include <stdio.h>
int main(){

    char nameOf[] = "Sagar Singh";
    int integer = 9;
    printf("The size of nameOf variable is -> %d.\n", sizeof(nameOf));
    printf("The size of integer is -> %d.", sizeof(integer));
    return 0 ;
}
