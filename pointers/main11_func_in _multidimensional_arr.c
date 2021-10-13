#include <stdlib.h>
#include <stdio.h>

void func1(int *A)//passing 1-d array
{

}

void func2(int B[][3])
{

}

void func3(int C[][2][2])//or int (*A)[2][2]
{
    
}


int main()
{
    int c[3][2][2] = {
                        {
                            {2,5},{7,9}
                        },
                        {
                            {3,4},{6,1}
                        },
                        {
                            {0,8},{11,13}
                        }
                     };
    
    int A[2] = {1,2};
    func1(A);
    int B[2][3] = {{2,4,6},{5,7,8}};// B returns int(*)[3]
    func2(B);
    func3(c);
    // int X[2][4]//cannot be passed to func2






    return 0;
}