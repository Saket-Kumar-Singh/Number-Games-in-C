#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number;
    int n;
    int i = 0;
    srand(time(0));
    number = rand() % 100 + 1;
    // number = 37;
    printf("******Welcome to GUESS THE NUMBER*******\nYou have to guess a randomly genrated number\nIf the enterd number is less than the randomly genrated number you will be informed to check a guess greater than your present guess and vice vese\nTake as least chance as possible\nALL THE BEST :)\n");
    printf("Please give the number:\n");
    scanf("%d", &n);
    for (i = 1; n != number; i++)
    {
        if (n > number)
        {
            printf("Give a Smaller number please\nTry again:");
        }
        else if (n < number)
        {
            printf("Give a Higher number please\nTry again:");
        }
        else if (n == number || i == 10)
        {
            break;
        }

        scanf("%d", &n);
    }
    if (i > 1 && i < 10)
    {
        printf("Congrats you guessed the number\nYou took %d chances to guess the number\nThats an impressive score", i);
    }
    else if (i = 10)
    {
        printf("YOU LOST");
    }
    else
        printf("Congrats you guessed the number\nYou took %d chance to guess the number\nYou are a LEGEND :)", i);

    return 0;
}