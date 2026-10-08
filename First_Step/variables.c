/*In this program we will study how vaibales actually are assigned and used*/

//This is the program to list 2 students and their school supply needs, as well as cost to buy the supplies!.

//This is the versionn giving is book!

#include <stdio.h>

int main(){
    //Before working with varibales we have to assign them! like this.
    char firstInitial, lastInitial;
    int number_of_pencils;
    int number_of_notebooks;
    float pencils = 0.23; //Don't confuse, these values are already given.. and are the prices of the iteam
    float notebooks = 2.89;
    float lunchbox = 4.99;
    //Now lets calculate for the first student
    firstInitial = 'S';
    lastInitial = 'A';
    number_of_pencils = 7;
    number_of_notebooks= 4;
    //Now lets print it in a tengiable form
    printf("%c%c needs %d number of pencils, %d number of notebooks and 1 lunchbox! \n", firstInitial, lastInitial, number_of_pencils, number_of_notebooks);
    //Now lets calculate....
    printf("His total cost is = $%.3f \n\n", number_of_pencils*pencils + number_of_notebooks*notebooks + lunchbox );
    


    //Now for the second student

    firstInitial = 'P';
    lastInitial = 'B';
    number_of_pencils = 6;
    number_of_notebooks= 2;
    //Now lets print it in a tengiable form
    printf("%c%c needs %d number of pencils, %d number of notebooks and 1 lunchbox! \n", firstInitial, lastInitial, number_of_pencils, number_of_notebooks);
    //Now lets calculate....
    printf("His total cost is = $%.3f", number_of_pencils*pencils + number_of_notebooks*notebooks + lunchbox );

    return 0 ;
}
