#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num = 6;
    printf("%f\n",5.0+10.8);
    printf("%F\n",9.7-7.8);//no output, undefined output
    printf("%f\n",8.6+2);
    printf("%f\n",5 + 4);//undefined output
    printf("%f\n",5.0*6.0);
    printf("%f\n",5+4.5);
    printf("%d\n",9.8);//undefined output
    printf("%d\n",5/4);
    printf("%f\n",5/4.0);
    printf("%f\n",5/4);//undefined output
    printf("%f\n",5+4);//undefined output
    printf("%f\n",5*4);//undefined output
    printf("%d\n",num);
    printf("%f\n",pow(2,3));
    printf("%f\n",sqrt(8));
    printf("%f\n",ceil(36.356));
    printf("%f",floor(36.356));
    
    return 0;
}