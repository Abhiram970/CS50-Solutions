#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

//Author : P.V.Abhiram
// CS50 Pset-2 : Readability

int main()
{
    int count = 0;
    char o[1000];
    printf("Text: ");
    fgets(o, sizeof(o), stdin);
    int len, i;
    int letters = 0, digits = 0, words = 0, sentences = 0;
    len = strlen(o);
    for (i = 0; i < len; i++)
    {
        if (isalpha(o[i]) > 0)
        {
            letters += 1;
        }
        if (isdigit(o[i]) > 0)
        {
            digits += 1;
        }
        if (o[i] == ' ')
        {
            words += 1;
        }
        if (o[i] == '.' || o[i] == '!' || o[i] == '?')
        {
            sentences += 1;
        }
    }
    words += 1;
    int grade = round(0.0588 * (100 * letters / words) - 0.296 * (100 * sentences / words) - 15.8);
    if (grade < 1)
    {
        printf("Before Grade 1\n");
    }
    if (grade > 1 && grade < 16)
    {
        printf("Grade %d\n", grade);
    }
    if (grade > 16)
    {
        printf("Grade 16+\n");
    }
    return 0;
}