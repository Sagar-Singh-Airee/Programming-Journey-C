#include <stdio.h>

int main() {
    int num_movies;
    int rating;
    int highest_rating = 0;
    int lowest_rating = 11;

    char nameOfMovie[20];
    char favoriteMovie[20];
    char leastFavoriteMovie[20];

    printf("How many movies have you seen this year?\n");
    scanf("%d", &num_movies);

    for (int i = 1; i <= num_movies; i++) {

        printf("Tell me the name of your %d movie --> ", i);
        scanf("%19s", nameOfMovie);

        printf("Rate the movie on a scale of 1-10 --> ");
        scanf("%d", &rating);

        if (rating >= 1 && rating <= 10) {

            if (rating > highest_rating) {
                highest_rating = rating;

                int j = 0;
                while (nameOfMovie[j] != '\0') {
                    favoriteMovie[j] = nameOfMovie[j];
                    j++;
                }
                favoriteMovie[j] = '\0';
            }

            if (rating < lowest_rating) {
                lowest_rating = rating;

                int j = 0;
                while (nameOfMovie[j] != '\0') {
                    leastFavoriteMovie[j] = nameOfMovie[j];
                    j++;
                }
                leastFavoriteMovie[j] = '\0';
            }

        } else {
            printf("Invalid rating! Please enter a rating from 1 to 10.\n");
            i--;
        }
    }

    if (num_movies > 0) {
        printf("\nYour favorite movie is %s with a rating of %d/10.\n",
               favoriteMovie, highest_rating);

        printf("Your least favorite movie is %s with a rating of %d/10.\n",
               leastFavoriteMovie, lowest_rating);
    }

    return 0;
}