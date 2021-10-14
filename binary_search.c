#include <stdlib.h>
#include <stdio.h>

int binarysearch(int *a,int low,int high,int key)
{
    int pos = -1;
    int found = 0;
    while(low<=high && found==0)
    {
        int mid = (low+high)/2;
        if (a[mid]==key)
        {
            pos = mid; 
            found=1;
        } 
        else if (key<a[mid])
        {
            high = mid-1;
        }
        else
        {
            low = mid+1;
        }

    }
    return pos;
}

int binarysearch2(int *a, int low, int high,int key)
{
    if (low>high)
    {
        return -1;
    }
    else
    {
        int mid = (low+high)/2;
        if (a[mid]==key)
        {
            return mid;
        }
        else if(key<a[mid])
        {
            return binarysearch2(a,low,mid-1,key);
        }
        else
        {
            return binarysearch2(a,mid+1,high,key);
        }
    }
}










int main()
{
    int a[10] = {10,20,30,40,50,60,70,80,90,100};
    int key=30,i;
    int n = sizeof(a)/sizeof(a[0]);
    // FILE *fp = fopen("numbers.txt","r");
    // printf("enter the number of values to be read from the file: ");
    // scanf("%d",&n);
    // for (i=0;i<n;i++)
    // {
        // fscanf(fp,"%d",&a[i]);
    // }
    // fclose(fp);
    // printf("enter the value to be searched: ");
    // scanf("%d",&key);
    int pos; 
    pos = binarysearch(a,0,n-1,key);
    // pos = binarysearch2(a,0,n-1,key); 
    if (pos==-1)
    {
        printf("not found");
    }
    else
    {
        printf("element at %d",pos);
    }

    














    return 0;
}