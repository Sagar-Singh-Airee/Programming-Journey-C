/* This program will ask users to input test grades for the 25 
students in a class and then compute an average test grade. If fewer 
than 25 students took the test, the user can enter -1 as a grade 
and break the loop, and only those entered grades will be used to 
compute the average. */

#include<stdio.h>
int main(){
    int testGrade;
    float avg;
    int total=0;
    int ctr;
    //Lets loop for asking test grade of 25 student
    for (ctr = 1 ; ctr <=25 ; ctr++){
        printf("Enter the marks of %d student-->", ctr);
        scanf(" %d", &testGrade);
        if (testGrade<0){
            break;
        }
        total += testGrade;

        
    }
    avg = total/ctr;
    printf("The total average is %f",avg);
    return 0; 
}