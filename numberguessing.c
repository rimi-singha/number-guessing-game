#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int random_num;

    srand(time(0)); // Seed random generator

    random_num = rand() % 100 + 1; // Random number 1 to 100

    // printf("Random number: %d", num);
    int number_of_guessing = 0;
    int guessed_num;
    do
    {
        printf("guess the number:");
        scanf("%d", &guessed_num);
        number_of_guessing++;
        if (guessed_num > random_num)
            printf("heigher\n");
        else if (guessed_num < random_num)
        {
            printf("lower\n");
        }
        else
            printf("congrats!!🎉\n");
    } while (guessed_num!= random_num);
    printf("you guessed %d times",number_of_guessing);
    return 0;
}