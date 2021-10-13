#include <stdio.h>
#include <stdlib.h>

int main()
{
    ////allocate block of memmory in heap
    
    //malloc - void* malloc(size_t size)//size_t is a data type that stores only positive values, unsigned int
    //malloc return a void pointer that gives us the address of the first byte in this bloack of memmory which it allocates
    //void *p = (int*)malloc(3*sizeof(int)) 
    //printf(p) //gives the address of the first byte of the memmory block
    //we cannot dereference a void pointer
    //*p = 2 or p[0]=2
    //*(p+1) = 4 or p[1]=4
    //*(p+2) = 6 or p[2]=6
    //if values are not given at these addresses then they hace garbage values

    //calloc - takes 2 arguments, first number of datatypes and size of datatyopes
    //calloc - void* calloc(size_t num,size_t size)
    //int *p = (int*)calloc(3,sizeof(int))
    //calloc sets all bytes positions with 0

    //realloc - if we want to change the size of dynamically allocated memmory
    // realloc - void* realloc(void* ptr,size_t)//takes 2 arguments, first argument, pointer to starting address of the existing block, and size of new block
    //if size of new block is larger than the previous block machine creates entirely new memmory block and copy the previous data


    int n;
    printf("enter size of array: ");
    scanf("%d",&n);
    int *a = (int*)malloc(n*sizeof(int));//dynamically allocayted array
    // int *a = (int*)calloc(n,sizeof(int));
    int *b = (int*)realloc(a,2*n*sizeof(int));//if we want to change the size of the memmory block or extend the size of the block
    //it will craete a new memmory block of size 2n and copy the values of previous memmory block a into this memmory block
    //previous block is extended in this case

    // int *b = (int*)realloc(a,0);//equivalent to free(a)
    
    // int *a = (int*)realloc(a,0);//we can also do this

    int *b = (int*)realloc(NULL,n*sizeof(int));//equivalent to malloc

    printf("previous bock address: %d, new address: %d\n",a,b);

    for (int i=0;i<n;i++)
    {
        a[i] = i+1;//if malloc allocated space is not initialised then they store garbage values but calloc stores all 0

    }

    // free(a);//that memmory will be available for allocation against another call to malloc
    //garbage values incase of calloc and malloc if a is freed and printed
    // a[2] = 6;//even after free we are able to modify 
    // a = NULL;//after free, adjust pointer to null
    for (int i=0;i<2*n;i++)
    {
        printf("%d ",b[i]);
    }







    return 0;
}