#include <stdlib.h>
#include <stdio.h>
#include <string.h>




int main(int argc,char *argv[])//int argc-> takes the number of arguments that will be passed in cmd including the executable
//char *argv[] is the array of pointers pointing towards the string passed as arguments in cmd

{
    printf("argc: %d\n",argc);
    printf("argv[0]: %s\n",argv[0]);//gives the executable along with the path
    printf("argv[1]: %s\n",argv[1]);//givesthe first argument after executable 
    printf("argv[2]: %s\n",argv[2]);//givesthe second argument after executable 
    //if no argument passed after executable then first argv[1]=NULL and then code crashes for argv[1]
    printf("sum: %d\n",atoi(argv[1])+atoi(argv[2]));

    int *p = argc-1;
    char (*p2)[1][1] = argv;
    while(*p!=0)
    {
        printf("%d ",atoi(**p2));
        ;
        *p -= 1;
        p2++;
    }

//     int sum=0;//sum of all the arguments passed
//     for (int i=1;i<argc;i++)
//     {
//         sum+=atoi(argv[i]);

//     }
//     printf("sum: %d",sum);
//     return 0;
// }