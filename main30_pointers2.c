#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age = 20;
    char grade = 'a';
    double cgpa = 3.4;
    int *pAGE = &age;
    double *pCGPA = &cgpa;
    char *pGRADE = &grade;
    printf("%p\n%p\n%p",pAGE,pCGPA,pGRADE);






    return 0;
}