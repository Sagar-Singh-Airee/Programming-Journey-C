
/*
This program asks the user how many movies they have watched.
It then asks for each movie's name and rating (1-10).
Finally, it displays the highest-rated (favorite) movie
and the lowest-rated (least favorite) movie.
*/
#include<stdio.h>
#include<string.h>

int main(){
    //Starting with assigning varibales
    int numOfMovie, rating;
    char movieName[60];
    //Now for storing higest and lowest rated movies by the user.
    int favMovieRating, leastFavMovieRating;
    char favMovieName[60];
    char leastFavMovieName[60];
    //Now first aksing for the number of movies the user watched till now
    printf("Please enter number of movies watched by you -->");
    scanf(" %d", &numOfMovie);
    //Checking if the number is valid or not
    if (numOfMovie <= 0){
        printf("Please enter at least one movie!.\n");
        return 0;
    }

    //Now taking the number of movies as base to get the name of each movie in a loop

    for (int ctr = 1 ; ctr <= numOfMovie ; ++ctr ){
        //Asking for the movie name and rating of each movie
        printf("Please enter %dst movie name -->", ctr);
        scanf("%59s", movieName);
        printf("\nPlease enter your rating for %s movie -->", movieName);
        scanf(" %d", &rating);
        //Now lets first check if the rating is valid or not!
        if (rating < 1 || rating >10){
            printf("Please enter a valid rating!!");
            --ctr; //This is used to decrease the counter so that the person can re enter the movie
            continue;
        }
        //Now treating the first movie entered by the user as base for higest and lowest
        if (ctr == 1){
            favMovieRating = rating ;
            leastFavMovieRating = rating ;
            //To work with strings for movie name we have to use strcpy so to import that we will be needed build-in header file of string.h
            strcpy(favMovieName, movieName);
            strcpy(leastFavMovieName, movieName);
        }
        //Now comparing the fav movie with the new movie if the condition varifies then it will change the movie name
        if (rating > favMovieRating){
            favMovieRating = rating;
            strcpy(favMovieName, movieName);
        }
        //Now for the least fav
        if (rating < leastFavMovieRating){
            leastFavMovieRating = rating;
            strcpy(leastFavMovieName, movieName);
        }
        printf("The most favorite movie is %s .\n", favMovieName);
        printf("Lease fav movie name is %s .\n", leastFavMovieName);

    }
    return 0 ;
}