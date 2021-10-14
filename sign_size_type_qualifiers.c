//prefixed to modify the size of the data type
//short -> 2B, long->4B mainly used for integers, by default takes integers

#include <stdio.h>
#include <stdarg.h>

int main()
{
    //size qualifiers:
    // short int i = 100000;//error: overflow, cannot store this large value
    // short int i = 1000;
    // int j = 100000;
    // long int k = 100000;
    // printf("i: %d \t j: %d \t k:%ld\n",i,j,k);
    // printf("i: %d \t j: %d \t k:%ld\n",sizeof(i),sizeof(j),sizeof(k));

    //sign qualifiers:
    //most significant bit is for sign qualifiers thta is the left most bit
    unsigned int a = 10;
    unsigned int b = -10;//undefined value whne unsigned used with sign value hence use %d for unsigned values
    int c= 10;
    signed d = -10;//if int not given, it takes default data type that is int
    printf("a: %u \t b: %u \t c:%d \t d:%u\n ",a,b,c,d);//%u can only read unsigned data and gives undefined value whne given signed value
    printf("a: %d \t b: %d \t c:%d \t d:%d\n",a,b,c,d);//but in case of %d, it knows how to represent the data 
    

    //type qualifiers
    //consts - once defined cannot be changed called as literals
    //volatile - prevent the compiler from applying any optimisation, values can be changed outside the scope of current code by code
    //volatile can be chnaged by external device or hardware or other/outside programs
    // const int i = 5;
    // i +=1;//error, read only
    // int i2 = 5;
    // int j2 = 6;
    // const int *p = &i2;//the value that the pointer points to must be same but the address pointed by the pointer can be chnaged
    // *p = j2;//error
    // p = &j2;//allowed, value cannot be changed but address can be chnaged
    // int i3 = 5;
    // int j3 = 6;
    // int* const p2 = &i3;
    // *p2 = j3;//allowed, the value at a pointer can be chnaged
    // p = &j3;//error: now the address in the pointer cannot be chnaged

    //using pointers we can get access to some values and data that cannot be normally accessed
    //dangling pointer and memmory leak sideeffects of pointers
    //viruses use pointers to exploit the data
    //java doesnt allow pointers so that unauthorised access to memory is not given 
    // const int i4 = 5;
    // int *p4 = &i4;
    // *p4 = 6;//gives warning that its discarding the const qualifier, removing the const restriction and allows to modify
    //hence in this way the pointer harms the values and changes the const values as well, making the program more vulnerable
    // const const int a = 10;//not allowed, illegal use of const
    
    

    
    
    return 0;
}