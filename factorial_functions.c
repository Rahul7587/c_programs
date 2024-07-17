/*This program helps in calculating the factorial 
  of a given number using functions*/
#include<stdio.h>
#include<stdlib.h>
int factorial(int num)
{
    int total_product=1;
    int i;
    while (num>0)
    {
        total_product=total_product*num;
        num--;
    }
    return total_product;
}
int main() 
{
    int in;
    printf("Enter a number :");
    scanf("%d",&in);
    printf("The factorial of the given number is %d",factorial(in));
    return 0;
}