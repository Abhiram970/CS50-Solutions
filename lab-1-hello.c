#include <stdio.h>

// author : P.V.Abhiram
// CS50 Lab 1 : Hello

int main(void)
{
    printf("What is your name ?\n");
    char ans[100];
    gets(ans);
    printf("Hello , %s", ans);
}