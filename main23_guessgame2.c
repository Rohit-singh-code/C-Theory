#include <stdio.h>
#include <stdlib.h>

int main()
{
    int secret_number = 5;
    int guess_count = 0;
    int guess;
    int guess_limit = 3;
    int out_of_guesses = 0;

    while (guess!=secret_number && out_of_guesses==0)
    {   if(guess_count<guess_limit)
        {
            printf("enter a numeber");
            scanf("%d",&guess);
            guess_count ++;
        }
        else
        {
            out_of_guesses = 1;
        }
    }
    if (out_of_guesses == 1)
    {
        printf("out of guesses");
    }
    else
    {
        printf("you win");
    }
    




    return 0;
}