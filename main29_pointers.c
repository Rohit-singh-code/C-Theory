#include <stdio.h>
#include <stdlib.h>
//pointer variables store the memmory addressses of the other variables
int main()
{
    int age = 30;
    int * pAGE = &age;
    double gpa = 3.2;
    double * pGPA = &gpa;
    char grade = 'a';
    char * pGRADE = &grade;

    
    printf("%p\n",pAGE);
    printf("%p",&age);


//6422199



    return 0;
}