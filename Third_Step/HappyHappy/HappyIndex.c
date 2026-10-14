/*
 This program asks the user their state of happiness on a scale of 
1 to 10 and then gives a custom 2-line message based on their range, 
either 1-2, 3-4, 5-7, or 8-10.
*/
#include <stdio.h>

int main(){
    int happyStat;
    printf("Tell us how happy you feel in the scale of one to 10? -->");
    scanf(" %d", &happyStat);
    //Now using conditional statement of if else if and else:
    if (happyStat<=2){
        printf("What happened my bacchaaaa! are you okieee?");
    }
    else if (happyStat <= 4){
        printf("Why is your mood a bit off today?");
    }
    else if (happyStat <= 7){
        printf("Why is your mood modrate! a bit off today?");
    }
    else{
        printf("Why you so happy today?");
    }

}