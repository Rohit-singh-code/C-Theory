#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
//method 3
int main()
{
    extern char** environ;
    char **p = environ;
    int i= 0;
    while ((*p)!=NULL)
    {
        printf("%d %s\n",i,*p);
        p++;
        i++;

    }

    putenv("HOME=Rohit");
    char **p1 = environ;
    i = 0;
    while((*p1)!=NULL)
    {
        printf("%d %d\n",i,*p1);
        i++;p1++;
    }
    return 0;
}





