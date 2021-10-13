#include <stdlib.h>
#include <stdio.h>

int main()
{
    double num1,num2;
    char op;
    printf("enter a number: ");
    scanf("%lf",&num1);
    printf("enter a operator: ");
    scanf(" %c",&op);//space is needed before %c otherwise doesnt work 
    printf("enter the number: ");
    scanf("%lf",&num2);

    if (op == '+')
    {
        printf("%f",num1+num2);
    }
    else if (op == '-')
    {
        printf("%f",num1-num2);
    }
    else if (op == '*')
    {
        printf("%f",num1*num2);
    }
    else if (op == '/')
    {
        printf("%f",num1/num2);
    }
    else
    {
        printf("invalid operator");
    }
}

