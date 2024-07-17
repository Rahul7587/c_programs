#include<stdio.h>
#include<stdlib.h>
int main() {
    int in,i,j;
    printf("Please enter the lenght of the side needed:");
    scanf("%d",&in);
    for (i=1;i<=in;i++)
    {
        for (j=1;j<=i;j++)
        printf("%d",i);
        printf("\n");
    }
    return 0;
}