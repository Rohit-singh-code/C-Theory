#include <stdlib.h>
#include <stdio.h>

//when the compiler sees an array as the function argument
//it doesnt copy the whole array but it creates a pointer variable of the same name to the the data type 
//of the array and compiler copies the address of te first element of array
//the pointer is first given address of the first element of the array
//compiler implicitly converts int a[] -> int *a andis interpreted as an array
//this is known as call by reference
//this is useful because arrays can be very large and copying them is useless

// int sumofarrays(int a[])
// {
//     int i,sum = 0;
//     int size = sizeof(a)/sizeof(a[0]);//size of array is shown as 4 instead as 20 hence this line should be in main func instead of call func
//     printf("sor : size of a: %d, size of a[0]: %d",sizeof(a),sizeof(a[0]));
//     for (i=0;i<size;i++)
//     {
//         sum += a[i];
//     }
//     return sum;
// }
// int main()
// {
//     int a[] = {1,2,3,4,5};
//     int total = sumofarrays(a);
//     printf("sum:%d",total);
//     printf("main : size of a: %d, size of a[0]: %d",sizeof(a),sizeof(a[0]));
//     return 0;
// }


int sumofarrays(int *a,int n)//the argument a[] is interpreted as int *a and can be replaced by the same
{
    int i;
    int sum = 0;
    for (i=0;i<n;i++)
    {
        sum += a[i];//a[i] is *(a+i)

    }
    return sum;
}



int main()
{
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int total = sumofarrays(arr,n);
    printf("the sum is: %d",total);
    return 0;
}