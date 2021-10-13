#include <stdlib.h>
#include <stdio.h>

int main()
{
    double num1,num2;
    char op;
    printf("enter the 2 numbers: ");
    scanf("%lf,%lf",&num1,&num2);
    printf("enter the operator: ");
    scanf(" %c",&op);

    switch (op)
    {
    case '+':
        printf("the sum is %f",num1+num2);
        break;
    case '-':
        printf("the dif is %f",num1-num2);
        break;
    case '*':
        printf("the product is %f",num1*num2);
        break;
    case '/':
        printf("the div is %f",num1/num2);
        break;
    default:
        printf("invalid operator");
        break;
    }

    return 0;
}