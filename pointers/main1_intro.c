#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 10;
    int *pAGE = &a;
    printf("%p\n",pAGE);//'a' address
    printf("%p\n",&a);//'a' address
    printf("%d\n",&a);//'a' a address in int form
    printf("%d\n",*&a);//gets the value stored in the address &a
    printf("%d\n",*pAGE);//gets the value in address pAGE
    printf("%p\n",&pAGE);//gives the address of pAGE
    printf("%d\n",&pAGE);//gives the address of pAGE in int form
    printf("%d\n",*&pAGE);//gives the value stored atthe address &pAGE that is the address of 'a'

    printf("%d\n",a);
    *pAGE = 8;
    printf("%d\n",a);

    printf("address of a:%d\n",pAGE);
    printf("a:%d\n",a);
    int b= 20;
    *pAGE = b;
    printf("address of a:%d\n",pAGE);
    printf("a:%d\n",a);

    printf("address pAGE: %d\n",&pAGE);
    printf("size of int:%d\n",sizeof(int));
    printf("address pAGE+1: %d\n",pAGE+1);
    printf("address of pAGE+2:%d\n",pAGE+2);

    printf("value at address pAge:%d\n",*pAGE);
    printf("value at address pAGE+1:%d\n",*(pAGE+1));//paGE+1 has garbage value








    return 0;
}