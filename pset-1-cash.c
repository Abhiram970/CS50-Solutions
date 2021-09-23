#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

// Author : P.V. Abhiram
// CS50 Pset - 1 : Cash

int main()
{
    int i = 0, j;
    float cash;
    do
    {
        cash = get_float("change owed = ");
    } while (cash < 0);

    int one = 1;
    int two = 2;
    int five = 5;
    int ten = 10;
    int count = 0;
    int coins[4] = {ten, five, two, one};
    while (cash)
    {
        if (coins[i] > cash)
        {
            i++;
        }
        else
        {
            cash = cash - coins[i];
            printf("%d\n", coins[i]);
            count++;
        }
    }
    printf("%d", count);
    return 0;
}