#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 5;
    int* pX = &x;
    *pX = 6;
    int** q_pX = &pX;
    int*** r_q_pX = &q_pX;
    printf("address of x:%d\n",&x);
    printf("address of x:%d\n",pX);
    printf("value of x:%d\n",*pX);
    printf("value of x:%d\n",**q_pX);
    printf("value of x:%d\n",***r_q_pX);

    printf("address of pX:%d\n",q_pX);
    printf("value of pX:%d\n",*q_pX);
    printf("value of x:%d\n",**q_pX);


    printf("address of q_pX: %d\n",r_q_pX);
    printf("address of r_q_pX: %d\n",&r_q_pX);
    printf("value at q_pX:%d\n",*r_q_pX);
    printf("address of x:%d\n",**r_q_pX);

    ***r_q_pX = 10;
    printf("value of x:%d\n",x);
    **q_pX = *pX +10;
    printf("the value of x:%d",x);

    printf("address of x+2:%d",pX+2);





    return 0;
}