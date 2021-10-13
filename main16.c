#include <stdio.h>
#include <stdlib.h>
#include <float.h>

int main()
{
    float x,y,z = 12;
    printf("z = %f, size of z= %d\n",z,sizeof(z));
    printf("size of int is %d\n",sizeof(int));

    printf("range of int %d to %d\n",INT_MIN,INT_MAX);
    printf("range of flt %f to %f\n",FLT_MIN,FLT_MAX);
    
    
    return 0;
}