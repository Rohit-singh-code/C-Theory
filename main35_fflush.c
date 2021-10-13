#include <stdlib.h>
#include <stdio.h>

int main()
{
    char name[20];

    for (int i=0;i<2;i++)
    {
        scanf("%[^\n]s",name);
        printf("%s\n",name);
        fflush(stdin);
    }
    return 0;

}