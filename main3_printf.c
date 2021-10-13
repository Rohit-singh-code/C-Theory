#include <stdio.h>
#include <stdlib.h>
//printf("c standard %d",__STDC_VERSION__); //gives the year and month of standardised
int main()
{
    int fav_num = 90;
    char fav_char = 'A';
    printf("hello\nworld\n");
    printf("hello\"world\n");
    printf("%d\n",500);
    printf("my %c favorite %s is %d and %f \n",fav_char,"number",fav_num,5.0);

    printf("number: %5d\n",12);//five char have to be printed so 3 char spaces are to left
    printf("number: %d\n",12345);
    printf("number: %-5dx\n",12);//3 char spaces to right and then 'x'
    printf("number: %5fx\n",12.345678);
    printf("number: %.2fx\n",12.345678);//12.35x -> rounds off the value also
    printf("number: %8.2fx\n",12.345678);/*8 char needs to be printed so 3 char spaces to the left annd then 2 decimal 
                                            places with round off*/
    printf("number:%-8.2fx\n",12.345678);

    int ret;
    ret = printf("hello world\n");
    printf("value of ret: %d\n",ret);//prints the value of characters/spaces used, takes '\n' as 1 space 
    
    int b = 9;
    printf("value of b = %d\n",b = 10);//value changed in global frame
                                      //b = 10 aws considered as statement in py but as expression in c
    
    return 0;
}