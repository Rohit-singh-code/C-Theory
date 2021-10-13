#include <stdio.h>
#include <stdlib.h>



int main()
{
    const int NUM = 5;
    printf("%d\n",NUM);
    NUM = 8;
    printf("%d",NUM);

    printf("hello");//also considered as const
    printf("%d",70);//also a const
    return 0;
}