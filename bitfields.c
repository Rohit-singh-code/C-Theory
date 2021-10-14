//int - 32 bits 
//now, when int i=3, binary representation of 3 is 011 which takes 2 bits but int i is assigned with 32 bits hence 30 bits go unused
//its used to reduce memmory consumption
//latgest value(binary/bitwise value) that can be stored in a bit width is 2^n-1 where n is bit length 

#include <stdio.h>
#include <stdlib.h>


struct date
{
    unsigned int day:5;//since max value of day is 31, we only need maximum of 5 bits to represent any day
    unsigned int month:4;//if unsigned is not given, the frist 4 bits are used for value for the binary representation and the last bit is for sign
    // int i:0;//zero width not allowed, error
    int :0; //unnamed bit filed with width 0: forcibly allign the the members to byte order, forces the next data member to start from next byte alignment
    unsigned int year:15;
    // unsigned int i:33;//error since the maximum bits that can be taken by int is 32 bits
};//the first row of  the memmory allignment has 32 bits from which 5 and 4 bits have been taken and the rest are padded hence first row constitutes 4 bytes and next row is 4 bytes
//size : 8 bytes if year is not given bit field



int main()
{
    printf("size of struct date: %d\n",sizeof(struct date));
    struct date dt = {6,12,2020};
    // struct date dt = {32,12,2020};//32 takes 6 bits, in this case gives warning and then execures and prints 0 in place of 32
    // struct date dt = {33,12,2020};
    //in the above struct, the limit was set till 31 which was 5 bits hence it uses only the frist 5 bits of the given value and hence prints 1 hence for 32 it prints 0 whereas for 33 it gives 1
    // printf("enter month");
    // scanf("%d",&dt.month);//error: we cannot access address in bit fields because addressing is always in terms of bytes 
    //pointers cannot be used in bit fields because pointers work with addresses and since bit fileds cannot work with addresses 
    //arrays cannot be used 
    
    printf("date is %d/%d/%d",dt.day,dt.month,dt.year);//bit fields1 png file if unsigned was not given in struct






    return 0;
}


