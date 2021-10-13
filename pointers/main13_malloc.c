#include <stdlib.h>
#include <stdio.h>

int main()
{
    int a;//goes on stack

    int *p;//to reserve some space in the heap
    p = (int*)malloc(sizeof(int));//malloc func asks for how much memmory to allocate in form of bytes; 1 block of 4 bytes is allocated in this case in the heap
    //malloc returmns a void pointer to the starting address of the block
    //p is allocated a space in main() stackframe
    //also typecasting is done because malloc returns a void pointer

    *p = 10;//we can access the block in the heap is by derefencing the pointer variable local to the main function returned to us by the malloc function
    free(p);//memmory allocated by malloc is cleared

    p = (int*)malloc(sizeof(int));
    *p = 20;//the previous block still sit in the heap and not cleared until free() function is called

    //we can control when to locate and when to clear the heap

    int *p2;
    p2 = (int*)malloc(20*sizeof(int));//one big contigouous memmory space for arrys is allocated and p2 point to the base address of this block of memmory space
    //when malloc is not able to find a free block of memmory, it returns null

    

}