#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int height,i,j,k;
    do
    {
        printf("Height: ");
        scanf("%d",&height);
    } 
    while (height < 1 || height > 8);
    for (i=0;i<height-1;i++){
        printf(" ");
    }
    printf("#\n");
    for (i=1;i<height;i++){
        for (k=height-i-2;k>=0;k--){
        printf(" ");
        }
        for (j=0;j<i+1;j++){
            printf("#");
        }
        printf("\n");
    }
    return 0;
}