#include <stdlib.h>
#include <stdio.h>


struct sample
{
    int a;
    float b;
    
};


//void display(struct sample *ptr[], int n)
void display(struct sample **ptr, int n)
{
    for (int i=0;i<n;i++)
    {
        printf("%d %f \n",ptr[i]->a,ptr[i]->b);
    }
}

void swap(struct sample **ptr1, struct sample **ptr2)
{
    struct sample *temp;
    temp = *ptr1;//since *ptr1 contains pointer to a struct, we need a struct pointer temp 
    *ptr1 = *ptr2;
    *ptr2 = temp;

}

int main()
{
    struct sample s[] = {{2,2.2},{3,3.3},{4,4.4}};
    struct sample *p[3];


    for (int i=0;i<3;i++)
    {
        p[i] = &s[i];
    }

    // printf("%d\n",&s[1]);
    // printf("%d\n",s[1]);//first element of s[1]


    // display(p,3);
    printf("%d\n",p[0]);
    printf("%d\n",p[1]);
    printf("%d\n",&p[0]);
    // swap(&p[0],&p[2]); 
    // swap(s[0],s[2]);//error
    // display(p,3);








    return 0;
}