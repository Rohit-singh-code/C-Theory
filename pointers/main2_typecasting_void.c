#include <stdlib.h>
#include <stdio.h>

// poinetrs are strongly typed 
// int - 4 butes
//char - 1 byte
//float - 4 bytes

int main()
{
    int a = 1025;
    int* pA = &a;
    printf("size of int: %d\n",sizeof(int));
    printf("address pA:%d,value:%d\n",pA,*pA);

    char *p0;
    p0 = (char*)pA;//typecasting
    printf("size of char: %d\n",sizeof(char));
    printf("address p0:%d,value:%d\n",p0,*p0);//1025 = 00000000 00000000 00000100 00000001 the value is stored in p0 when it was type casted as char and
    //when p0 is dereferenced, while converting from pointer to char, sice char takes only size of 1 byte,
    //only 00000001 is taken and is converted from binary to int which is 1
    printf("address pA+1:%d,value:%d\n",pA+1,*(pA+1));
    printf("address p0+1: %d, value:%d\n",p0+1,*(p0+1));//the address p0+1 is just the next bit after p0 and gives the value of the binary 00000100 which is the second byte of 1025

    void *pVOID;
    pVOID = pA;
    printf("address of pVOID:%d\n",pVOID);//we can only point the address
    printf("address of pVOID+1:%d",pVOID+1);
    // printf("address of pVOID:%d, value:%d",pVOID,*pVOID);//compilation error








    return 0;
}