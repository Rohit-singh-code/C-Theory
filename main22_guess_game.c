#include <stdlib.h>
#include <stdio.h>

int main()
{
    int secret_number = 9;
    int number_of_tries = 3;
    int tries = 1;
    int guess;
    while (tries <=3)
    {
        printf("guess the numeber: ");
        scanf("%d",&guess);
        tries +=1;
        if (guess==secret_number)
        {
            printf("you won");
            tries = 4;
        }
        else if (guess != secret_number)
        {
            if (tries > 3)
            {
                printf("you lost");                
            }
            else if (tries<=3)
            {
                printf("try again");
            }
            
                    
        }
    }
        
    return 0;
}
    
    
    
        


    
