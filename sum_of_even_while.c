#include<stdio.h>
#include<stdlib.h>
/*This program helps in finding the sum of even numbers*/
int main() {
    int in,i=0,total_sum=0,even_num;
    printf("Enter a number:");
    scanf("%d",&in);
    while (i<=in && i>=0) {
        if (i%2==0)
        {
            total_sum+=i;
        }
        i++;
    }
    printf("The sum of the even numbers is :%d",total_sum);
    return 0;
}