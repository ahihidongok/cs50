#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    //check to see if the user input exactly 2 arguments
    if (argc != 2)
    {
        printf("Usage: ./vigenere keyword\n");
        return 1;
    }
    else
    {
        for (int i = 0, n = strlen(argv[1]); i < n; i++)
        {
            if (!isalpha(argv[1][i]))
            {
                printf("Usage: ./vigenere keyword\n");

                return 1;
            }
        }
    }

    string key = argv[1];
    int keylength = strlen(key);
    string temp = get_string("plaintext: ");
    
    printf("ciphertext: ");
    for (int i = 0, j = 0, n = strlen(temp); i < n; i++)
    {
        int letterKey = tolower(key[j % keylength]) - 'a';

        if (isupper(temp[i]))
        {
            printf("%c", 'A' + (temp[i] - 'A' + letterKey) % 26);
            j++;
        }
        else if (islower(temp[i]))
        {
            printf("%c", 'a' + (temp[i] - 'a' + letterKey) % 26);
            j++;
        }
        else
        {
            printf("%c", temp[i]);
        }

    }
    printf("\n");

    return 0;
}


