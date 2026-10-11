/*This is a sample program thawt asks the user for some basic data and prints
it on the screen in order to sow what was entered..*/

#include<stdio.h>
int main(){
    //lets first reserve the room for varibales
    char topping[30];
    int slices;
    int month , date, year;
    float cost;

    //Now first lets take the user input to get the cost of pizza in their area...
    printf("What is the cost of pizza in your area, Sir?");
    printf("Enter as $XX.XX\n");
    scanf(" $%f", &cost);

    //Now lets take the name of the toping for one word only..
    printf("Dear Sir! what is your favourite one word pizaa topping?\n");
    scanf(" %s", topping);  //While using a string we dont need to have amperand {&} in scanf()

    // For number of slices.
    printf("What are the number of slices of %s you want sir!?", topping);
    scanf(" %d", &slices);

    //Now asking for order date..

    printf("WHat is the date today sir?{Please enter in XX/XX/XX format}\n");
    scanf(" %d/%d/%d", &month, &date, &year);
    //Here we are done with taking the inputs...
    //Now let's start the printing game

    printf("\n\n Why not treat yourself to dinner on %d/%d/%d", month, date, year);
    printf("\n and have %d slices of %s pizza! \n", slices, topping);
    printf("It will cost you  $%.2f! \n\n\n", cost);

    return 0;

}