#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    //printf("Number: ");
    long card_num;
    int valid = 0; 
    while (valid == 0)
    {
        printf("Number: ");
        scanf("%li", &card_num);
        if (card_num < 1 || card_num > 9999999999999999)
        {
            valid = 0;
        }
        else 
        {
            valid = 1;
        }
    }
    valid = 0;
    while (valid == 0)
    {
        int digit = 0; 
        int sum = 0; 
        long temp = card_num;
        if(card_num > 0)
        {
            while (temp>0)
            {
                digit++;
                sum = sum + (temp%10);
                temp = temp / 10;
                if (temp >0)
                {
                    digit++;
                    sum = sum + (2*(temp%10));
                    temp = temp /10;
                }
            }
   
        
        if (sum % 10 == 0)
        {
            if (digit == 15 && (card_num / 10000000000000 == 34 || card_num / 10000000000000 == 37))
            {
                printf("AMEX\n");
                valid = 1;
            }
            else if (digit == 16 && (card_num / 10000000000000 >= 51 || card_num / 10000000000000 <= 55))
            {
                printf("MASTERCARD\n");
                valid = 1;
            }
            else if (digit == 16 && card_num / 10000000000000 == 4)
            {
                printf("VISA\n");
                valid = 1;
            }
            else
            {
                printf("INVALID\n");
                valid = 1;
            }
        }
        else
        {
            printf("INVALID\n");
            valid = 1;
        }
    }
    }
}
