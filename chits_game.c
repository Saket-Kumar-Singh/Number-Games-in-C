#include <stdio.h>
#include <math.h>

int main()
{

    int i = 0;
    int a;
    printf("Welcome to the chits game\nInstruction:\nStart with 1. play with computer while writting succsesive numbers\nkeep in mind to replace all multiples of 3 with 0\nGood Luck :)\n");

    while (i <= 20)
    {
        scanf("%d", &a);

        if (a != i)
        {
            /* code */

            if (a % 3 == 0 && a != 0)
            {
                printf("you lost the game");
            }

            else if (a == i + 1 || a == 0)
            {
                i += 2;
                if (i % 3 == 0)
                {
                    printf("0\n");
                }
                else
                    printf("%d\n", i);
            }
            else
                printf("you lost the game\n");
        }
        else
            printf("you lost the mind");
    }
    printf("congrats you won the game :)");

    return 0;
}
// chits == 0