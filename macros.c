//preprocessor directives tells us that lines of code should preprocess before compiling
//begin with #
//must be first non blank character

//macros are direct substituion

#include <stdlib.h>
#include <stdio.h>
#define PI 3.14//macros
#define MAX 10
#define STR "HELLO"
#define sum 2+5*1
#define sum2(a,b) a+b//macros with substituiton
#define sqr(x) (x*x)
#define sqr2(x) (x)*(x)
#define sqr3(a,b) a*b
#define cube(x) sqr2(x)*x
//macros-> text substitution, no memmory allocated

//when the command -> gcc -E unit5_15.c is given, it shows the code of the program and pi and max are subsituted with their values
int main()
{
    printf("PI: %f",PI);//USE OF MACROS ->  substitutes the value of pi with 3.14
    int a[MAX];
    printf("%s\n",STR);
    printf("%d\n",sum);//subsitutes without solving but then gives the naswer after execution    
    printf("%d\n",sum2(10,20));
    printf("%d\n",sqr(2+3));
    printf("%d\n",sqr3(2,3));
    printf("%d\n",cube(3));
    // MAX=70;//error because lvalue required bacause macros doesnt have memmory
     #define MAX 30//gives warning but changes the value of MAX, not advisable to change the value of macros
    
    return 0;
}

