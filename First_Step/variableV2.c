//This is my version of solving the variable question...
#include <stdio.h>

int main(){
    //First task is to declare the variable 
    char firstInitial, lastInitial;
    int number_of_pencils, number_of_notebooks, number_of_lunchbox;
    float pencils=0.23 , notebooks=2.89, lunchbox= 4.99;
    //For the first student
    firstInitial = 'A';
    lastInitial= 'S';
    number_of_pencils = 7;
    number_of_notebooks = 4;
    number_of_lunchbox = 1;
    //Easy shortcut we can do to calculate in the begining itslef
    float total_amount = number_of_pencils*pencils + number_of_notebooks*notebooks + number_of_lunchbox*lunchbox;
    printf("%c%c needs %d pencils, %d notebooks and %d lunchbox\nTotal amount = %.3f", firstInitial, lastInitial, number_of_pencils, number_of_notebooks, number_of_lunchbox, total_amount);
}