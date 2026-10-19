/* This program increases a counter from 1 to 5, printing updates 
and then counts it back down to 1. However, it uses the increment 
and decrement operators */

#include<stdio.h>
int main(){

    int number = 0;
    printf("The Counter is starting with  %d\n", ++number);
    printf("Teek teek %d\n", ++number);
    printf("Teek teek %d\n", ++number);
    printf("Teek teek %d\n", ++number);
    printf("Teek teek %d\n", ++number);
    printf("Teek teek %d\n", --number);
    printf("Teek teek %d\n", --number);
    printf("Teek teek %d\n", --number);
    printf("Teek teek %d\n", --number);
}