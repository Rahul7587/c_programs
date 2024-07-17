/*This program helps in finding the sum of digits in a number*/
#include<stdio.h>
#include<stdlib.h>
int main() {
    int remainder,num,i=0,total_sum=0;
    printf("Enter a num :");
    scanf("%d",&num);
    while (num>0)
    {
        remainder=num%10;
        total_sum=total_sum+remainder;
        num=num/10;    }
    printf("Sum of the digits :%d",total_sum);
    return 0;
}