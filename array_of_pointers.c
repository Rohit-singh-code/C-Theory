#include <stdio.h>
#include <stdlib.h>

//q is an array and each of its element contains pointer to each element of another array


int main()
{
    int a[5] = {2,3,4,5,6};

    int *p[5];//its an array of 5 pointers and each of these pointers refer to int

    for (int i=0;i<5;i++)
    {
        p[i] = &a[i];
    }

    // for (int i=0;i<5;i++)
    // {
        // printf("%d ",*p[i]); 
    // }
    int a2= p[0];
    // int a3 = &p[0];
    printf("%d\n",p[0]);
    printf("%d\n",p[1]);
    // printf("%d\n",&a2[0]);
    printf("%d\n",&p[0]);

    





    return 0;
}



