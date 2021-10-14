//portable code/program means that the code or the program is executable or runs on all the platforms and devices

#include <stdio.h>//file inclusions in pre processign stage
//14 july => this and bitfield revise
int main()
{
    #ifdef __MINGW32__
    //if mingw in windows is used, the value of this macro is 1
        char c,d;
        printf("mingw32\n");
    #elif __unix__
        printf("unix");
    #elif __APPLE
        printf("mac system");
    #else 
        printf("other system");
    #endif
//these are standard preprocessor directives 
    return 0;
}

