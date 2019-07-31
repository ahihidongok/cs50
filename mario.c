/* mario.c 
 * Tu Mai 
 * Create Mario pyramid 
 *
 */ 
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    int rows;
    int space;
    int hash_r;
    int hash_l;
    
   do
    {
       printf("\nHeight: ");
       scanf("%d",&height);
       //printf("..%d",height);
    }
    while ((height < 1) || (height > 9));
    
    for (rows = 1; rows <= height; rows++)
    {
        for (space = (height-rows); space >0; space--)
        {
            printf(" ");
        }
        for (hash_l = 1; hash_l <= rows; hash_l++)
        {
            printf("#");
        }
        printf("  ");
        for (hash_r = 1; hash_r <= rows; hash_r++)
        {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}
