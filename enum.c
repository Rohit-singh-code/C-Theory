#include <stdio.h>
#include <stdlib.h>

//we can create user defined data types in c using enumerate called enum and is basically used to assign names to integral const
//names are symbols to integral consts and wont be stored anywhere in the memmory

enum examples
{
    jan,feb,mar
};

// enum example
// {
    // abc=INT_MAX,def,cdt//error becuase the representaion has reached its maximum integer representation
// };

enum exam2
{
    xyz,abc//isnce the scope of abc is through out this entire program, we cannot have same names in differnet enums //error shows invalid
};


enum days
{
    mon,tue,wed,thu,fri,sat,sun
    //symbol mon gets value 0 by default and if not initialised, the members get the value starting from 0
    //no memmory allocated for these consts
    //available in this file to use directly
    //these are not members but names of integral consts and symbols associalted with some value
    //they do not have memmory allocated but represent integral consts
    //mon=10,tue,wed,thu,fri,sat,sun//starts with 10 and then gets incremented by 1
    //mon=10,tue,wed,thu=0,fri,sat,sun//the next value is always previous value +1
    //enum memebers can have the same value
    //only integr consts are allowed//mon=10.5//error
    //char can be given since char have integer representation
    //these enum values can be used anywhere without allocating any memmory to them
};//mandatory semi colon

int main()
{
    int n;
    enum days d;//size of d is 4 because enum data types are integers consts hence enum variabes have same memmory space as integers
    // n= mon;
    n = thu;
    // mon = 1;//error since enum have no memmory allocated hence assignment not possible
    
    // scanf("%d",&tue);//since memmory not alocated , we cannot use scanf
    
    printf("value of n: %d\n",n);
    printf("size of d: %d\n",sizeof(d));


    enum examples e=abc;//allowed 
    // enum examples e;
    // enum example e=jan;//allowed
    // e=abc;//enum consts are rvalue that is they omly have value
    // int abc;//lvalue: can have memmory
    // scanf("%d",&e);//can store values
    printf("%d\n",e);
    //jan=2;error, cannot chnage
    printf("%d\n",e+feb);//allowed
    //arithmatic operations are allowed: +,-,*,/,%
    //we cannot print the names of enum members

    int ch=2;
    switch(ch)//only way to print the enum members
    {
        case feb:printf("feb");
    }
    return 0;
}



