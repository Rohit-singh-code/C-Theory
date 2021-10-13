#include <stdio.h>
#include <stdlib.h>

int main()
{
    if (3>2 || 2>5)//logical operator 'or' 
    {
      printf("true");
    }
    
    if (3>2 && 2>5)//logical operator 'and'
    {
        printf("true!");
    }

    if (!(3>2))//negation
    {
      printf("true");
    }
    
    



    return 0;
}