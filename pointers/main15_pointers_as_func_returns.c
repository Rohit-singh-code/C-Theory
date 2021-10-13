#include <stdio.h>
#include <stdlib.h>


void printhelloworld()
{
    printf("hello world\n");
}





int* add(int *a,int *b)//called func
{
    printf("address of a in add: %d\n",&a);
    printf("value of a in add(address of a of main): %d\n",a);
    printf("value stored at address a in add: %d\n",*a);
    
    int c = (*a)+(*b);//a and b are pointer variables
    
    
    // return c;

    return &c;
}

int main()//calling func
{
    int x = 2, y=4;//or int a=2, b=4; int c=add(a,b)
    
    printf("address of x in main: %d\n",&x);

    //call by value -> int z = add(a,b)

    //call by reference
    // int z = add(&x,&y);//value of x of main is copied to a of add
                     // value of y of main is copied to b of add

    int *pZ = add(&x,&y);

    printhelloworld();
    printf("sum: %d",*pZ);//doesnt get printed and shows logical error because the stackframe which was allocated to the add func has been cleared
    //hence when the above pointer points to the address of the variable which was present in the stackframe of the add func, since the stackframe has been cleared, we do not the value which was earlier stored in that address
    //hence we get a logical error

    // printf("sum= %d\n",z);







    return 0;
}