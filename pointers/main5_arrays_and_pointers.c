#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5] = {2,4,5,8,1};
    //the elements of the array are stored in the memmory with continous allotment of memmory spaces
    int *pARR1 = &arr[0];
    int *pARR2 = arr;
    // int *pARR3 = &arr;//gives error
    // arr++;//error
    // pARR1++;//works and the value stored at pARR remains at its original place....only the pointer to a particular address is changed
    
    // printf("pARR3:%d\n",pARR3);
    
    
    printf("pARR1:%d\n",pARR1);
    printf("value at pARR1:%d\n",*pARR1);
    printf("pARR1+1:%d\n",pARR1+1);
    printf("value at pARR1+1:%d\n",*(pARR1+1));

    printf("pARR2:%d\n",pARR2);
    printf("pARR2[1]:%d\n",pARR2[1]);
    printf("arr:%d\n",arr);//gives the address of the first element of the array
    printf("arr[0] address:%d\n",&arr[0]);//gives the address of the first element of the array
    printf("*arr:%d\n",*arr);
    printf("arr+1:%d\n",arr+1);
    printf("*(arr+1):%d\n",*(arr+1));
    printf("\n");

    int i;
    for (i=0;i<5;i++)
    {
        printf("address: %d\n",arr+i);
        printf("address: %d\n",&arr[i]);
        printf("value: %d\n",arr[i]);
        printf("value: %d\n",*(arr+i));


    }












    return 0;
    
}