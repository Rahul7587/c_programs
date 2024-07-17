/*This program helps in drawing a pattern of right angled triangles*/
#include<stdio.h>
#include<stdlib.h>
int main() {
    int count,i,j;
    printf("Enter the number of rows needed :");
    scanf("%d",&count);
    for (i=1;i<=count;i++)
    {
        for (j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}