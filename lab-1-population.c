#include <stdio.h>
#include <math.h>


//Author : P.V. Abhiram
// CS50 Lab-1 : Population

int main(void){
    int end,start,count = 0;
    int i;
    do
    {
        printf("Start size: ");
        scanf("%d", &start);
    } while (start < 9);
    do
    {
        printf("End size: ");
        scanf("%d", &end);
    } while (end < start);
    int j = start;
    int jo = start;
    while (jo < end){
        jo += trunc(j/3);
        jo -= trunc(j/4);
        j = jo;
        count++;
    }
    printf("Years: %d",count);
}