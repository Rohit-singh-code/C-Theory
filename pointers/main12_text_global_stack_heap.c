#include <stdio.h>
#include <stdlib.h>

//the memmory which is assigned can be divided in 4 parts
//code/text segment: 1st segment is assigned is used to store the instructions that need to be executed
//static/global segment: stores all the static and the global variables that are not declared inside a func and are accessible anywhere during the whole lifeycle of the programs
//stack: used to store all the info of func calls and local variables. the local variables lives the in this memmory space unitl the time the func is being executed
//the above memmory spaces does not expand/grow 

//size of the stackframe is calculated whne the program is compiling

int total;//it is a global variable hence stored in global space
int square(int x)//stackframe is allocated
{
    return x*x;
}
int squareofsum(int x,int y)//stackframe is allocated
{
    int z = square(x+y);
    return z;
}
int main()//when the program starts execution, some amount of memmory is allocated to main(), amount of memmory allocated for main in stack is called stackframe and all the variables,arguments are stored here
{
    int a=4, b=8;
    total = squareofsum(a,b);
    printf("output=%d",total);
}


//the topmost stackframe in stack is of square func and that is executed first and the rest are paused
//as soon as the square func returns, it will be erased from the stack memmory
//after squareofsum is cleared from the stack memmory, a stackframe above main() stackframe is allocated for the printf func
//in the end global will also be cleared

//os allocates some amount of memmory space to stack but actual allocation of stackframes happen sduring executions
//if we exhaust the stack space allocated by os, then this is known as stackoverflow//

//allocation and deallocation of space of func is done by set of rules and cannot be manipulated

//because of all these drawbacks, to allocate large chuncks of memmory and keeping the variables in the memmory as long as we want, we have heap.

//heap's size can vary during the lifecycle of application
//not set rules for allocation and deallocation
//can control how much memmory to use from heap and how long to keep the data in the memmory
//heap can grow as long as system memmory permits
//also called dynamic memmory and use of heap is called dynamic memmory allocation

