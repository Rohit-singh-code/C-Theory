#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c[3][2][2] = {
                        {
                            {2,5},{7,9}
                        },
                        {
                            {3,4},{6,1}
                        },
                        {
                            {0,8},{11,13}
                        }
                     };
    
    int (*pC)[2][2] = c;

    printf("address of c :%d\n",c);
    printf("address of c[0]: %d\n",*c);
    printf("address of c[0][0]: %d\n",c[0][0]);
    printf("value at c[1][1][1]: %d\n",c[1][1][1]);
    printf("value at *(c[1][1]+1): %d\n",*(c[1][1]+1));
    printf("value at *(*(c[1]+j)+k): %d\n",*(*(c[1]+1)+1));
    printf("value at *(c[0][1]+1): %d\n",*(c[0][1]+1));
    printf("address at *(c[1]+1): %d\n",*(c[1]+1));
    printf("value at *(c[0][0]+1): %d\n",*(c[0][0]+1));






    











    return 0;
}