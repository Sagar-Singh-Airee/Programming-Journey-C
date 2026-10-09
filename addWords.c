/*In this chapter we understood that in C we cannot directly assign string to a variable but we have a way by using arrey of chars..*/

/*This program pair there kids with three superhero...*/

#include <stdio.h>
#include <string.h>
int main(){
    //We can define the variable for kids like this...
    char kid1[15];     //Here we can assign the arrey of characters later...
    char kid2[12] = "Maddie";  //Here kid[12] basically means we can have 11 character excluding the ending string or \0
    char kid3[7]= "Andrew";
    //Now for the heros 
    char hero1[]="Batman";
    char hero2[32]="Spiderman";
    char hero3[25];
    //Now lets assign the kid1 and the hero3..
    //There are 2 ways to do that first one is this.
    kid1[0]='K';
    kid1[1]='a';
    kid1[2]='t';
    kid1[3]='i';
    kid1[4]='e';
    kid1[5]='\0';    //Never forget this while writting like this 

    //Second way..
    strcpy(hero3, "The Incridable Hulk");
    printf("%s\'s fav. hero is %s\n", kid1, hero1);
    printf("%s\'s fav. hero is %s\n", kid2, hero2);
    printf("%s\'s fav. hero is %s\n", kid3, hero3);

    
}