#include<stdio.h>
#include<stdlib.h>
int main() {
    int in,total_product=1,i=1;
    printf("Enter the number you want to find the factorial of:");
    scanf("%d",&in);
    for (i>0;i<=in;i++)
    {
        total_product=total_product*i;
    }
    printf("The factorial of %d is %d",in,total_product);
    return 0;
}