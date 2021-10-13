#include <stdlib.h>
#include <stdio.h>

int main()
{
    // FILE *fpointer = fopen("employees.txt","w");    
    // fprintf(fpointer,"jim, salesman\npam,receptionaist");
    // fclose(fpointer);

    FILE *fpointer = fopen("employees.txt","a");
    fprintf(fpointer,"\ndavid,accountant");
    fclose(fpointer);
    






    return 0;
}