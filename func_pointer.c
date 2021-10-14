#include <stdio.h>
#include <stdlib.h>




int cal(int a,int b,int c, int (*op)(int,int,int))
{
    return op(a,b,c);
}



//callback - function name is passed as argument and then call function indirectly
//the function name and &fname gives us the address where we can find the function, it the pointer to the function
//call back was used in map,filter and reduce functions of python

int add(int x, int y,int z)
{
    return x+y+z;
}

int mul(int x,int y,int z)
{
    return x*y*z;
}

void display()
{
    printf("this is display function\n");
}

int main()
{
    //function pointer: 
                        //return type
                        //number of parameters
    int (*f)(int,int,int);
    f = &mul; // f = mul;

    void (*q)();
    q = display;
    q();

    printf("%d\n",f(1,2,3));
    printf("%d\n",mul(1,2,3));
    printf("%d\n",add);//name of the function is the pointer itself
    printf("%d\n",&add);

    int result = cal(1,2,3,add);//callback
    printf("%d\n",result);

    return 0;



}