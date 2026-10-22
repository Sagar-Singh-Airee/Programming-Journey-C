
/*
This program asks the user how many movies they have watched.
It then asks for each movie's name and rating (1-10).
Finally, it displays the highest-rated (favorite) movie
and the lowest-rated (least favorite) movie.
*/

#include <stdio.h>
#include <string.h>

int main() {

    // Variables for the number of movies and the current rating
    int numOfMovies, rating;

    // Stores the name of the movie currently being entered
    char movieName[50];

    // Stores the names of the favorite and least favorite movies
    char favMovieName[50];
    char leastFavMovieName[50];

    // Stores the highest and lowest ratings found so far
    int favMovieRating, leastFavMovieRating;


    // Step 1: Ask the user how many movies they have watched
    printf("Please enter the number of movies watched till now --> ");
    scanf("%d", &numOfMovies);


    // Step 2: Check whether the number of movies is valid
    // We need at least one movie to find the highest and lowest ratings
    if (numOfMovies <= 0) {
        printf("Please enter at least one movie.\n");
        return 0;  // End the program if the input is invalid
    }


    // Step 3: Loop through each movie
    // i starts at 1 and continues until all movies have been entered
    for (int i = 1; i <= numOfMovies; ++i) {

        // Ask for the current movie's name
        printf("\nPlease enter movie %d name --> ", i);
        scanf("%49s", movieName);

        // Ask the user to rate the current movie
        printf("Please rate this movie from 1 to 10 --> ");
        scanf("%d", &rating);


        // Step 4: Validate the rating
        // Ratings below 1 or above 10 are not allowed
        if (rating < 1 || rating > 10) {
            printf("Invalid rating! Please enter a rating from 1 to 10.\n");

            // Decrease i so this movie can be entered again
            --i;

            // Skip the remaining code in this iteration
            continue;
        }


        // Step 5: Initialize the favorite and least favorite movies
        // The first movie becomes both because no other ratings exist yet
        if (i == 1) {

            // Copy the first movie's name into both name variables
            strcpy(favMovieName, movieName);
            strcpy(leastFavMovieName, movieName);

            // Use the first rating as both the highest and lowest rating
            favMovieRating = rating;
            leastFavMovieRating = rating;
        }


        // Step 6: Check whether the current movie is the new favorite
        // If its rating is higher, update both the rating and movie name
        if (rating > favMovieRating) {

            favMovieRating = rating;
            strcpy(favMovieName, movieName);
        }


        // Step 7: Check whether the current movie is the least favorite
        // If its rating is lower, update both the rating and movie name
        if (rating < leastFavMovieRating) {

            leastFavMovieRating = rating;
            strcpy(leastFavMovieName, movieName);
        }
    }


    // Step 8: Display the final results after all movies are processed
    printf("\n========== MOVIE RATINGS RESULTS ==========\n");

    // Display the movie with the highest rating
    printf("Favorite movie: %s (Rating: %d/10)\n",
           favMovieName, favMovieRating);

    // Display the movie with the lowest rating
    printf("Least favorite movie: %s (Rating: %d/10)\n",
           leastFavMovieName, leastFavMovieRating);


    // Step 9: End the program successfully
    return 0;
}
