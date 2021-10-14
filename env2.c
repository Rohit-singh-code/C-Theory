#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

//2nd method
int main(int argc, char *argv[], char *envp[])//automatically fetches all the env var avalibale
{
    int i;
    for (i=0;envp[i]!=NULL;i++)
    {
        printf("%d %s",i,envp[i]);//gets all the env var like the previous program; this is 2nd method
    }


    return 0;
}