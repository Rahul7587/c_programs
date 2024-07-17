#include<stdio.h>
#include<stdlib.h>
int main() {
    int num,power,out=1,i;
    printf("Enter your number:");
    scanf("%d",&num);
    printf("Enter the power:");
    scanf("%d",&power);
    for (i=1;i<=power;i++)
    {
        out=out*num;
    }
    printf("The %dth power of %d is %d",power,num,out);
    return 0;
} 