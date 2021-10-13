#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//to make a acharacter arrays the of the arrays have to be defined and 
//has to be 1 greater than required size of the string
//size of the array >= no.of characaters in string +1
//to show the end of the array, in the end of string we need to use null character
// c[4] = '\0' -> null character
// rule -> a string in c has to be null terminatted



void print1(char *c)
{
    int i = 0;
    while (c[i] != '\0')//while(*(c+i)='\0') or while(*c != '\0')
                                                  //  {
                                                  //     printf("%c",*c);
                                                  //     c++;
                                                  //  }

    {
        printf("%c",c[i]);
        i++;
    }
    printf("\n");
}








int main()
{
    char c[20] = "john";//doesnt require null termination, automatically gets stored with the null character
    // c[0] = 'j';
    // c[1] = 'o';
    // c[2] = 'h';
    // c[3] = 'n';
    // c[4] = '\0';//null termination
    char c2[] = "john";
    int len = strlen(c);
    int len2 = strlen(c2);
    printf("%s\n",c);
    printf("%d\n",len);
    printf("size in bits: %d\n",sizeof(c2));//5 because of null character
    printf("length: %d\n",len2);//4 because null caharacter is not counted in length
    char c3[4] = "mike";//undefined output
    printf("%s\n",c3);
    
    //char c2[20];
    //c2 = "michael";//this is invalid

    char c4[5] = {'j','o','h','n','\0'};
    printf("str in arrays: %s\n",c4);

    int arr[] = {1,2,3};
    char c5[6] = "hello";
    char *pC5;
    pC5 = c5;//stores the address of the first element of the string
    printf("address of c5[0] :%d\n",pC5);
    printf("address of c5[0] :%d\n",c5);
    printf("address c[1]: %d\n",c5+1);
    printf("address of c5[0] :%d\n",&c5[0]);
    printf("pC5[1]:%c\n",pC5[1]);
    pC5[0] = 'a';
    printf("pC5[0]: %c\n",pC5[0]);//pC5[i] => *(pC5+i)
    //c1 = c2 //error
    //c1 = c1+1//error
    printf("address of c5[1]:%d\n",++pC5);

    print1(c5);

    











    return 0;
}