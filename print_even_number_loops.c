/*This program helps in printing ,consecutive even numbers*/
#include<stdio.h>
#include<stdlib.h>
int main() {
    int num,i,in;
    printf("Enter the number of consecutive terms needed:");
    scanf("%d",&in);
    num=in*2;
    for (i=2;i<=num;i++)
    {
        if (i%2==0)
        {
            printf("%d\t",i);
        }
    }
    return 0;
}