#include <stdlib.h>
#include <stdio.h>

int main()
{
    int age = 30;
    int *pAGE = &age;
    char grade = 'a';
    char *pGRADE = &grade;

    printf("%d\n",*pAGE);
    printf("%d\n",*&age);
    printf("%d\n",&*&age);
    printf("%d\n",*&*&age);


    printf("%c",*pGRADE);
    






    return 0;
}