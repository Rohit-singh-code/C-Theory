#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    int age;
    printf("enter your age: ");// if a string is given above, we get garbage value because it does not-
                                  //know how to convert/translate 
                                    
    scanf("%d", &age);
    printf("you are %d years old",age);


    double gpa;
    printf("enter your gpa: ");
    scanf("%lf",&gpa);
    printf("your gpa is %f",gpa);


    char grade;
    printf("enter your grade: ");
    scanf("%c",&grade);
    printf("your grade is %c",grade);


    char name[20];
    printf("enter your name: ");
    scanf("%s",name);//stops taking input after first space
    printf("your name is %s",name);


    char name[20];
    printf("enter your name: ");
    fgets(name,20,stdin);
    printf("your name is %s",name);


    char name[20];
    printf("enter your name: ");
    fgets(name,20,stdin);
    printf("your name is %s alright",name);/*after %s new line character
                                             gets entered when enter is pressed if 
                                             theres a text present after %s*/


    /*scanf returns the numebr of items conevrted and assigned successfully
      returns 0 if no values given
      returns -ve if error ocurred while giving input*/

    int a;
    printf("value %d, address: %p",a,&a);//%p gives the address

    //format specifier needs to know where to store the value, hence &a gives the address to store the value to the var

    int a,b,c,d,e,f;
    printf("enter 2 numbers:");
    scanf("%d %d",&b,&c);//'enter' or 'space' to enter next value
    printf("b = %d, c=%d\n",b,c);

    printf("enter 2 numbers:");
    scanf("%d,%d",&a,&d);//only ',' to enter next value
    printf("a: %d, d:%d\n",a,d);

    
    int ret;
    printf("enter 2 unmbers: \n");
    ret = scanf("%d,%d",&e,&f);
    printf("e: %d, f: %d\n",e,f);
    printf("ret: %d",ret);//number of values given to ret



    return 0;
}


