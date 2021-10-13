#include <stdio.h>
#include <stdlib.h>

int main()
{
    int b[2][3] = { 
                    {2,3,6},
                    {4,5,8}
                    };
    //b[0] and b[1] -> 1-d arrays of 3 integers 
    //if b[0] is allocated an address of 400 then b[1] is allocated at 412

    // int *pB = b;//error -> will return a pointer of 1-d array of 3 integers

    int (*pB)[3] = b;
    printf("address of b: %d\n",b);
    printf("address of b[0]: %d\n",&b[0]);

    printf("address of *b: %d\n",*b);
    printf("address of b[0]: %d\n",b[0]);
    printf("address of b[0][0]: %d\n",&b[0][0]);
    
    printf("b[0][0] element: %d\n",b[0][0]);

    printf("address of b+1: %d\n",b+1);//same as &b[1]
    printf("*(b+1): %d\n",*(b+1));
    printf("address b[1]: %d\n",b[1]);
    printf("address b[1][0]: %d\n",&b[1][0]);
    printf("**(b+1): %d\n",**(b+1));

    printf("*(b+1)+1: %d\n",*(b+1)+1);
    printf("*(b+1)+2: %d\n",*(b+1)+2);
    printf("b[1]+2: %d\n",b[1]+2);
    printf("&b[1]+2: %d\n",&b[1][2]);

    printf("*(*b+1): %d\n",*(*b+1));

    printf("b[1][2]: %d\n",b[1][2]);
    printf("*(b[1]+[2]): %d\n",*(b[1]+2));
    printf("*(*(b+1)+2)): %d\n",*(*(b+1)+2));

    
    
    






    return 0;
}