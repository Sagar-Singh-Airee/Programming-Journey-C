/*This program will multiply two number and display the result for as long as the user wants, answaring
N' will break the loop*/

#include <stdio.h>
int main(){
    int num_1;
    int num_2;
    char breaking;
    do{
        //Asking for the first number
        printf("Please enter your 1st number :  ");
        scanf(" %d", &num_1);

        //Asking for the second number
        printf(".\nPlease enter your 2nd number :  ");
        scanf(" %d", &num_2);

        //Telling the user Output
        printf(".\nThe multiplication of %d and %d is %d. \n", num_1, num_2 , num_1*num_2);

        //Giving the user choice!
        printf("Do you want to continue type (y/n)");
        scanf(" %c", &breaking);
        
        //Converting small n to capital N
        if (breaking == 'n'){
            breaking = 'N';
        }

    }
    while(breaking != 'N');
    printf("The program is terminated!!");
    return 0;

}
