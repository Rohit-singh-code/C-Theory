#include <stdlib.h>
#include <stdio.h>

void map(int *src, int *dest, int n, int (*p)(int))
{
    for (int i=0;i<n;i++)
    {
        dest[i] = p(src[i]);
    }
}


int icr(int x)
{
    return x+1;

}

void display(int a[],int n)
{
    for (int i=0; i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}


int main()
{
    int src[] = {11,22,33,44,55};
    int n = sizeof(src)/sizeof(src[0]);
    int dest[n];
    map(src,dest,n,icr);
    display(src,n);
    display(dest,n);









    return 0;
}