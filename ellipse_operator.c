//variable lenght argument

#include <stdarg.h>
#include <stdio.h>


double sum(int n,...)//ellipses operator: variable length arguments
{
    double s = 0;
    va_list va;//step1
    va_start(va,n);//step2: points to the next argument after last named argument
  

    for(int i=0;i<n;i++)
    {
        s+=va_arg(va,double);//extracts each value one by one and treats them as double and goes on till reaches n
        printf("address of v: %d\n",va);
    }
    va_end(va);
    return s;
}

int main(int argc, char* argv[])
{
    printf("sum: %lf\n",sum(4,1.5,2.0,3.3,4.4));//first elemnt -> 4-> int n == number of elents passed
    printf("sum: %lf\n",sum(3,1.5,2.0,3.3,4.4));//takes only first 3 vales and doesnt give error
    




    return 0;
}