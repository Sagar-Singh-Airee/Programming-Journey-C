/*This program asks the user for number of tires and the prices for each tire.
it then calculate the total price adding a tax*/
#include <stdio.h>
#include "sales.h"

int main () {
    //Reserving memory for number of tires and the price of each tire.
    int number_of_tires;
    float price_of_tire;
    float total_price;
    float total_price_with_tax;

    //First lets ask for number of tires
    printf("What are the number of tires you got in your hand sir!?\n");
    scanf(" %d", &number_of_tires);

    //Now lets ask for price of each tire
    printf("What is the rate of 1 tire Sir! \n");
    scanf(" %f", &price_of_tire);
    
    //Now lets calculate total price
    total_price = number_of_tires * price_of_tire;
    printf("\nSir your total is : %.3f (without tax)\n", total_price);
    
    //Now with tax included
    total_price_with_tax = total_price + (SALETAX * total_price);
    printf("Sir your total is : %.3f (with tax)", total_price_with_tax);


}
