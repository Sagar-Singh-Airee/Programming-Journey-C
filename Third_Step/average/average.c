/*This program calulates the average of 4 grades and do some maths*/

#include <stdio.h>

int main(){
    //We have to assign the float to take marks form all 4 grade
    float grade1;
    float grade2;
    float grade3;
    float grade4;
    
    float total_marks;  //To make the code more good looking
    float total_grade = 4;
    float average_marks;

    //Asking for marks in each grade while giving the output remeber to give floating point values only
    printf("Please enter your marks in grade 1 -->  ");
    scanf(" %f", &grade1);
    printf("Please enter your marks in grade 2 -->  ");
    scanf(" %f", &grade2);
    printf("Please enter your marks in grade 3 -->  ");
    scanf(" %f", &grade3);
    printf("Please enter your marks in grade 4 -->  ");
    scanf(" %f", &grade4);

    //Now lets first print the total marks to make sure !
    total_marks = grade1 + grade2 + grade3 + grade4 ;
    printf("The total number of marks you obtained in 4 grades combined are --->%f \n", total_marks);

    //Now lets calculate the average marks

    average_marks = total_marks/total_grade;
    printf("The average marks you obtained are --->%f ", average_marks);





}