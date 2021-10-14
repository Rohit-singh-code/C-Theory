#include <stdio.h>

int main()
{
    printf("file: %s \n",__FILE__);
    printf("date: %s \n",__DATE__);
    printf("time: %s \n",__TIME__);//current time during preprocessing
    printf("version is : %d \n",__STDC_VERSION__);
    printf("verison is %d\n",__STDC__);
    printf("line number: %d\n",__LINE__);
    if (__LINE__==11)
    {
        printf("correct line\n");
    }
    else
    {
        printf("wrong line\n");
    }









    return 0;
}
