#include <stdio.h>
#include <stdlib.h>

//char are stored as ascii values and are internally represented as int that is are translated as int




int main()
{
    int age = 40;
    double gpa = 3.7;
    char grade = 'A';
    char strings[] = "rohit";

    char ch = 'a';
    printf("char : %c ,ascii: %d\n",ch,ch);//alphabets are converted to ascii value and stored in form of binary

    char t = 98;
    printf("char: %c, ascii: %d\n",t,t);

    float a = 10;
    printf("float: %f\n",a);

    int b = 9;
    printf("value of b is %d,%o,%x",b,b,b);

    


    return 0;
     

}