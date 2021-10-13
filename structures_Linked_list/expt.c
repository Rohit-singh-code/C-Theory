#include <stdio.h>
#include <stdlib.h>

typedef struct st1
{
    int a;
    struct st1 *p1;
}st1;


int main()
{
    st1 ele1;
    ele1.a = 100;
    ele1.p1 = &ele1;
    printf("%d %d %d",ele1.a,ele1.p1->a,ele1.p1->p1->a);
    







    return 0;
}