#include <stdio.h>
#include <stdlib.h>

//code is basically the machine code copied from the excutable files, the instructions are not directly executed, they are first copied to the main memmory
//instructions are first executed sequentially
//functions contain instructions, the first instruction is the entry point of the function and the pointer to the function contains the address of the first instruction/entry point of the function

void printhello(char *name)
{
    printf("hello %s",name);
}

int add(int a,int b)
{
    return a+b;
}



int main()
{
    int c,c2;
    //pointer to the function should take the parameters same as function 
    int (*p)(int,int);
    int (*p2)(int,int);//points to a function that is meant to return an int
    p = &add;
    p2 = add;//same as above 
    c2 = p2(2,3);
    c = (*p)(2,3);//derefercing and executing the function
    printf("%d\n",c);
    printf("%d\n",c2);

    void (*p3)(char*);
    p3 = printhello;
    p3("tom");





    return 0;
}