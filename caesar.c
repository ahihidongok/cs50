#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    //check to see if the user input exactly 2 arguments
    if (argc != 2)
    {
        printf("You must enter filename int \n");
        return 1;
    }

    //convert k
    int k = atoi(argv[1]);
    //check if k is not negative
    if (k < 0)
    {
        printf("Error. You must enter a positive integer for 2nd argument\n");
        return 1;
    }
    else
    {
        string input = get_string("plaintext: ");

        printf("ciphertext: ");
        for (int i = 0; i < strlen(input); i++)
        {

            if islower(input[i])
            {
                printf("%c", (((input[i] + k) - 97) % 26) + 97);
            }
            else if isupper(input[i])
            {
                printf("%c", (((input[i] + k) - 65) % 26) + 65);
            }
            else
            {
                printf("%c", input[i]);
            }
        }
        printf("\n");

        return 0;
    }
}

