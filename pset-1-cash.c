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
    int cents = round(cash * 100);
    int quarter = 25;
    int dime = 10;
    int nickel = 5;
    int penny = 1;
    int change = 0;
    int count = 0;
    int coins[4] = {quarter, dime, nickel, penny};
    while (cents)
    {
        if (coins[i] > cents)
        {
            i++;
        }
        else
        {
            cents = cents - coins[i];
            count++;
        }
    }
    printf("%d", count);
    return 0;
}