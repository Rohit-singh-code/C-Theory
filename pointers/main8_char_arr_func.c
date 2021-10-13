#include <stdlib.h>
#include <stdio.h>
// a function is alloted space in stack called the stack frame and all the local variables are stored in this func'stackframe
// print func's stack frame is top of main func's stack frame hence main will wait for the func to execute whne the func call is given inside the main function

void print(char *c) //void print(const char *c)//makes the code for the read mode only and gives error if tried to change the passed argument
{
    c[0] = 'a';//possible
    while(*c != '\0')
    {
        printf("%c",*c);
        c++;
    }
    printf("\n");
 }

int main()
{
    char c[20] = "hello";//string gets stored in the space for array
    
    // char *c = "hello";//string gets stored as compile time constant  and most probably stored in the text segment and also gives the same output
    // c[0] = 'a';//no output
    printf("hello world");
    print(c);









    return 0;
}