#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do
    {
         height = get_int("Height:");
    } while (height<1 || height>8);
    
    printf("Stored %i\n",height);
    
    for(int i=0; i<height;i++)
    {
        for(int j=0; j<height;j++)
        {
            if(j+i<height-1)
            {
            printf(" ");
            }
            else
            {
             printf("#");
            }
            
        }
        printf("\n");
    }
}
