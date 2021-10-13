#include <stdlib.h>
#include <stdio.h>

int main()
{
    //lINK ERROR
    printf("hello world");
    Printf("c standard %d",__STDC_VERSION__);//cannot link with stdio lib

    
    //RUN TIME ERROR
    printf("div %d",2/0);//gives warning, after completing ignores the error shows undefined behaviour
    printf("div %f",12/0);

    //PRINT ERROR
    printf('h');//print statement only takes strings 
    printf("hello world %d","second string");//second string -> machine code -> number from binary
    printf("hello world %d",2.5);/*does not know how to convert binary of floating to integer during runtime
                                   undefined behaviour
                                   internal bit representations are different for integers and floating point*/
    




    return 0;
}