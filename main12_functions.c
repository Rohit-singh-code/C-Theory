#include <stdlib.h>
#include <stdio.h>

int main()
{
    printf("top\n");
    sayhi("rohit",18);
    sayhi("anshu",17);
    sayhi("singh",19);
    printf("bottom");
    
    
    return 0;
}

void sayhi(char name[], int age)
{
    printf("hello user %s\, you are %d \n",name,age);
}


