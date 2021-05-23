#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Author : P.V.Abhiram
// CS50 Pset-2 : Caesar Cipher

int main(int argc, char *argv[])
{
    if (argc > 2)
    {
        printf("Usage: ./caesar key");
        return 1;
    }
    if (argc < 2)
    {
        printf("Usage: ./caesar key");
        return 1;
    }

    if (argc == 2)
    {

        // Taking the key
        char *o = argv[1];
        int k = atoi(o);

        if (k == 0)
        {
            printf("Usage: ./caesar key");
            return 1;
        }

        if (argc == 2 && isdigit(*argv[1]))
        {
            // Taking the text input
            int count = 0;
            char text[1000];
            printf("plaintext: ");
            fgets(text, sizeof(text), stdin);
            int len = strlen(text);
            len -= 1;
            for (int i = 0; i < len; i++)
            {
                if (islower(text[i]))
                {
                    text[i] = (text[i] + k - 'a') % 26 + 'a';
                }
                if (isupper(text[i]))
                {
                    text[i] = (text[i] + k - 'A') % 26 + 'A';
                }
            }
            printf("ciphertext: ");
            for (int i = 0; i < len; i++)
            {
                printf("%c", text[i]);
            }
            printf("\n");
        }
    }
    return 0;
}

