#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age = 30;
    int *pAGE = &age;
    printf("%d\n",pAGE);
    printf("%d\n",&age);
    printf("%p\n",pAGE);
    printf("%p\n",&age);
    
    printf("%d\n",*pAGE);
    printf("%d\n",*&age);
    
    printf("%d\n",&*&age);
    printf("%d\n",*&*&age);










    return 0;
}