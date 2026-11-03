/* This program lets the user choose a decade and a category. */

#include <stdio.h>
#include <stdlib.h>

static int read_choice(const char *prompt, int *choice)
{
    int character;

    printf("%s", prompt);
    if (scanf("%d", choice) != 1) {
        while ((character = getchar()) != '\n' && character != EOF) {
        }
        return 0;
    }

    while ((character = getchar()) != '\n' && character != EOF) {
    }
    return 1;
}

int main(void)
{
    int decade_choice;
    int category_choice;
    const char *decade;

    for (;;) {
        printf("\nSelect a decade:\n");
        printf("1. 2000-2010\n");
        printf("2. 2010-2020\n");
        printf("3. 2020-2030\n");
        printf("4. Exit\n");

        if (!read_choice("Enter your choice: ", &decade_choice)) {
            if (feof(stdin)) {
                break;
            }
            printf("Please enter a number from 1 to 4.\n");
            continue;
        }

        switch (decade_choice) {
        case 1:
            decade = "2000-2010";
            break;
        case 2:
            decade = "2010-2020";
            break;
        case 3:
            decade = "2020-2030";
            break;
        case 4:
            printf("Goodbye.\n");
            return 0;
        default:
            printf("Please enter a number from 1 to 4.\n");
            continue;
        }

        for (;;) {
            printf("\nChoose a category for %s:\n", decade);
            printf("1. Sports\n");
            printf("2. Entertainment\n");
            printf("3. Politics\n");
            printf("4. Exit\n");

            if (!read_choice("Enter your choice: ", &category_choice)) {
                if (feof(stdin)) {
                    return 0;
                }
                printf("Please enter a number from 1 to 4.\n");
                continue;
            }

            switch (category_choice) {
            case 1:
                printf("You chose Sports for %s.\n", decade);
                break;
            case 2:
                printf("You chose Entertainment for %s.\n", decade);
                break;
            case 3:
                printf("You chose Politics for %s.\n", decade);
                break;
            case 4:
                printf("Goodbye.\n");
                return 0;
            default:
                printf("Please enter a number from 1 to 4.\n");
                continue;
            }
            break;
        }
    }

    return 0;
}
