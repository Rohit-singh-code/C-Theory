#include <stdio.h>
#include <stdlib.h> 
#include <math.h>



int compare_qsort(const void* a, const void* b)
{
    int A = *((int*)a);
    int B = *((int*)b);
    // return A-B;//ascending order
    // return B-A;//descending order
    return abs(A)-abs(B);
}


int absolute(int a,int b)
{
    int res = abs(a)>abs(b)?1:-1;
    return res;
}

//function pointers can be passed as arguments to functions
//name of any functon always returns pointers

int compare(int a,int b)
{
    int res;
    res = a>b? -1 : 1;
    return res;
}



void bubblesort(int *a,int n, int(*compare)(int, int))
{
    int i,j,temp;
    for (i=0;i<n;i++)
    {
        for (j=0;j<n-1;j++)
        {
            if ((compare(a[j],a[j+1])>0))//compare a[j] and a[j+1] and swap if needed
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}


void a()
{
    printf("hello");
}


void b(void (*ptr)())//function pointer as argument
{
    ptr();//call back function that ptr points to
}


int main()
{
    int arr[] = {3,4,2,6,1,7,9,5};
    int arr2[] = {-3,4,2,-6,-1,7,-9,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    void (*p)() = a;
    b(p);
    b(a);//same as above 2 statement
    //a is call back function
    // bubblesort(arr,n,compare);
    // bubblesort(arr2,n2,absolute);
    qsort(arr2,n2,sizeof(int),compare_qsort);
    int i;
    for (i=0;i<n;i++)
    {
        printf("%d\n",arr2[i]);
    }

    




    return 0;
}