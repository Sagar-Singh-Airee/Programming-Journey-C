/* This program presents a menu of choices, gets the user's choice, 
and then uses the switch statement to execute a line or two of code 
based on that choice. (What the user wants to do is not truly 
implemented—it is just a series of stubs to teach the value of the 
switch statement. */
#include <stdio.h>
#include <stdlib.h>  //This header is used to get a single new fucntion which is "exit()"

int main(){
    int choice; //Let's reserve this veriable for integer that we will be using..


    //Showing this to the user first so that he can decide what to type
    printf("Hey there User this is the avaiable menu for you!.\n");
    printf("1. Add New Contact\n");
    printf("2. Edit Existing Contact\n");
    printf("3. Call Contact\n");
    printf("4. Text Contact\n");
    printf("5. Exit\n");
    //Now we want everyting in loop from taking the input and showing the result! lets use do-while loop
    do{
        //
        printf("Please enter your choice form 1 to 5.\n");
        scanf(" %d", &choice);
        //This is the best way to use switch case it make the progrma much tidy!
        switch(choice){
            case(1) : printf("To add you will need the ");
                      printf("contact's\n");
                      printf("First name, Last name and Phone number.\n");
                      break;
            case(2) : printf("To edit exisiting contact you need \n");
                      printf("New First Name, New Last Name and new Phone number.\n");
                      break;
            case(3) : printf("\nWhich contact do you ");
                      printf("wish to call?\n");
                      break;
            case(4) : printf("\nWhich contact do you ");
                      printf("wish to text?\n");
                      break;
            //Now the last case is exit here we have to exit the whole program so
            case(5) : exit(1); //This will exit program early
            //We have to be ready for the user not to type a good value so lets use default
            default : printf("\n%d is not a valid choice.\n", choice);
                      printf("Try again.\n");
                      break;
        //Now lets work with while loop tell him when to terminate the asking

        }

    }while(choice<1 || choice >5);
    return 0;

}
