//environment variables defines the envrionment in which program executes and how behavior id determined
//slides***
//name of environment -> case sensitive and must contain char '='

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *p = getenv("PATH");//prints all the path variables present in the environment variables, gets both the paths, from system variables and variables for users that is for overall systems
    if (p==NULL)
    {
        printf("path not available\n");
    }
    else
    {
        // printf("before setting: path: \n%s\n",p);
        /////////////putenv("PATH=rohit")//overwrites all the path varaibles...be very careful
        // strcat(p,";.");//always add semicolon bacause semicolon seperates one path from another in windows
        //puts a semicolon and '.' at the end of the existing path variables list
        // char path_var[100000];
        // strcpy(path_var,"PATH=");
        // strcat(path_var,p);//copying the existing edited path variable to a new varaible
        // //putenv(path_var);//adding new path variable to the PATH

        //adding new ENV variable
        // putenv("HOME=rohit");
        // p = getenv("HOME");
        
        // setenv("USER","NEETA",1);
        // p = getenv("USER");


    }



    return 0;
}




