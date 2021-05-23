#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Author : P.V.Abhiram
// Lab - 2 : Scrabble

int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(char word1[])
{
    int len = strlen(word1);
    int arr[len];
    len -= 1;
    int total = 0;
    for (int i = 0; i < len; i++)
    {
        if (islower(word1[i]))
        {
            arr[i] = (int)word1[i];
        }
        if (isupper(word1[i]))
        {
            word1[i] = tolower(word1[i]);
            arr[i] = (int)word1[i];
        }
        if (word1[i] == '.' || word1[i] == ',' || word1[i] == '!' || word1[i] == '?')
        {
            arr[i] = 0;
        }
        if (isdigit(word1[i]))
        {
            arr[i] = 0;
        }
    }
    for (int i = 0; i < len; i++)
    {
        arr[i] = arr[i] - 97;
        total += POINTS[arr[i]];
    }
    return total;
}

int main()
{
    char word1[1000];
    char word2[1000];
    printf("Player 1: ");
    fgets(word1, sizeof(word1), stdin);
    printf("Player 2: ");
    fgets(word2, sizeof(word2), stdin);
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);
    if (score1 > score2)
    {
        printf("Player 1 wins!\n");
    }
    if (score2 > score1)
    {
        printf("Player 2 wins!\n");
    }
    if (score1 == score2)
    {
        printf("Tie!");
    }
    return 0;
}