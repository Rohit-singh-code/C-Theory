#include <stdlib.h>
#include <stdio.h>

int main()
{

    char color[20];
    char plural_noun[20];
    char celebrityF[20], celebrityL[20];

    printf("enter a color:");
    scanf("%s",color);

    printf("enter plural noun:");
    scanf("%s",plural_noun);

    printf("enter a celebrity:");
    scanf("%s %s",celebrityF,celebrityL);

    printf("roses are %s\n",color);
    printf("%s are blue\n",plural_noun);
    printf("i love %s %s really\n",celebrityF,celebrityL);





    return 0;

}