#include <stdio.h>
#include <stdlib.h>

int main()
{
    int index1,index2;
    int nums[index1][index2];

    printf("enter the number of arrays: ");
    scanf("%d,%d",&index1,&index2);
    int index2_c = index2; 
    int index1_c = index1;
    int i1=0;
    int i2=0;
    while (index1>0)
    {
        index2 = index2_c;
        i2 = 0;
        while (index2>0)
        {
            scanf("%d",nums[i1][i2]);
            i2++;
            index2--;
        }
        i1++;
        index1--;


    }

    index1 = index1_c;
    index2 = index2_c;
    
    for (size_t i = 0; i < index1; i++)
    {
        for (size_t j = 0; j < index2; j++)
        {
            printf("%d\n",nums[index1][index2]);
        }
        
    }
    

    



    return 0;
}