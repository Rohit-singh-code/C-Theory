#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

int main()
{
    FILE *fp;
    fp = fopen("file.txt","r");//error number 2
    fputc('a',fp);//error number 22
    printf("value of eRror: %d %s\n",errno,strerror(errno));//strerror takes error number from errno and generate a string message 
    perror("eRror");













    return 0;
}