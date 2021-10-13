#include <stdio.h>
#include <stdlib.h>
#include <time.h>













int cash = 100;

void Play(int bet)
{
    // char c[3] = {'j','q','k'};
    char *c = (char*)malloc(3*sizeof(char));//when the stackframe of the play function gets deleted,the space in the heap still remains,
    //and it can no longer be accessed because the pointer pointing to that memmory space in hrap is cleared along with its stackframe
    //hence if the function is run 100 times, there will be 100 such spaces in the heap unused and not further accessible
    //this is known as memmory leak
    c[0] = 'j';
    c[1] = 'k';
    c[2] = 'q';
    printf("shuffling");
    srand(time(NULL));//
    int i;
    for (i=0;i<5;i++)
    {
        int x = rand() % 3;//we get random numbers using rand()
        int y = rand() % 3;
        int temp = c[x]; 
        c[x] = c[y];
        c[y] = temp; 
    }
    int guess;
    printf("whats the position");
    scanf("%d",&guess);
    if (c[guess]=='q')
    {
        cash += 3*bet;
        printf("you win");
    }
    else
    {
        cash -= bet;
        printf("you lose, result- %c %c %c, total cash:%d",c[0],c[1],c[2],cash);

    }
    free(c);//this ensures that the heap which is allocated also gets clear when the function and the pointer pointing to that space gets cleared with stackframe
}




int main()
{
    int bet;
    while (cash>0)
    {
        printf("whats your bet?");
        printf("total cash: %d",cash);
        
        scanf("%d",&bet);
        if (bet==0 || bet>cash) break;
        Play(bet);

    }








    return 0;
}