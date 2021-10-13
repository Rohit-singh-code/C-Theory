#include <stdio.h>
#include <stdlib.h>


void printhelloworld()
{
    printf("hello world\n");
}

int *add(int *a, int *b)
{
    int *c = (int*)malloc(sizeof(int));
    *c = (*a)+(*b);
    return c;
}




int main()
{
    int a=2, b=4;
    int *pSUM = add(&a,&b);
    printhelloworld();
    printf("sum :%d\n",*pSUM);


    //hence we need to make sure that the memmory space is not reduced or rewritten and for that we can use heap or global sections of memmpry








    return 0;
}