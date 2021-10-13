#include <stdio.h>
#include <stdlib.h>

double cube(double num)
{
    double result = num*num*num;//return num*num*num
    return result;
    printf("here");//never gets printed
}


double cube(double num);//if the function exists below the main function

int main()
{

    printf("answer: %f",cube(7.0));
    return 0;
}

double cube(double num)
{
    double result = num*num*num;
    return result;
    printf("here");//never gets printed
}