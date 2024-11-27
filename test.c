#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));

    int random_number = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int guessed;

    // printf("%d", random_number);

    do
    {
        printf("guess random number: ");
        scanf("%d", &guessed);

        if (guessed > random_number)
        {
            printf("lower number please!\n");
        }
        else if (guessed < random_number)
        {
            printf("higher number please!\n");
        }
        else
        {
            printf("congrats! you've guessed the number\n");
        }

        no_of_guesses++;

    } while (guessed != random_number);

    printf("you guessed the number in %d guesses", no_of_guesses);

    return 0;
}