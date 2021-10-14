//takes care of which part of the code needs to get complied
//the rest other parts deosnt even get compiled

//macros can be redefined but enums cannot be redefined

#define MAX 20
#include <stdio.h>
int main()
{
    // #ifdef MAX//no parenthesis for #ifdef // #ifdef MAX>30 ->relational operators doesnt work with #ifdef
        // printf("max defined\n");//if MAX is defined then compiles this part of this code
    
    // #if MAX>30 
        // printf("max defined\n");
    
    #ifndef MIN
        printf("not defined\n");//condition is true and gets complied if MIN is not defined 
    #else
        printf("not defined\n");//since #ifdef is defined, it doesnt compile this part of the code
    #endif //compulsory for #ifdef,#if,#ifndef since it is the bounding command 
    //all the lines of code are compiled until it reaches the #endif statement. ths is neccessary because we do not have '{}' for this
    
    #undef MAX //after this statement, MAX is undefined
    printf("outside the scope of ifdef\n");


    return 0;







}