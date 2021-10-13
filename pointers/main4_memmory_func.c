#include <stdio.h>
#include <stdlib.h>
// void increment(int a)
// {
//     a +=1;
//     printf("address of a in increment:%d\n",&a);
// }
// int main()
// {
//     int a = 10;
//     increment(a);
//     // printf("a = %d",a);
//     printf("address of a in main:%d\n",&a);
//     return 0;
//when the appliaction or a program is started, the machine sets aside some memmoy which is typically divided in to 4 parts:
//first part is used for storing instructions in the program 
//second part of the allocated memmory is for static or global variables.
//third part is called stack, all the local variables are stored here
//fourth part is called heap
//the text,gobal variable segment and the stack segment are fixed and decide when the program is started, application can ask for more memmory for its heap segment
//the program/code to be executed is stored in the text
//when the main fuction is invoked all the info abt the method like parameter, local variables,the return function is stored in stack.
//some part of stack is stored for main function in the form of uint called stack frame
//whne the other function in main is called, another stack frame is allocated for incremnet function and the parameters/fresh local variables are creaed for increment function
//whne a is given a+1, the local variable in the increment stack frame is changed
//now the increment function is over,and the increment stack frame is cleared
//main method is resumed
//printf is executed which is a library function and a stack frame is provided to printf statement above the main stack frame
//argument passed to incremnt function in main is the actual argument whereas in the increment void function is called the formal argument
//whne the fuction call happens the actual argument is mapped to formal argument, this is also called as call by value


void increment(int *p)
{
    *p = (*p)+1;
}

int main()
{
    int a;
    a = 10;
    increment(&a);//passing the address instead of passing the value is called "call by reference", this saves us from making a new copy of a data type
    printf("a=%d",a);
    return 0;
}

//





