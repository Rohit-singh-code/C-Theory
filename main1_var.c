#include <stdio.h>//importing the library for standard input and output, PREPROCESSOR DIRECTIVE 
#include <stdlib.h>//h reperesents header library
/*
PREPROCESSOR- eliminates all the comments, all imported libraries, headers are expanded and included, all consts are included and substituted
in the code.
COMPILER- checks syntax, generates object files and converts in assembly language,links in libraries
ASSEMBLER- converts all the object files together
LINKER - looks if functions are linked to correct headers and finds function definitions

//variable names can start with _
//c is not a dynamically typed language but is a statically typed language
//variable -> name is given to storage area and not value; has name, location, type, life scope, and qualifiers
/*declaration -> declaring the type of variable
definition -> allocating the memmory
initialising the value*/
/*garbage -> the memmory space allocated to a variable, if it was used before retuurns the previous values
          -> when a var is declared, ut looks for memmory location which are noot occupied by a variable, these location
             may have some valuevalue before variable was declared and when a is called, it can show up undesired value.
             the memmory may have some leftover value pf previous program.*/

//auto,else,long ,switch,enum,case,extern,return....->keywords->cannot be used
//datatypes-> amount of storage to be reserved for specified variable
//significance -> range ofvalue allowed, operations behind to this type,, type of data to be stored
//primary -> int, float ,double,char, void
//variable is given the memmory space. var is the name given to the storage area.


 





*/


int main()//entry point defined and is of int type since is a structured language
{   
    char characeter_name[] = "tom";
    int character_age = 67;
    printf("there was man named %s\n",characeter_name);
    printf("he was %d years old\n",character_age);
    character_age = 78;
    printf("he really liked his name %s\n",characeter_name);
    printf("george did not like his age %d\n",character_age);

    float x,y,z;
    x,y,z = 12;//only z is initialised and x & y gets garbage values.

    


    return 0;/*
    since entry point is of int type the return value is 0 and if the code reaches the return value,this
    marks the end of the above code execution
    */ 

}

